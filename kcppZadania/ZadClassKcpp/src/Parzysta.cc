#include "../include/Parzysta.h"

#include <iostream>

using namespace std;

void Parzysta::wykonaj() {

  int liczba;

  cout << "Podaj liczbe: ";
  cin >> liczba;

  if (liczba % 2 == 0) {
    cout << "Liczba jest parzysta." << endl;
  } else {
    cout << "Liczba jest nieparzysta." << endl;
  }
}
