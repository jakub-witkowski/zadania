#include <iostream>
#include <vector>

void print_vector(std::vector<int> v)
{
    for (auto el : v)
        std::cout << el << " ";

    std::cout << std::endl;
}

std::vector<int> find_common(std::vector<int> v1, std::vector<int> v2)
{
    std::vector<int> common{};
    bool present_v1{false};
    bool present_v2{false};
    int current_value{};

    for (int i = 0; i < v1.size(); i++)
    {
        current_value = v1[i];
        present_v1 = true;

        for (int j = 0; j < v2.size(); j++)
        {
            if (v2[j] == current_value)
                present_v2 = true;
            else
                continue;
        }

        if (present_v1 == true && present_v2 == true)
        {
            common.push_back(current_value);
            present_v1 = false;
            present_v2 = false;
        }
        else
        {
            present_v1 = false;
            present_v2 = false;
        }
    }

    return common;
}

std::vector<int> add_set(std::vector<int> v1, std::vector<int> v2)
{
    std::vector<int> sum{};
    bool present{false};
    int current_value{};

    for (int i = 0; i < v1.size(); i++)
    {
        current_value = v1[i];

        for (int j = 0; j < sum.size(); j++)
        {
            if (sum[j] == current_value)
            {
                present = true;
                break;
            }
            else
                continue;
        }

        if (present == true)
        {
            present = false;
            continue;
        }
        else
        {
            sum.push_back(current_value);
        }
    }

    for (int i = 0; i < v2.size(); i++)
    {
        current_value = v2[i];

        for (int j = 0; j < sum.size(); j++)
        {
            if (sum[j] == current_value)
            {
                present = true;
                break;
            }
            else
                continue;
        }

        if (present == true)
        {
            present = false;
            continue;
        }
        else
        {
            sum.push_back(current_value);
        }
    }

    return sum;
}

std::vector<int> subtract(std::vector<int> v1, std::vector<int> v2)
{
    std::vector<int> difference{};
    int current_value{};
    bool is_present{false};

    for (int i = 0; i < v1.size(); i++)
    {
        current_value = v1[i];

        for (int j = 0; j < v2.size(); j++)
        {
            if (current_value == v2[j])
                is_present = true;
            else
            {
                continue;
            }
        }

        if (is_present == false)
        {
            difference.push_back(current_value);
            is_present = false;
        }
        else
        {
            is_present = false;
            continue;
        }
    }

    return difference;
}

int main()
{
    std::vector<int> v1{1,3,5,7,9};
    std::vector<int> v2{1,4,7,11,15};
    std::vector<int> v3{1,2,3,4,5,6,7,8,9,20};

    std::vector<int> common(find_common(v1, v2));

    std::cout << "Część wspólna V1 i V2: ";

    print_vector(common);

    std::vector<int> sum(add_set(v1, v2));

    std::vector<int> difference(subtract(v3, sum));

    std::cout << "V3 - (V1 + V2) = ";

    print_vector(difference);

    std::vector<int> total(add_set(sum, v3));

    std::cout << "V1 + V2 + V3 = ";
    
    print_vector(total);

    return EXIT_SUCCESS;
}