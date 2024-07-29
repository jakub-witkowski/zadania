#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{};
    int input{};

    std::cout << "Wprowadź pięć liczb całkowitych: " << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> input;
        v.push_back(input);
    }

    for (auto el : v)
        std::cout << el << " ";

    std::cout << std::endl;

    bool is_increasing{true};

    for (int i = v.size() - 1; i > 0; i--)
    {
        if (v[i] < v[i-1])
        {
            is_increasing = false;
            break;
        }
        else
            continue;
    }

    if (is_increasing == true)
        std::cout << "Ciąg jest rosnący." << std::endl;

    return EXIT_SUCCESS;
}