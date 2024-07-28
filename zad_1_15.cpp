#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1{};
    int n{1};

    while (v1.size() < 100)
    {
        for (int i = 1; i <= n; i++)
            v1.push_back(n);

        n++;
    }
    

    for (int i = 0; i < 100; i++)
    {
        std::cout << i+1 << ": " << v1[i] << std::endl;
    }

    return EXIT_SUCCESS;
}