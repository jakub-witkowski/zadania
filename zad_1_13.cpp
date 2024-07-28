#include <iostream>

int main()
{
    int lower_limit{1};
    int upper_limit{120};
    int displayed_numbers{};
    int skipped_numbers{};

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        if ((i % 5 == 0) && (i % 11 == 0))
            skipped_numbers++;
        else
        {
            std::cout << i << std::endl;
            displayed_numbers++;
        }
    }

    std::cout << "Wyświetlono " << displayed_numbers << " liczb." << std::endl;
    std::cout << "Pominięto " << skipped_numbers << " liczb." << std::endl;

    return EXIT_SUCCESS;
}