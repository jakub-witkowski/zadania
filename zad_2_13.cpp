#include <iostream>
#include <thread>

void print_rows_and_cols(char c, int rows, int cols)
{
    std::cout << "\nRysuję " << rows << " wierszy po " << cols << " znaków " << c << ".\n";

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < cols; j++)
            std::cout << c;
    
        std::cout << "\n";
    }
}

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

int main()
{
    char sign{};

    std::cout << "Wprowadź znak: \n";
    std::cin >> sign;

    int rows = draw_number(5,10);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    int cols = draw_number(5,10);

    print_rows_and_cols(sign, rows, cols);

    return 0;
}