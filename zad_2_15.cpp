#include <iostream>
#include <vector>
#include <thread>

void print_vector_backward(std::vector<int> v)
{
    std::cout << "Elementy wektora: " << v.size() << std::endl; 
    
    for (size_t i = 1; i <= v.size(); i++)
    {
        std::cout << v[v.size() - i] << " ";
    }
    
    std::cout << std::endl;
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

int draw_number(int min, int max)
{
    srand(time(0));
    int number = (rand() % (max - min + 1)) + min;

    return number;
}

void even_numbers_to_zero(std::vector<int>& v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            v[i] = 0;
        else
            continue;
    }
}

void odd_numbers_to_opposite(std::vector<int>& v)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
            v[i] = -v[i];
        else
            continue;
    }
}

int main()
{
    int vector_length = draw_number(10,100);
    // int vector_length = 10; 
    std::vector<int> v(vector_length);

    std::cout << "Losuję " << vector_length << " liczb do umieszczenia w wektorze.\n";

    for (size_t i = 0; i < v.size(); i++)
    {
        int random_number = draw_number(1, 1000);
        v.at(i) = random_number;
        std::cout << i + 1 << ": " << random_number << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    even_numbers_to_zero(v);
    // std::cout << "Rozmiar wektora: " << v.size() << std::endl;
    odd_numbers_to_opposite(v);
    // std::cout << "Rozmiar wektora: " << v.size() << std::endl;
    // print_vector(v);
    print_vector_backward(v);

    return 0;
}