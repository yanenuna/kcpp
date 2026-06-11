#include "../include/Temperatura.h"

#include <iostream>

using namespace std;

void Temperatura::wykonaj() {

    double celsius;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    double kelvin = celsius + 273.15;

    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
}
