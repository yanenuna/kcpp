#include <iostream>

using namespace std;

int main() {

  int wybor;

  do {
    cout << "\n===== MENU =====" << endl;

    cout << "4.4  Tabela produktow" << endl;
    cout << "4.5  Temperatura" << endl;
    cout << "4.7  Parzysta" << endl;
    cout << "4.9  Petle" << endl;
    cout << "4.11 For" << endl;
    cout << "4.12 Silnia" << endl;
    cout << "4.13 Ksztalt" << endl;
    cout << "4.15 Gra" << endl;
    cout << "5.3  Unia" << endl;
    cout << "5.6  Figury" << endl;

    cout << "0. Koniec" << endl;

    cout << "wybor: ";
    cin >> wybor;

    switch (wybor) {

    case 0:
      cout << "koniec programu." << endl;
      break;

    default:
      cout << "zadanie jeszcze nie dodane." << endl;
    }

  } while (wybor != 0);

  return 0;
}
