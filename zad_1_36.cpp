#include <iostream>

int main()
{
    float a,b,c;

    std::cout << "Wprowadź trzy nieujemne liczby zmiennoprzecinkowe: \n";
    std::cin >> a >> b >> c;

    if ((a * a) + (b * b) == (c * c))
        std::cout << "Podane długości boków mogą utworzyć trójkąt prostokątny. \n";
    else
        std::cout << "Podane długości boków nie mogą utworzyć trójkąta prostokątnego. \n";

    return 0;
}