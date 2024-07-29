#include <iostream>
#include <vector>

void print_vector(std::vector<char> vc)
{
    std::cout << "Znaki w wektorze: ";

    for (auto el : vc)
        std::cout << el << " ";

    std::cout << std::endl;
}

bool is_vowel(char c)
{
    std::vector<char> vowels{'a', 'e', 'i', 'o', 'u', 'y'};
    bool is_vowel{false};

    for (int i = 0; i < vowels.size(); i++)
    {
        if (vowels[i] == c)
            is_vowel = true;
        else
            continue;
    }

    return is_vowel;
}

void insert_vowel(char c, std::vector<char> &vc)
{
    vc.insert(vc.begin(), c);
}

void insert_other_char(char c, std::vector<char> &vc)
{
    vc.push_back(c);
}

int main()
{
    std::vector<char> chars;
    char input{};

    std::cout << "Wprowadź znak (bez polskich znaków i bez wielkich liter). Wprowadzenie ! kończy program: " << std::endl;

    while(true)
    {
        std::cin >> input;

        if (input == '!')
        {
            print_vector(chars);
            break;
        }
        else if (input == '#')
        {
            chars.pop_back();
            print_vector(chars);
        }
        else if (input == '*')
        {
            chars.erase(chars.begin());
            print_vector(chars);
        }
        else if (is_vowel(input) == true)
        {
            insert_vowel(input, chars);
            print_vector(chars);
        }
        else if (is_vowel(input) == false)
        {
            insert_other_char(input, chars);
            print_vector(chars);
        }
    }

    return EXIT_SUCCESS;
}