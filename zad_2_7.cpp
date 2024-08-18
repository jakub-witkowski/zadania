#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
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

    for (size_t i = 0; i < 20; i++)
    {
        v.push_back(draw_number(0,1000));
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    print_vector(v);

    std::sort(v.begin(), v.end(), [](int x, int y){return x > y;});

    std::cout << "Trzy największe z wylosowanych liczb to: " << v[0] << ", " << v[1] << " i " << v[2] << "." << std::endl; 

    return 0;
}