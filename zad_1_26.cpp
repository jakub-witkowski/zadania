#include <iostream>
#include <vector>

void count_occurrences(std::vector<int> v)
{
    std::vector<int> occurrences(10);

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            occurrences[0]++;
        else if (v[i] == 1)
            occurrences[1]++;
        else if (v[i] == 2)
            occurrences[2]++;
        else if (v[i] == 3)
            occurrences[3]++;
        else if (v[i] == 4)
            occurrences[4]++;
        else if (v[i] == 5)
            occurrences[5]++;
        else if (v[i] == 6)
            occurrences[6]++;
        else if (v[i] == 7)
            occurrences[7]++;
        else if (v[i] == 8)
            occurrences[8]++;
        else if (v[i] == 9)
            occurrences[9]++;
    }

    for (int j = 0; j < occurrences.size(); j++)
    {
        std::cout << j << ": " << occurrences[j] << std::endl;
    }
}

void print_vector(std::vector<int> v)
{
    for (auto el : v)
        std::cout << el << " ";

    std::cout << std::endl;
}

void copy_subseries(std::vector<int> from, size_t index, std::vector<int> &to)
{
    to.clear();

    to.push_back(*(from.begin() + index));
    to.push_back(*(from.begin() + index + 1));
    to.push_back(*(from.begin() + index + 2));
}

bool check_subseries(std::vector<int> v)
{
    bool is_increasing{true};

    for (int i = 2; i > 0 ; i--)
    {
        if (v[i] < (v[i - 1]))
            is_increasing = false; 
    }

    return is_increasing;
}

std::vector<int> find_longest_subseries(std::vector<int> v)
{
    std::vector<int> candidate1{};
    std::vector<int> candidate2{};

    for (int i = 0; i < v.size(); i++)
    {
        // if (i == 0)
        //     candidate1.push_back(v[0]);

        if (v[i] < v[i+1])
            candidate1.push_back(v[i]);
        else
        {
            candidate1.push_back(v[i]);

            if (candidate2.size() >= candidate1.size())
            {
                candidate1.clear();
                continue;
            }
            else
            {
                candidate2.clear();

                for (int j = 0; j < candidate1.size(); j++)
                {
                    candidate2.push_back(candidate1[j]);
                }

                candidate1.clear();
            }
        }
    }

    return candidate2;
}

int main()
{
    std::vector<int> v{1,2,4,3,6,8,7,7,8,3,4,5,6,7,1,3,9,1,0,4,2,3,6,9};
    std::vector<int> subseries{};

    for (int i = 0; i < v.size(); i++)
    {
        copy_subseries(v, i, subseries);

        if (check_subseries(subseries) == true)
            print_vector(subseries);
        else
            continue;
    }

    std::vector<int> longest_subseries = find_longest_subseries(v);

    print_vector(longest_subseries);

    std::cout << "\nLiczba wystąpień poszczególnych cyfr:" << std::endl;
    count_occurrences(v);

    return EXIT_SUCCESS;
}