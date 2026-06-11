#include <iostream>

using namespace std;

// wyswietlanie liczby w postaci binarnej
void printBinary(unsigned char value) {

    for (int i = 7; i >= 0; i--) {

        if (value & (1 << i)) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
}

int main() {

    int tablica[8];

    unsigned char liczba = 0;

    cout << "podaj 8 wartosci (0 lub 1):" << endl;

    for (int i = 0; i < 8; i++) {

        cin >> tablica[i];

        if (tablica[i] == 1) {
            liczba |= (1 << (7 - i));
        }
    }

    cout << "liczba dziesietnie: "
         << static_cast<int>(liczba)
         << endl;

    cout << "liczba binarnie: ";
    printBinary(liczba);
    cout << endl;

    return 0;
}
