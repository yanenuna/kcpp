#include "../include/Petle.h"

#include <iostream>

using namespace std;

void Petle::wykonaj() {

    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Petla for:" << endl;

    for (int i = 1; i <= liczba; i++) {
        cout << i << " ";
    }

    cout << endl;

    cout << "Petla while:" << endl;

    int i = 1;

    while (i <= liczba) {
        cout << i << " ";
        i++;
    }

    cout << endl;

    cout << "Petla do-while:" << endl;

    i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <= liczba);

    cout << endl;
}
