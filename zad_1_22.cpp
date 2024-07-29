#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{};
    int input{};

    std::cout << "Wprowadzaj liczby: " << std::endl;

    while (true)
    {
        std::cin >> input;
        v.push_back(input);

        if (v.size() > 1)
        {
            if (v[v.size() - 1] == v[v.size() - 2])
            {
                std::cout << "Wprowadzono dwa razy z rzędu tę samą liczbę." << std::endl;
                break;
            }
        }
    }
}