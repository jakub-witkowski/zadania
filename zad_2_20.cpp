#include <iostream>
#include <cmath>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    if (number % 2 != 0)
        return number - 1;
    else
        return number;
}

void print_triangle(int n)
{
    size_t center_pos = floor(n / 2);
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

int main()
{
    int random_number = draw_number(7,21);

    print_triangle(random_number);

    return 0;
}