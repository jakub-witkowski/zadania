#include <iostream>
#include <thread>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    std::cout << "Wylosowana liczba to: " << number << ". \n";

    return number;
}

std::pair<int,int> draw_coords(int max, int min = 2)
{
    std::pair<int,int> coords{};
    srand(time(0));

    std::this_thread::sleep_for(std::chrono::seconds(1));
    coords.first = (rand() % (max - min + 1)) + min;

    std::this_thread::sleep_for(std::chrono::seconds(1));
    coords.second = (rand() % (max - min + 1)) + min;

    std::cout << "Współrzędne znaku @ to: " << coords.first << ", " << coords.second << ". \n";

    return coords;
}

void print_filled_square_with_sign(int n)
{
    std::pair<int,int> sign_coords = draw_coords(n - 2);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == sign_coords.first - 1 && j == sign_coords.second - 1)
                std::cout << "@ ";
            else
                std::cout << "# ";
        }
        
        std::cout << std::endl;
    }
}

void print_empty_square_with_sign(int n)
{
    std::pair<int,int> sign_coords = draw_coords(n - 2);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == sign_coords.first - 1 && j == sign_coords.second - 1)
                std::cout << "@ ";
            else if (i == 0 || i == n - 1)
                std::cout << "# ";
            else if (j == 0 || j == n - 1)
                std::cout << "# ";
            else if (j > 0 && j < n - 1)
                std::cout << "  ";
        }
        
        std::cout << std::endl;
    }
}

int main()
{
    int random = draw_number(5,12);

    print_filled_square_with_sign(random);

    std::cout << std::endl;
    
    print_empty_square_with_sign(random);

    return 0;
}