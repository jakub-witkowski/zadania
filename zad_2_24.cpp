#include <iostream>

long long int round(double n)
{
    std::string number = std::to_string(n);
    size_t decimal_point_pos{};

    for (size_t i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '.')
            decimal_point_pos = i;
    }

    std::string integral_part_substr{};

    for (size_t k = 0; k < decimal_point_pos; k++)
    {
        integral_part_substr += number.at(k);
    }

    long long int integral_part_numerical = std::stoi(integral_part_substr);

    if (n > 0)
    {
        if (n - integral_part_numerical >= 0.50)
            return integral_part_numerical + 1;
        else
            return integral_part_numerical;
    }
    else
    {
        if (n + abs(integral_part_numerical) <= -0.50)
            return integral_part_numerical - 1;
        else
            return integral_part_numerical;
    }
}

int main()
{
    double input{};
    long long int result{};

    std::cout << "Wprowadź liczbę typu double, która ma zostać zaokrąglona: " << std::endl;
    std::cin >> input;

    result = round(input);
    std::cout << "Wprowadzona liczba po zaokrągleniu: " << result << ". " << std::endl;

    return 0;
}