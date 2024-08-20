#include <iostream>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void draw_left_aligned_right_triangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            std::cout << "# ";
        
        std::cout << std::endl;
    }
}

int main()
{
    int random = draw_number(5,12);
    std::cout << "Wylosowana liczba: " << random << ". \n";

    draw_left_aligned_right_triangle(random);

    return 0;
}