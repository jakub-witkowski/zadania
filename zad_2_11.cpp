#include <iostream>

bool isEven(int n)
{
	return (!(n & 1));
}

int main()
{
	int input{};

    std::cout << "Wprowadź nieujemną liczbę całkowitą: \n";
    std::cin >> input;

	isEven(input) ? std::cout << "\nLiczba jest parzysta.\n" : std::cout << "Liczba jest nieparzysta.\n";

	return 0;
}
