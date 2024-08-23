#include <iostream>
#include <cmath>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void print_upper_triangle(int max, int n = 5)
{
    size_t center_pos = floor(max / 2);
    size_t start_pos, end_pos;
    start_pos = end_pos = center_pos;
    
    for (size_t i = 0; i < ((n + 1) / 2); i++)
    {
        for (size_t j = 0; j <= end_pos; j++)
        {
            if (j >= start_pos && j <= end_pos)            
                std::cout << "#";            
            else
                std::cout << " ";
        }

        std::cout << std::endl;
        
        start_pos--;
        end_pos++;
    }
}

void print_christmas_tree(int n)
{
    // int max = n + ((n-1) * 2);
    int max = 5 + ((n-1) * 2);

    for (size_t i = 0; i < n; i++)
    {
        print_upper_triangle(max, 5 + (i * 2));
    }
}

int main()
{
    int random_number = draw_number(3,21);

    std::cout << "Wylosowana liczba to " << random_number << "." << std::endl;

    print_christmas_tree(random_number);

    return 0;
}