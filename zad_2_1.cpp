#include <iostream>
#include <string>

int count_vowels(std::string s)
{
    int count{};
    char vowels[] = {'e', 'y', 'u', 'o', 'i', 'a'};
    int array_size = sizeof(vowels) / sizeof(char);

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (s[i] == vowels[j])
                count++;
        }
    }

    return count;
}

void print_loop(int n, std::string s)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << s << "\n";
    }
}

int main()
{
    std::string input;
    int vowel_count{};

    std::cout << "Wprowadź swoje imię: \n";
    std::cin >> input;

    vowel_count = count_vowels(input);

    print_loop(vowel_count, input);

    return 0;
}