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
    // zmienne do przechowywania danych
    int number;
    int choice;
    bool result;

    // pobranie liczby
    std::cout << "podaj liczbe: ";
    std::cin >> number;

    // wybor metody sprawdzenia
    std::cout << "wybierz metode:" << std::endl;
    std::cout << "1 - operacje bitowe" << std::endl;
    std::cout << "2 - operator modulo" << std::endl;
    std::cout << "3 - operator warunkowy" << std::endl;
    std::cout << "twoj wybor: ";
    std::cin >> choice;

    // wybor odpowiedniej funkcji
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
            std::cerr << "blad: niepoprawny wybor." << std::endl;
            return 1;
    }

    // wyswietlenie wyniku
    std::cout << "liczba jest "
              << (result ? "parzysta" : "nieparzysta")
              << std::endl;

    return 0;
}

