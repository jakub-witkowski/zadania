#include <iostream>
#include <vector>
#include <cstdlib>

void fill_vector(size_t n, std::vector<int> &v, int min, int max)
{
    srand(time(0));
    for (size_t i = 0; i < n; i++)
    {
        v.push_back((rand() % (max - min + 1)) + min);
    }
}

int main(int argc, char* argv[])
{
    std::vector<int> v{};
    fill_vector(10, v, atoi(argv[1]), atoi(argv[2]));

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << *(v.begin() + i) << " ";
    }

    std::cout << "\n";

    return 0;
}