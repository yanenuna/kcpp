#include "../include/Ksztalt.h"

#include <iostream>

using namespace std;

void Ksztalt::wykonaj() {

    int rozmiar;

    cout << "Podaj rozmiar: ";
    cin >> rozmiar;

    cout << "\nTrojkat rownoramienny:" << endl;

    for (int i = 1; i <= rozmiar; i++) {

        for (int j = 1; j <= rozmiar - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << "\nPiramida liczb:" << endl;

    for (int i = 1; i <= rozmiar; i++) {

        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }

        cout << endl;
    }
}
