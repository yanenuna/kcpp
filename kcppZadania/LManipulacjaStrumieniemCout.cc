#include <iomanip>
#include <iostream>

int main()
{
    // dane do obliczen
    double value1 = 10.0 / 3.0;
    double value2 = 22.0 / 7.0;
    double value3 = value1 + value2;
    double average = (value1 + value2 + value3) / 3.0;

    std::cout << "=================================================="
              << std::endl;

    std::cout << "wynika naszego dzialania: "
              << std::setprecision(5) << value1
              << " jest niepoprawny ale:" << std::endl;

    std::cout << "   output:  "
              << std::fixed << std::setw(8)
              << std::setprecision(3) << value1
              << "    T: "
              << std::scientific << std::setprecision(3)
              << value1 << std::endl;

    std::cout << "   output1: "
              << std::fixed << std::setw(8)
              << std::setprecision(4) << value2
              << "    T: "
              << std::scientific << std::setprecision(5)
              << value2 << std::endl;

    std::cout << "   output2: "
              << std::fixed << std::setw(8)
              << std::setprecision(4) << value3
              << "    T: "
              << std::scientific << std::setprecision(6)
              << value3 << std::endl;

    std::cout << "   ---------------------------------" << std::endl;

    std::cout << "   average: "
              << std::fixed << std::setw(8)
              << std::setprecision(4) << average
              << "    T: "
              << std::scientific << std::setprecision(6)
              << average << std::endl;

    std::cout << "=================================================="
              << std::endl;

    std::cout << std::setfill('*')
              << std::setw(20)
              << "koniec"
              << std::endl;

    int number = 255;

    std::cout << "hex: " << std::hex << number << std::endl;
    std::cout << "dec: " << std::dec << number << std::endl;

    return 0;
}
