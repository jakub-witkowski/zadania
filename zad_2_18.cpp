#include <iostream>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void draw_square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
                std::cout << "#";
            else if (j == 0 || j == n - 1)
                std::cout << "#";
            else if (j > 0 && j < n - 1)
                std::cout << " ";
        }
        
        std::cout << std::endl;
    }
}

int main()
{
    int random = draw_number(5,12);

    draw_square(random);

    return 0;
}