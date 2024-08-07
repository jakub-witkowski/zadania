#include <iostream>
#include <vector>

void print_vector(std::vector<int> p, std::vector<int> v)
{
    int pos{};

    for (int i = 0; i < p.size(); i++)
    {
        pos = p[i];
        std::cout << p[i] << ": " << v[pos] << " ";
    }
    
    std::cout << "\n";
}

std::vector<int> find_subseries(std::vector<int> v)
{
    std::vector<int> positions{};
    int subseries_start_pos{};
    int subseries_end_pos{};
    int sum{};

    for (int i = 0; i < v.size(); i++)
    {
        if (sum == 0)
            subseries_start_pos = i;

        sum += v[i];

        if (sum == 15)
        {
            subseries_end_pos = i;
            positions.push_back(subseries_start_pos);

            for (int i = 1; i <= (subseries_end_pos - subseries_start_pos); i++)
                positions.push_back(subseries_start_pos + i);

            sum = 0;
        }

        if (sum > 15)
            sum = 0;
    }

    return positions;
}

int main()
{
    std::vector<int> v{1,2,3,2,5,6,9,1,3,7,5,8,0,9,3,1,2,5,7,6,3,4,2,1,0,8,9,7,8,4,6,3,2,5,4,7,8,9,1,3,2,5,4,7,5,6,8,0,1,2,3,6,5,8,7,1,1,2,3,4,4,5,5,6,8,9,0,9,8,1,9,7,5,4,1,2,7,6,9,3,4,2,6};

    std::vector<int> positions = find_subseries(v);

    std::cout << "Pozycje liczb sumujących się do 15 w wektorze v: \n";
    print_vector(positions, v);

    return 0;
}