#include <iostream>

using namespace std;

// obliczanie potęgi dla liczb całkowitych
int potega(int podstawa, int wykladnik) {

    int wynik = 1;

    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }

    return wynik;
}

// obliczanie potęgi dla liczb zmiennoprzecinkowych
double potega(double podstawa, int wykladnik) {

    double wynik = 1.0;

    for (int i = 0; i < wykladnik; i++) {
        wynik *= podstawa;
    }

    return wynik;
}

int main() {

    int liczbaCalkowita = 2;
    int wykladnikCalkowity = 5;

    double liczbaZmiennoprzecinkowa = 2.5;
    int wykladnikZmiennoprzecinkowy = 3;

    cout << "potega liczby calkowitej: "
         << potega(liczbaCalkowita, wykladnikCalkowity)
         << endl;

    cout << "potega liczby zmiennoprzecinkowej: "
         << potega(liczbaZmiennoprzecinkowa,
                   wykladnikZmiennoprzecinkowy)
         << endl;

    return 0;
}
