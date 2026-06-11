#include <iostream>

using namespace std;

// kopiowanie jednej tablicy do drugiej za pomocą wskaźników
void kopiujTablice(int* zrodlo, int* cel, int rozmiar) {

    for (int i = 0; i < rozmiar; i++) {
        *(cel + i) = *(zrodlo + i);
    }
}

int main() {

    int tablicaZrodlowa[] = {10, 20, 30, 40, 50};
    int tablicaDocelowa[5];

    int rozmiar = sizeof(tablicaZrodlowa) /
                  sizeof(tablicaZrodlowa[0]);

    kopiujTablice(tablicaZrodlowa,
                  tablicaDocelowa,
                  rozmiar);

    cout << "tablica zrodlowa: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << tablicaZrodlowa[i] << " ";
    }

    cout << endl;

    cout << "tablica docelowa: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << tablicaDocelowa[i] << " ";
    }

    cout << endl;

    return 0;
}
