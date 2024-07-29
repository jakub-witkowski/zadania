#include <iostream>
#include <vector>

void print_vector(std::vector<int> vc)
{
    std::cout << "Liczby w wektorze: ";

    for (auto el : vc)
        std::cout << el << " ";

    std::cout << std::endl;
}

int main()
{
    std::vector<int> v{};
    int input{};

    std::cout << "Wprowadź liczbę całkowitą: " << std::endl;

    while (true)
    {
        std::cin >> input;

        v.push_back(input);
        v.push_back(input);

        int product = (*(v.end() - 1) * *(v.end() - 2));

        if (product <= 1000)
        {
            v.push_back(product);
            print_vector(v);
        }
        else
        {
            print_vector(v);
            break;
        }
    }

    return EXIT_SUCCESS;
}