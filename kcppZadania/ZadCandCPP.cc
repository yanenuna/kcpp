#include <cstdio>
#include <iostream>

int main()
{
    // dane do wyswietlenia
    int number = 25;
    double value = 3.14159;

    // przyklad w jezyku c
    std::printf("c - liczba calkowita: %d\n", number);
    std::printf("c - liczba zmiennoprzecinkowa: %.2f\n", value);

    // przyklad w c++
    std::cout << "c++ - liczba calkowita: " << number << std::endl;
    std::cout << "c++ - liczba zmiennoprzecinkowa: "
              << value << std::endl;

    return 0;
}
