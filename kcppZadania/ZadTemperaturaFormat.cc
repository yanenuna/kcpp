#include <iomanip>
#include <iostream>

int main()
{
    // wyswietlenie naglowkow tabeli
    std::cout << std::right
              << std::setw(10) << "celsjusz"
              << std::setw(15) << "fahrenheit"
              << std::endl;

    std::cout << std::setw(10) << "-------"
              << std::setw(15) << "---------"
              << std::endl;

    // obliczanie i wyswietlanie temperatur
    for (int celsius = -10; celsius <= 10; celsius += 5)
    {
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;

        std::cout << std::right
                  << std::setw(10) << celsius
                  << std::fixed << std::setprecision(2)
                  << std::setw(15) << fahrenheit
                  << std::endl;
    }

    return 0;
}

