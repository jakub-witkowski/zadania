#include <iostream>
#include <vector>

std::vector<int> find_failure_periods(std::vector<bool> v)
{
    std::vector<int> failure_dates{};
    int number_of_days{};

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            number_of_days++;
        
        if (v[i] == 1 && number_of_days < 5)
        {
            number_of_days = 0;
            continue;
        }

        if (number_of_days >= 5)
        {
            failure_dates.push_back(i - number_of_days + 1);
            number_of_days = 0;
        }
    }

    return failure_dates;
}

int main()
{
    std::vector<bool> diet{1,1,0,1,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,0,1,1,0,0,0,1,1,0,0,1,1,1,0,0,1,0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,0,0,0,1,1,0,
    1,0,1,0,0,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,0,1,0,0,1,1,0,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,
    1,0,0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,1,0,0,1,1,0,0,1,0,1,0,1,1,0,1,1,0,0,1,1,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,0,1,
    1,0,1,0,1,0,1,0,1,0,1,1,0,1,1,1,0,0,1,1,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,1,1,
    0,1,0,1,1,0,0,0,1,1,1,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,0,0,0,0,1,1,0,1,1,1,1,0,1,0,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,0,0,0,1,
    1,1,1,0,0,1,0,0,0,1,1,1,1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1
    };

    int success{};

    for (size_t i = 0; i < diet.size(); i++)
    {
        if (diet[i] == true)
            success++;
        else
            continue;
    }

    std::cout << "Liczba dni sukcesu: " << success << ". " << std::endl;

    std::cout << "Pięciodniowe lub dłuższe okresy porażki rozpoczęły się w dniach: " << std::endl;

    std::vector<int> failure_dates = find_failure_periods(diet);

    for (auto i : failure_dates)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;
}