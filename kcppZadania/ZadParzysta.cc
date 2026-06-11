```cpp
#include <iostream>

// sprawdzenie parzystosci za pomoca operacji bitowej
bool czyParzystaBitowo(int number)
{
    // przyklad:
    // 8  = 1000
    // 8 & 1 = 0000 -> liczba parzysta
    //
    // 7  = 0111
    // 7 & 1 = 0001 -> liczba nieparzysta

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
    // zmienna przechowujaca liczbe
    int number;

    // pobranie liczby od uzytkownika
    std::cout << "podaj liczbe: ";
    std::cin >> number;

    // sprawdzenie metoda bitowa
    std::cout << "metoda bitowa: "
              << (czyParzystaBitowo(number) ? "parzysta" : "nieparzysta")
              << std::endl;

    // sprawdzenie metoda modulo
    std::cout << "metoda modulo: "
              << (czyParzystaModulo(number) ? "parzysta" : "nieparzysta")
              << std::endl;

    // sprawdzenie operatorem warunkowym
    std::cout << "metoda operatora warunkowego: "
              << (czyParzystaWarunkowo(number) ? "parzysta" : "nieparzysta")
              << std::endl;

    return 0;
}
```
