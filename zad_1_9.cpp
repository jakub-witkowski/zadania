#include <iostream>
#include <string>

int main()
{
    int input{};

    std::cout << "Podaj liczbę całkowitą: ";
    std::cin >> input;

    if (input < 0)
        input--;
    else if (input > 0)
        input++;

    std::cout << "Liczba po zmianach: " << input << std::endl;

    std::string message{};

    if (input % 2 == 0)
        message = "Liczba po zmianach jest parzysta.";
    else
        message = "Liczba po zmianach jest nieparzysta.";

    std::cout << message << std::endl;
    
    return EXIT_SUCCESS;
}