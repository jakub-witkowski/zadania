#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

int count_positive(std::vector<int> v)
{
    int count{};

    for (auto el : v)
    {
        if (el > 0)
            count++;
        else
            continue;
    }

    return count;
}

int count_negative(std::vector<int> v)
{
    int count{};

    for (auto el : v)
    {
        if (el < 0)
            count++;
        else
            continue;
    }

    return count;
}

int count_odd(std::vector<int> v)
{
    int count{};

    for (auto el : v)
    {
        if (el % 2 != 0)
            count++;
        else
            continue;
    }

    return count;
}

int count_even(std::vector<int> v)
{
    int count{};

    for (auto el : v)
    {
        if (el % 2 == 0)
            count++;
        else
            continue;
    }

    return count;
}

void print_vector(std::vector<int> v)
{
    std::cout << "Elementy wektora: " << v.size() << std::endl; 
    for (auto el : v)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v;
    int positive_count{};
    int negative_count{};
    int even_count{};
    int odd_count{};

    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(draw_number(-10,10));
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    positive_count = count_positive(v);
    negative_count = count_negative(v);
    odd_count = count_odd(v);
    even_count = count_even(v);

    print_vector(v);

    std::cout << "\nPodsumowanie: \n";
    std::cout << "Liczby dodatnie: " << positive_count << "\n"
            << "Ujemne: " << negative_count << "\n"
            << "Nieparzyste: " << odd_count << "\n"
            << "Parzyste: " << even_count <<
            std::endl;

    return 0;
}