#include <iostream>

using namespace std;

class Punkt {
private:
    double x;
    double y;

public:
    // konstruktor domyślny
    Punkt() {
        x = 0;
        y = 0;
    }

    // konstruktor z parametrami
    Punkt(double xValue, double yValue) {
        x = xValue;
        y = yValue;
    }

    // przeciążenie operatora +
    Punkt operator+(const Punkt& other) {
        return Punkt(x + other.x, y + other.y);
    }

    // wyświetlanie współrzędnych punktu
    void Print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {

    Punkt point1(2.5, 3.0);
    Punkt point2(1.5, 4.0);

    Punkt result = point1 + point2;

    cout << "Punkt 1: ";
    point1.Print();

    cout << "Punkt 2: ";
    point2.Print();

    cout << "Wynik dodawania: ";
    result.Print();

    return 0;
}
