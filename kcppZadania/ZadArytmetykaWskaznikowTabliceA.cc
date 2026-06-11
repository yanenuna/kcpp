#include <iostream>

using namespace std;

int main() {

    // deklaracja tablicy
    int liczby[10];

    // wypelnienie tablicy wartosciami od 1 do 10
    int* ptr = liczby;

    for (int i = 0; i < 10; i++) {
        *(ptr + i) = i + 1;
    }

    cout << "elementy tablicy: ";

    for (int i = 0; i < 10; i++) {
        cout << *(liczby + i) << " ";
    }

    cout << endl;

    // obliczanie sumy elementow tablicy
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        suma += *(liczby + i);
    }

    cout << "suma elementow: "
         << suma << endl;

    // znajdowanie maksymalnego elementu
    int* max = liczby;

    for (int i = 1; i < 10; i++) {

        if (*(liczby + i) > *max) {
            max = liczby + i;
        }
    }

    cout << "maksymalny element: "
         << *max << endl;

    // odwracanie kolejnosci elementow
    int* poczatek = liczby;
    int* koniec = liczby + 9;

    while (poczatek < koniec) {

        int temp = *poczatek;
        *poczatek = *koniec;
        *koniec = temp;

        poczatek++;
        koniec--;
    }

    cout << "tablica po odwroceniu: ";

    for (int i = 0; i < 10; i++) {
        cout << *(liczby + i) << " ";
    }

    cout << endl;

    return 0;
}
