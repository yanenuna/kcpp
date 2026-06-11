#include <iostream>

using namespace std;

int main() {

    int liczby[10] = {10, 20, 30, 40, 50,
                      60, 70, 80, 90, 100};

    // ustawienie wskaźników na różne elementy tablicy
    int* wskaznik1 = &liczby[2];
    int* wskaznik2 = &liczby[7];

    // obliczenie różnicy między wskaźnikami
    int roznica = wskaznik2 - wskaznik1;

    cout << "wartosc wskaznika 1: "
         << *wskaznik1 << endl;

    cout << "wartosc wskaznika 2: "
         << *wskaznik2 << endl;

    cout << "roznica miedzy wskaznikami: "
         << roznica << endl;

    return 0;
}
