#include <iostream>
#include <vector>

std::vector<int> find_distance(int digit, std::vector<int> v)
{
    std::vector<int> digits{};
    std::vector<int> distances{};

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == digit)
            digits.push_back(i);
        else
            continue;
    }

    for (int i = 0; i < digits.size() - 1; i++)
    {
        distances.push_back(digits[i+1] - digits[i] - 1);
    }

    return distances;
}

int main()
{
    std::vector<int> x = { 2,7,1,1,4,9,3,2,1,4,1,9,6,1,3,0,1,2,3,6,8,5,6,9,
    3,0,8,1,8,8,7,0,7,8,5,0,2,2,3,7,1,7,2,4,7,7,5,9,0,7,7,9,2,2,2,7,
    0,0,5,4,6,3,9,3,5,1,0,0,9,2,9,2,8,5,0,8,5,7,0,9,6,4,9,7,8,8,6,5,
    4,3,2,5,8,9,4,6,8,7,9,9 };

    std::vector<int> distances = find_distance(9, x);

    std::cout << "Odległości między dziewiątkami: ";

    for (auto i : distances)
        std::cout << i << " ";

    std::cout << std::endl;

    return EXIT_SUCCESS;
}