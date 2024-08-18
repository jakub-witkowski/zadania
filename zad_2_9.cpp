#include <iostream>
#include <iomanip>
#include <vector>
#include <thread>

void print_vector(std::vector<double> v)
{
    std::cout << "Elementy wektora: " << v.size() << std::endl; 
    for (auto el : v)
    {
        std::cout << std::setprecision(3) << el << " ";
    }
    std::cout << std::endl;
}

double find_mean(std::vector<double> v)
{
    double mean;

    for (auto el : v)
        mean += el;

    return mean/v.size();
}

double draw_number(int min, int max)
{
    srand(time(NULL));
    double number = (rand() / (double)RAND_MAX * max) + min;  

    return number;
}

int main()
{
    std::vector<double> v;

    for (size_t i = 0; i < 20; i++)
    {
        v.push_back(draw_number(1,-1));
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    print_vector(v);

    std::cout << "Średnia wartość elementów wektora: " << find_mean(v) << std::endl;

    return 0;
}