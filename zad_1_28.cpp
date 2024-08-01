#include <iostream>
#include <string>

int main()
{
    char input{};
    int counter{0};
    std::string line{};

    std::cout << "Podaj cyfrę: " << std::endl;

    while (counter < 5)
    {
        std::cin >> input;
        line += input;
        counter++;
    }

    long number = std::stoi(line);

    std::cout << "Wprowadzone cyfry utworzyły liczbę " << number << "." << std::endl;

    return 0;
}