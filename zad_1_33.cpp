#include <iostream>
#include <vector>

int find_neighboring_equals(std::vector<int> v)
{
    int neighboring_equals{};

    for (size_t i = 0; i < v.size() - 1; i++)
    {
        if (v[i+1] == v[i])
            neighboring_equals++;
    }

    return neighboring_equals;
}

int find_numbers_summing_up_to_ten(std::vector<int> v)
{
    int neighboring_numbers_summing_up_to_ten{};

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] + v[i+1] == 10)
            neighboring_numbers_summing_up_to_ten++;
    }

    return neighboring_numbers_summing_up_to_ten;
}

int main()
{
    std::vector<int> x = { 2,7,1,1,4,9,3,2,1,4,1,9,6,1,3,0,1,2,3,6,8,5,6,9,
    3,0,8,1,8,8,7,0,7,8,5,0,2,2,3,7,1,7,2,4,7,7,5,9,0,7,7,9,2,2,2,7,
    0,0,5,4,6,3,9,3,5,1,0,0,9,2,9,2,8,5,0,8,5,7,0,9,6,4,9,7,8,8,6,5,
    4,3,2,5,8,9,4,6,8,7,9,9 };

    int neighboring_equals = find_neighboring_equals(x);
    int neighboring_summing_up_to_ten = find_numbers_summing_up_to_ten(x);

    std::cout << "Liczba sąsiadujących identycznych liczb: " << neighboring_equals << std::endl;

    std::cout << "Liczba sąsiadujących liczb sumujących się do 10: " << neighboring_summing_up_to_ten << std::endl;

    return EXIT_SUCCESS;
}