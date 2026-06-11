#include <iostream>
#include <sstream>
#include <string>

int main()
{
    // zmienne do przechowywania danych
    std::string input;
    std::string name;
    int age;

    // pobranie danych od użytkownika
    std::cout << "podaj imie i wiek (np. anna 20): ";
    std::getline(std::cin, input);

    // utworzenie strumienia z wprowadzonego tekstu
    std::stringstream dataStream(input);

    // odczytanie danych ze strumienia
    dataStream >> name >> age;

    // sprawdzenie poprawności odczytu
    if (dataStream.fail())
    {
        std::cerr << "blad: niepoprawny format danych." << std::endl;
        return 1;
    }

    // wyswietlenie odczytanych danych
    std::cout << "imie: " << name << std::endl;
    std::cout << "wiek: " << age << std::endl;

    return 0;
}
