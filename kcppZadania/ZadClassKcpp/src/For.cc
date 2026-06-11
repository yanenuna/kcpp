#include "../include/For.h"

#include <iostream>

using namespace std;

void For::wykonaj() {

    int n;

    cout << "Podaj liczbe n: ";
    cin >> n;

    cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    cout << "Liczby podzielne przez 7 od 1 do "
         << n << ":" << endl;

    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}
