#include <iostream>
#include <iomanip>

// int power_recursive(int b, int exp)
// {
//     return 0;
// }

long long power_iterative(int b, unsigned exp)
{
    long long result{b};

    if (exp == 0)
        return 0;
    else if (exp == 1)
        return result;
    else
    {
        for (int i = 2; i <= exp; i++)
            result *= b;
    }

    return result;
}

double power_iterative(int b, int exp)
{
    double result{static_cast<double>(b)};

    if (exp == 0)
        return 0;
    else if (exp == 1)
        return result;
    else if (exp < 0)
    {
        for (int i = 2; i <= abs(exp); i++)
        {
            result *= b;
        }

        return (1 / result);
    }
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
    int input;
    unsigned natural_exponent;
    int integer_exponent;

    std::cout << "Wprowadź liczbę całkowitą, którą chcesz podnieść do potęgi: \n";
    std::cin >> base;

    std::cout << "Wprowadź liczbę całkowitą nieujemną, która ma być wykładnikiem: \n";
    std::cin >> input;

    if (input >= 0)
    {
        natural_exponent = input;
        int result = power_iterative(base, natural_exponent);
        std::cout << "Liczba " << base << " podniesiona do potęgi " << natural_exponent << " daje " << result << ". \n"; 
    }
    else
    {
        integer_exponent = input;
        double result = power_iterative(base, integer_exponent);
        std::cout << "Liczba " << base << " podniesiona do potęgi " << integer_exponent << " daje " << std::setprecision(3) << result << ". \n";
    }

    return 0;
}