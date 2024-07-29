#include <iostream>
#include <vector>

bool check_number(int t, std::vector<int> v)
{
    bool is_present{false};

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] == t)
            is_present = true;
        else
            continue;
    }

    return is_present;
}

int main()
{
    std::vector<int> v{};
    int input{};

    std::cout << "Wprowadzaj liczby: " << std::endl;

    while (v.size() < 10)
    {
        std::cin >> input;

        if (check_number(input, v) == false);
            v.push_back(input);
    }
}