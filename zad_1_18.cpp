#include <iostream>

int main()
{
    int input{};

    while (true)
    {
        std::cout << "Wprowadź liczbę całkowitą: " << std::endl;
        std::cin >> input;

        if ((input > 1) && (input <= 10))
            break;
        else
            std::cout << input * 2 << std::endl;
    }


    return EXIT_SUCCESS;
}