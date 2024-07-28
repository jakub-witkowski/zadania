#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1{};
    int n1{6};
    int n2{2};

    while (v1.size() < 100)
    {
        v1.push_back(n1);
        v1.push_back(n2);
        n1+=2;
        n2++;
    }
    

    for (int i = 0; i < 100; i++)
    {
        std::cout << i+1 << ": " << v1[i] << std::endl;
    }

    return EXIT_SUCCESS;
}