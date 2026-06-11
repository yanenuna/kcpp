#include <iostream>

using namespace std;

int main() {

    int liczba1 = 10;
    int liczba2 = 20;
    int liczba3 = 30;
    double liczba4 = 40.5;
    char znak = 'A';

    cout << "adres liczba1: " << &liczba1 << endl;
    cout << "adres liczba2: " << &liczba2 << endl;
    cout << "adres liczba3: " << &liczba3 << endl;
    cout << "adres liczba4: " << &liczba4 << endl;
    cout << "adres znak: " << static_cast<void*>(&znak) << endl;

    return 0;
}
