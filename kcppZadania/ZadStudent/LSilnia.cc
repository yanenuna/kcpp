```cpp
#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1;
  long long sumaSilni = 0;

  cout << "podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  // sprawdzenie poprawnosci danych
  if (liczba < 0) {
    cout << "blad: silnia jest zdefiniowana tylko dla liczb nieujemnych."
         << endl;
    return 1;
  }

  // obliczanie sumy silni od 1 do n
  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
    sumaSilni += silnia;
  }

  cout << "suma silni od 1 do " << liczba << " wynosi: "
       << sumaSilni << endl;

  return 0;
}
```
