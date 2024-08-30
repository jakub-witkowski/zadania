#include <iostream>

double mod(double n)
{
    return (n >= 0) ? n : -n;
}

int main()
{
    double input;

    std::cout << "Wprowadź liczbę zmiennoprzecinkową: \n";
    std::cin >> input;

    std::cout << "Wartość bezwzględna wprowadzonej liczby: " << mod(input) << "\n";

    return 0;
}