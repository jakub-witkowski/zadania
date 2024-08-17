#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

int main()
{
    int random_number{};
    long draw_count{};

    while (random_number != 100)
    {
        random_number = draw_number(0,100);
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << draw_count + 1 << ": " << random_number << "\n";
        draw_count++;
    }

    std::cout << "Wykonano " << draw_count << " losowań. \n";

    return 0;
}