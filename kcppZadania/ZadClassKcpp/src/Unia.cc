#include "../include/Unia.h"

#include <iostream>

using namespace std;

union Dane {
    int liczba;
    float liczbaZmiennoprzecinkowa;
    char znak;
};

void Unia::wykonaj() {

    Dane dane;

    dane.liczba = 100;
    cout << "Int: " << dane.liczba << endl;

    dane.liczbaZmiennoprzecinkowa = 3.14;
    cout << "Float: " << dane.liczbaZmiennoprzecinkowa << endl;

    dane.znak = 'A';
    cout << "Char: " << dane.znak << endl;
}
