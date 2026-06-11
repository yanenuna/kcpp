```cpp
#include <iomanip>
#include <iostream>

int main()
{
    // ustawienie formatu liczb zmiennoprzecinkowych
    std::cout << std::fixed << std::setprecision(2);

    // naglowek tabeli
    std::cout << "|" << std::left << std::setw(15) << " nazwa"
              << "|" << std::right << std::setw(8) << " cena"
              << "|" << std::setw(7) << " ilosc"
              << "|" << std::endl;

    // separator
    std::cout << "|" << std::setfill('-') << std::setw(15) << ""
              << "|" << std::setw(8) << ""
              << "|" << std::setw(7) << ""
              << "|" << std::setfill(' ') << std::endl;

    // dane produktow
    std::cout << "|" << std::left << std::setw(15) << " chleb"
              << "|" << std::right << std::setw(8) << 4.99
              << "|" << std::setw(7) << 5
              << "|" << std::endl;

    std::cout << "|" << std::left << std::setw(15) << " mleko"
              << "|" << std::right << std::setw(8) << 3.20
              << "|" << std::setw(7) << 10
              << "|" << std::endl;

    std::cout << "|" << std::left << std::setw(15) << " jajka (10 szt)"
              << "|" << std::right << std::setw(8) << 8.50
              << "|" << std::setw(7) << 3
              << "|" << std::endl;

    return 0;
}
```
