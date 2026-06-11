#include <iostream>

int main()
{
    // wypisanie informacji na ekran
    std::cout << "program rozpoczyna dzialanie." << std::endl;
    std::cout << "przykladowa wiadomosc wyswietlana przez cout." << std::endl;

    // wypisanie komunikatu do strumienia bledow
    std::cerr << "blad: przykladowy komunikat bledu." << std::endl;

    // dalsza praca programu
    std::cout << "program zakonczyl dzialanie." << std::endl;

    return 0;
}

