```cpp
#include <iostream>
#include <string>

// sprawdzenie parzystosci za pomoca operacji bitowej
bool czyParzystaBitowo(int number)
{
    return (number & 1) == 0;
}

// sprawdzenie parzystosci za pomoca operatora modulo
bool czyParzystaModulo(int number)
{
    return number % 2 == 0;
}

// sprawdzenie parzystosci za pomoca operatora warunkowego
bool czyParzystaWarunkowo(int number)
{
    return (number % 2 == 0) ? true : false;
}

int main()
{
    // zmienne do przechowywania danych
    int number;
    int choice = 0;
    bool result;
    std::string method;

    // pobranie liczby
    std::cout << "podaj liczbe: ";
    std::cin >> number;

    // pobranie nazwy metody
    std::cout << "podaj metode (bit/modulo/warunkowy): ";
    std::cin >> method;

    // switch nie obsluguje bezposrednio string
    // dlatego zamieniamy tekst na liczbe
    if (method == "bit")
    {
        choice = 1;
    }
    else if (method == "modulo")
    {
        choice = 2;
    }
    else if (method == "warunkowy")
    {
        choice = 3;
    }

    switch (choice)
    {
        case 1:
            result = czyParzystaBitowo(number);
            break;

        case 2:
            result = czyParzystaModulo(number);
            break;

        case 3:
            result = czyParzystaWarunkowo(number);
            break;

        default:
            std::cerr << "blad: nieznana metoda." << std::endl;
            return 1;
    }

    std::cout << "liczba jest "
              << (result ? "parzysta" : "nieparzysta")
              << std::endl;

    return 0;
}
```
