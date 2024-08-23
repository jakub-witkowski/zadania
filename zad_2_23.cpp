#include <iostream>

struct less_than_zero
{

};

int power_recursive(int b, int exp)
{
    return 0;
}

int power_iterative(int b, unsigned exp)
{
    less_than_zero exc;
    int result{b};

    if (exp < 0)
        throw exc;

    if (exp == 0)
        return 0;
    else if (exp == 1)
        return b;
    else
    {
        for (int i = 2; i <= exp; i++)
            result *= b;
    }

    return result;
}

int main()
{
    int base;
    unsigned exponent;

    std::cout << "Wprowadź liczbę całkowitą, którą chcesz podnieść do potęgi: \n";
    std::cin >> base;

    std::cout << "Wprowadź liczbę całkowitą nieujemną, która ma być wykładnikiem: \n";
    std::cin >> exponent;

    std::cout << "Liczba " << base << " podniesiona do potęgi " << exponent << " daje " << power_iterative(base, exponent) << ". \n";

    return 0;
}