#include "../include/Figury.h"

#include <iostream>
#include <cmath>

using namespace std;

class Figura {
public:
    virtual double pole() = 0;
    virtual double obwod() = 0;
    virtual ~Figura() {}
};

class Kwadrat : public Figura {
    double a;

public:
    Kwadrat(double bok) : a(bok) {}

    double pole() override {
        return a * a;
    }

    double obwod() override {
        return 4 * a;
    }
};

class Prostokat : public Figura {
    double a, b;

public:
    Prostokat(double bok1, double bok2) : a(bok1), b(bok2) {}

    double pole() override {
        return a * b;
    }

    double obwod() override {
        return 2 * (a + b);
    }
};

class Trojkat : public Figura {
    double a, h;

public:
    Trojkat(double bok, double wysokosc) : a(bok), h(wysokosc) {}

    double pole() override {
        return (a * h) / 2;
    }

    double obwod() override {
        return 3 * a;
    }
};

class Kolo : public Figura {
    double r;

public:
    Kolo(double promien) : r(promien) {}

    double pole() override {
        return M_PI * r * r;
    }

    double obwod() override {
        return 2 * M_PI * r;
    }

    double dystans(double metryKwadratowe) {
        return sqrt(metryKwadratowe / M_PI);
    }
};

void Figury::wykonaj() {

    Kwadrat kwadrat(4);
    cout << "Kwadrat:" << endl;
    cout << "Pole: " << kwadrat.pole() << endl;
    cout << "Obwod: " << kwadrat.obwod() << endl;

    Prostokat prostokat(3, 5);
    cout << "\nProstokat:" << endl;
    cout << "Pole: " << prostokat.pole() << endl;
    cout << "Obwod: " << prostokat.obwod() << endl;

    Trojkat trojkat(4, 3);
    cout << "\nTrojkat:" << endl;
    cout << "Pole: " << trojkat.pole() << endl;
    cout << "Obwod: " << trojkat.obwod() << endl;

    Kolo kolo(2);
    cout << "\nKolo:" << endl;
    cout << "Pole: " << kolo.pole() << endl;
    cout << "Obwod: " << kolo.obwod() << endl;

    cout << "\nDystans dla 10 m^2: "
         << kolo.dystans(10)
         << endl;
}
