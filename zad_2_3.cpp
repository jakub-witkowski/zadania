#include <iostream>
#include <string>
#include <cstdlib>
#include <thread>

int draw_number()
{
    srand(time(0));
    int number = (rand() % (122 - 65 + 1)) + 65; //ASCII A: 65, z: 122

    return number;
}

int main()
{
    std::string s;
    int letter{};
    int draw_count{};
    int ignored_count{};

    while (letter != 65 && letter != 122)
    {
        letter = draw_number();
        std::this_thread::sleep_for(std::chrono::seconds(1));

        if (letter > 90 && letter < 97) // ASCII 91 - 96: '[' '\' ']' '^' '_' '`'
        {
            std::cout << (char) letter << " - zignorowano \n";
            ignored_count++;
            continue;
        }
        else
        {
            std::cout << (char) letter << "\n";
            s += (char) letter;
            draw_count++;
        }
    }

    std::cout << "Liczba losowań: " << draw_count + ignored_count << ".\n";
    std::cout << "Zignorowanych znaków: " << ignored_count << ".\n";
    std::cout << "Łańcuch znaków utworzony w trakcie losowań: " << s << ".\n";

    return 0;
}