#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1{};

    for (int i = 0; i < 25; i++)
    {
        v1.push_back(3);
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(1);
    }

    for (int i = 0; i < 100; i++)
    {
        std::cout << i+1 << ": " << v1[i] << std::endl;
    }

    return EXIT_SUCCESS;
}