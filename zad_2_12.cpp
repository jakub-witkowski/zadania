#include <iostream>
#include <string>
#include <cmath>

long double set_fraction(int n)
{
    return abs(n)/pow(10, std::to_string(abs(n)).size());
}

int main()
{
    long input1{};
    long input2{};

    std::cout << "Wprowadź dwie liczby całkowite: \n";
    std::cin >> input1;
    std::cin >> input2;

    std::cout << "\nWynik operacji to: \n";
    std::cout << input1 + set_fraction(input2) << std::endl;

    return 0;
}