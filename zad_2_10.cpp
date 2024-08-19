#include <iostream>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void print_repeat(int n, char z)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << i + 1 << ": " << z << "\n";
    }
}

int main()
{
    char input{};

    std::cout << "Wprowadź znak: " << std::endl;
    std::cin >> input;

    print_repeat(draw_number(20,30), input);

    return 0;
}