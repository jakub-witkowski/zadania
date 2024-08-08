#include <vector>
#include <iostream>

class Character
{
    public:
        size_t pos;
        char c;
        bool is_numeric{false};
        int value{};
        int occurrence_count{1};

    Character(char symbol) : c(symbol) 
    {
        if ((int) symbol > 47 && (int) symbol < 58)
        {
            is_numeric = true;
        }

        if (is_numeric == true)
            value = (int) c - 48;
    }

    ~Character()
    {

    }
};

std::vector<Character> examine_chars(std::vector<char> vc)
{
    std::vector<Character> target{};
    char current_char{};
    bool already_present{false};

    for (int i = 0; i < vc.size(); i++)
    {
        current_char = vc[i];

        for (int j = 0; j < target.size(); j++)
        {

            if (target[j].c == current_char)
            {
                already_present = true;
                target[j].occurrence_count++;
            }
        }

        if (already_present == false)
        {
            target.push_back(Character(current_char));
        }

        already_present = false;
    }

    return target;
}

int add_numeric_vector_members(std::vector<Character> c)
{
    int sum{};

    for (int i = 0; i < c.size(); i++)
    {
        if (c[i].is_numeric == true)
            sum += c[i].value;
    }

    return sum;
}

void print_vector(std::vector<Character> v, std::vector<char> c)
{
    for (auto el : v)
    {
        if (el.c == *c.begin() || el.c == *(c.end() - 1))
            continue;
        else
        {
            std::cout << "Znak: " << el.c << "\n";
            std::cout << "Liczba wystąpień: " << el.occurrence_count << "\n\n";
        }
    }
}

int main()
{
    std::vector<char> v{ 'x','P','Q','4','\n','%','u','@','e','T','B','$', '!',':','"','1','<','d','k','L','$',')','$','B','x','w','q','P','c','X','B','>','?','[','r','x','$', '#','}','|','d','l','n','b','V','!'};

    std::vector<Character> c = examine_chars(v);

    print_vector(c, v);

    std::cout << "Suma cyfr obecnych w wektorze v: " << add_numeric_vector_members(c) << "\n";

    return 0;
}