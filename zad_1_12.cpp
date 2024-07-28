#include <iostream>

int main()
{
    int lower_limit{-25};
    int upper_limit{25};

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        if (i == 0)
            continue;
        else
            std::cout << i << std::endl;
    }

    return EXIT_SUCCESS;
}