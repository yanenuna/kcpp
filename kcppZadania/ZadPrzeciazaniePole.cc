#include <iostream>

using namespace std;

// pole kwadratu
double pole(double bok) {
    return bok * bok;
}

// pole prostokąta
double pole(double bokA, double bokB) {
    return bokA * bokB;
}

// pole koła
double pole(float promien) {
    const double PI = 3.14159;
    return PI * promien * promien;
}

int main() {

    double bokKwadratu = 5.0;
    double bokA = 4.0;
    double bokB = 6.0;
    float promien = 3.0f;

    cout << "Pole kwadratu: "
         << pole(bokKwadratu) << endl;

    cout << "Pole prostokata: "
         << pole(bokA, bokB) << endl;

    cout << "Pole kola: "
         << pole(promien) << endl;

    return 0;
}
