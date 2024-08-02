#include <iostream>
#include <vector>

int main()
{
    std::vector<int> blob_mass {1,1};

    for (int i = 2; i < 13; i++)
        blob_mass.push_back(blob_mass[i-1] + blob_mass[i-2]);

    for (auto i : blob_mass)
        std::cout << i << " kg, ";

    std::cout << "\nPo 13. okrążeniu blob waży " << *(blob_mass.end() - 1) << "kg. " << std::endl;

    return EXIT_SUCCESS;
}