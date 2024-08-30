#include <iostream>

double linear_function(double a, double b, double x)
{
    return (a * x) + b;
}

int main()
{
    double a{}, b{}, x{};

    std::cout << "Wprowadź wartość współczynników a i b oraz wartość x dla funkcji liniowej: \n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> x;

    std::cout << "Wartość funkcji dla podanych parametrów: " << linear_function(a, b, x) << ". \n";

    return 0;
}