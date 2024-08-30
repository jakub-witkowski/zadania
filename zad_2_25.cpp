#include <iostream>

void double_fractional_part(double* n)
{
    std::string number = std::to_string(*n);
    size_t decimal_point_pos{};

    for (size_t i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '.')
            decimal_point_pos = i;
    }

    std::string integral_part_substr{};

    for (size_t j = 0; j < decimal_point_pos; j++)
    {
        integral_part_substr += number.at(j);
    }

    int integral_part_numerical = std::stoi(integral_part_substr);

    std::string fractional_part_substr{"0."};

    for (size_t k = decimal_point_pos + 1; k < number.length(); k++)
    {
        fractional_part_substr += number.at(k);
    }

    double fractional_part_numerical = std::stod(fractional_part_substr);

    if  (*n >= 0)
        *n = integral_part_numerical + (2 * fractional_part_numerical);
    else
        *n = integral_part_numerical - (2 * fractional_part_numerical);
}

int main()
{
    double input;
    std::cout << "Wprowadź liczbę, której część ułamkowa ma zostać podwojona: \n";
    std::cin >> input;

    double_fractional_part(&input);

    std::cout << "Liczba z podwojoną częścią ułamkową: " << input << std::endl;

    return 0;
}