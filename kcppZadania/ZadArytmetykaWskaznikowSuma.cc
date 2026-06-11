#include <iostream>

using namespace std;

// obliczanie sumy elementów tablicy za pomocą wskaźników
int suma(int* tablica, int rozmiar) {

    int wynik = 0;

    for (int i = 0; i < rozmiar; i++) {
        wynik += *(tablica + i);
    }

    return wynik;
}

int main() {

    int liczby[] = {5, 10, 15, 20, 25};

    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "elementy tablicy: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << liczby[i] << " ";
    }

    cout << endl;

    int wynik = suma(liczby, rozmiar);

    cout << "suma elementow tablicy: "
         << wynik << endl;

    return 0;
}
