#include <iostream>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void draw_chessboard(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    std::cout << "#";
                else
                    std::cout << " ";
            }
            else
            {
                if (j % 2 == 0)
                    std::cout << " ";
                else
                    std::cout << "#";
            }
        }
        
        std::cout << std::endl;
    }
}

int main()
{
    int random = draw_number(5,12);

    draw_chessboard(random);

    return 0;
}