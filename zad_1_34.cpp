#include <iostream>

int main()
{
    char input;
    unsigned int sum{0};

    std::cout << "Wprowadź znak (liczba, mała lub duża litera): \n";

    while (sum < 350)
    {
        std::cin >> input;

        if (!(((int) input > 47 && (int) input < 58) || ((int) input > 64 && (int) input < 91 || (int) input > 96 && (int) input < 123)))
            continue;

        sum += (int) input;
        
        std::cout << "Wartość całkowita wprowadzonego znaku to: " << (int) input << ". \n";
        std::cout << "Aktualny stan sumy to: " << sum << ". \n";
    }

    return 0;
}