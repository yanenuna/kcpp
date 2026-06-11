#include <iostream>

using namespace std;

// przesuwanie elementów tablicy o jedno miejsce w prawo
void przesun(int* tablica, int rozmiar) {

    // zapamiętanie ostatniego elementu
    int ostatni = *(tablica + rozmiar - 1);

    // przesunięcie elementów w prawo
    for (int i = rozmiar - 1; i > 0; i--) {
        *(tablica + i) = *(tablica + i - 1);
    }

    // umieszczenie ostatniego elementu na początku
    *tablica = ostatni;
}

int main() {

    int liczby[] = {1, 2, 3, 4, 5};

    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "tablica przed przesunieciem: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << liczby[i] << " ";
    }

    cout << endl;

    przesun(liczby, rozmiar);

    cout << "tablica po przesunieciu: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << liczby[i] << " ";
    }

    cout << endl;

    ret
