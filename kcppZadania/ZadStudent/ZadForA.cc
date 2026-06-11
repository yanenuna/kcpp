```cpp
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "podaj liczbe n: ";
  cin >> n;

  // wypisanie liczb nieparzystych
  cout << "liczby nieparzyste od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      cout << i << " ";
    }
  }

  // wypisanie liczb podzielnych przez 3 i 5
  cout << "\nliczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      cout << i << " ";
    }
  }

  // wypisanie liczb podzielnych przez 7
  cout << "\nliczby podzielne przez 7 od 1 do " << n << ":" << endl;
  for (int i = 1; i <= n; i++) {
    if (i % 7 == 0) {
      cout << i << " ";
    }
  }

  cout << endl;

  return 0;
}
```
