#include <iostream>
#include <vector>
#include <cstdlib>

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
    int random_number{};
    int pos{};
    bool is_slot_free{false};
    std::vector<int> v(20, -1);

    for (size_t i = 0; i < 20; i++)
    {
        random_number = draw_number(0,20);
        
        while (is_slot_free == false)
        {
            pos = draw_number(0,19);

            if (v.at(pos) == -1)
            {
                is_slot_free = true;
                v.at(pos) = random_number;
            }
        }
        
        is_slot_free = false;
        std::cout << "Losowanie " << i + 1 << " zakończone.\n";
    }

    print_vector(v);

    return 0;
}