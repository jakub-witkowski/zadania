#include <iostream>
#include <vector>
#include <cstdlib>

// #define LOWER_LIMIT 1
// #define UPPER_LIMIT 100

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
    std::cout << "Wielkość: " << v.size() << std::endl; 
    for (auto el : v)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}

void copy_reorder(std::vector<int> v_from, std::vector<int> &v_to)
{
    if (v_from.size() == 0)
        std::cout << "Wektor jest pusty." << std::endl;
    else
    {
        for (auto el : v_from)
        {
            if (el % 2 == 0)
                v_to.push_back(el);
            else
                continue;
        }

        for (auto el : v_from)
        {
            if (el % 2 != 0)
                v_to.push_back(el);
            else
                continue;
        }
    }
}

int main(int argc, char** argv)
{
    std::vector<int> vect1{};
    fill_vector(10, vect1, atoi(argv[1]), atoi(argv[2]));
    std::vector<int> vect2{};
    copy_reorder(vect1, vect2);

    print_vector(vect1);
    print_vector(vect2);

    return EXIT_SUCCESS;
}