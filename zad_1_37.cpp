#include <iostream>

int main()
{
    float a = 5.75, b = 4.12;

    std::cout << "Wynik mnożenia " << a << " * " << b << " wynosi " << a / (1.0/b) << ". \n"; 

    float c = 5.75, e{};
    int d = 4;

    for (int i = 1; i <= d; i++)
    {
        e += c;
    }

    std::cout << "Wynik mnożenia " << c << " * " << d << " wynosi " << e << ". \n"; 

    return 0;
}