#include <iostream>

using namespace std;

// znajdowanie największego elementu w tablicy
int* maxElement(int* tablica, int rozmiar) {

    int* max = tablica;

    for (int i = 1; i < rozmiar; i++) {

        if (*(tablica + i) > *max) {
            max = tablica + i;
        }
    }

    return max;
}

int main() {

    int liczby[] = {15, 8, 42, 23, 7, 35};

    int rozmiar = sizeof(liczby) / sizeof(liczby[0]);

    cout << "elementy tablicy: ";

    for (int i = 0; i < rozmiar; i++) {
        cout << liczby[i] << " ";
    }

    cout << endl;

    int* max = maxElement(liczby, rozmiar);

    cout << "najwiekszy element: "
         << *max << endl;

    return 0;
}
