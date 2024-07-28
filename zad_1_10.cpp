#include <iostream>

int main()
{
    std::cout << "Pętla for: " << std::endl;

    for (int i = 0; i < 100; i++)
    {
        std::cout << i + 1 << std::endl;
    }

    std::cout << "Pętla while: " << std::endl;

    int j = 0;
    while (j < 100)
    {
        std::cout << j + 1 << std::endl;
        j++;
    }

    std::cout << "Pętla do...while: " << std::endl;

    int k = 0;
    do
    {
        std::cout << k + 1 << std::endl;
        k++;
    } while (k < 100);
}