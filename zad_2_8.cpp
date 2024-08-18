#include <iostream>
#include <iomanip>

double draw_number(int min, int max)
{
    srand(time(NULL));
    double number = (rand() / (double)RAND_MAX * max) + min;  

    return number;
}

int main()
{
    double number = draw_number(0,1);

    std::cout << "Wylosowana liczba z dokładnością do trzeciego miejsca po przecinku: " << std::setprecision(3) << number << std::endl;

    return 0;
}