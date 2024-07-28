#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1{};
    int n{1};
    // int index{0};

    v1.push_back(100);

    while (v1.size() < 100)
    {
        v1.push_back(v1[n-1] - n);
        // index++;
        n++;
    }
    

    for (int i = 0; i < 100; i++)
    {
        std::cout << i+1 << ": " << v1[i] << std::endl;
    }

    return EXIT_SUCCESS;
}