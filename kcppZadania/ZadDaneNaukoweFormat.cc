#include <iomanip>
#include <iostream>

int main()
{
    // stale matematyczne
    double pi = 3.141592653589793;
    double e = 2.718281828459045;
    double goldenRatio = 1.618033988749895;

    // naglowki tabeli wyrownane do srodka
    std::cout << "     stala"
              << "      wartosc (domyslnie)"
              << "      notacja stala"
              << "      notacja naukowa"
              << std::endl;

    std::cout << "    --------"
              << "      -----------------"
              << "      -------------"
              << "      --------------"
              << std::endl;

    // wyswietlenie stalej pi
    std::cout << std::left << std::setw(15) << "pi";

    std::cout << std::defaultfloat
              << std::setw(20) << std::setprecision(6) << pi;

    std::cout << std::fixed
              << std::setw(20) << std::setprecision(6) << pi;

    std::cout << std::scientific
              << std::setw(20) << std::setprecision(6) << pi
              << std::endl;

    // wyswietlenie stalej e
    std::cout << std::left << std::setw(15) << "e";

    std::cout << std::defaultfloat
              << std::setw(20) << std::setprecision(6) << e;

    std::cout << std::fixed
              << std::setw(20) << std::setprecision(6) << e;

    std::cout << std::scientific
              << std::setw(20) << std::setprecision(6) << e
              << std::endl;

    // wyswietlenie zlotego podzialu
    std::cout << std::left << std::setw(15) << "zloty podzial";

    std::cout << std::defaultfloat
              << std::setw(20) << std::setprecision(6) << goldenRatio;

    std::cout << std::fixed
              << std::setw(20) << std::setprecision(6) << goldenRatio;

    std::cout << std::scientific
              << std::setw(20) << std::setprecision(6) << goldenRatio
              << std::endl;

    return 0;
}

