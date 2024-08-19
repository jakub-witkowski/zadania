#include <iostream>
#include <thread>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

int main()
{
    int number{1};

    while (number != 1000)
    {
        std::cout << "Losuję liczbę z zakresu od " << number << " do 1000: ";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        number = draw_number(number, 1000);
        std::cout << number << std::endl;
    }

    return 0;
}