#include "../include/Silnia.h"

#include <iostream>

using namespace std;

void Silnia::wykonaj() {

  int liczba;

  cout << "podaj liczbe: ";
  cin >> liczba;

  if (liczba < 0) {
    cout << "silnia jest zdefiniowana tylko dla liczb nieujemnych."
         << endl;
    return;
  }

  long long silnia = 1;

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
  }

  cout << "silnia z "
       << liczba
       << " wynosi: "
       << silnia
       << endl;
}
