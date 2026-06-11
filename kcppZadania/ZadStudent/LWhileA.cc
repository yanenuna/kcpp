#include <iostream>
using namespace std;

int main() {
  int liczba;
  int suma = 0;
  int licznik = 0;

  cout << "wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;

  while (liczba != 0) {

    // zliczanie wprowadzonych wartosci
    licznik++;

    // sprawdzenie czy liczba jest dodatnia
    if (liczba > 0) {
      suma += liczba;
    } else {
      cout << "podana liczba nie jest dodatnia." << endl;
    }

    cin >> liczba;
  }

  cout << "suma dodatnich liczb: " << suma << endl;
  cout << "liczba wprowadzonych wartosci: "
       << licznik << endl;

  return 0;
}

