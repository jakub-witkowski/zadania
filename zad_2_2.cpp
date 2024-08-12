#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

void fill_vector(size_t n, std::vector<int> &v, int min, int max)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        v.push_back((rand() % (max - min + 1)) + min);
    }
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

void print_sum_in_loop(std::vector<int> v, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << i + 1 << ": "<< v[0] << " + " << v[1] << " = " << v[0] + v[1] << "\n";
    }
}

int find_and_remove_largest(std::vector<int> &v)
{
    std::vector<int>::iterator result = std::max_element(v.begin(), v.end());
    int largest = *result;

    v.erase(result);

    return largest;
}

int main()
{
    std::vector<int> v;
    fill_vector(3, v, 1, 100);

    print_vector(v);

    int number_of_repetitions{find_and_remove_largest(v)};
    
    std::cout << "Największy element znaleziony w wektorze to: " << number_of_repetitions << "\n";

    std::cout << "Suma pozostałych liczb wyświetlona " << number_of_repetitions << " razy: \n";

    print_sum_in_loop(v, number_of_repetitions);

    return 0;
}