#include <iostream>

using namespace std;

union Dane {
  int liczbaCalkowita;
  float liczbaFloat;
  char znak;
};

int main() {

  Dane dane;

  // zapisanie liczby calkowitej
  dane.liczbaCalkowita = 100;

  cout << "po zapisaniu int:" << endl;
  cout << "liczbaCalkowita: "
       << dane.liczbaCalkowita << endl;

  // niebezpieczenstwo - odczyt innego pola
  cout << "liczbaFloat: "
       << dane.liczbaFloat << endl;

  // zapisanie liczby float
  dane.liczbaFloat = 3.14f;

  cout << "\npo zapisaniu float:" << endl;
  cout << "liczbaFloat: "
       << dane.liczbaFloat << endl;

  // poprzednia wartosc int zostala nadpisana
  cout << "liczbaCalkowita: "
       << dane.liczbaCalkowita << endl;

  // zapisanie znaku
  dane.znak = 'A';

  cout << "\npo zapisaniu char:" << endl;
  cout << "znak: "
       << dane.znak << endl;

  // pozostale pola zawieraja nieprzewidywalne dane
  cout << "liczbaCalkowita: "
       << dane.liczbaCalkowita << endl;

  cout << "liczbaFloat: "
       << dane.liczbaFloat << endl;

  return 0;
}
