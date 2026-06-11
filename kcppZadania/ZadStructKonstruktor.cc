#include <iostream>
#include <string>

using namespace std;

struct Student {
  string imie;
  int wiek;

  // domyslny konstruktor
  Student() {
    imie = "brak";
    wiek = 0;

    cout << "wywolano domyslny konstruktor"
         << endl;
  }

  // konstruktor z argumentami i lista inicjalizacyjna
  Student(string noweImie, int nowyWiek)
      : imie(noweImie), wiek(nowyWiek) {

    cout << "wywolano konstruktor z argumentami"
         << endl;
  }

  // domyslny destruktor
  ~Student() {
    cout << "wywolano destruktor"
         << endl;
  }

  void pokazDane() {
    cout << "imie: " << imie << endl;
    cout << "wiek: " << wiek << endl;
  }
};

int main() {

  // inicjalizacja standardowa
  Student student1;

  // inicjalizacja lista inicjalizacyjna
  Student student2("Jan", 22);

  cout << "\nstudent 1:" << endl;
  student1.pokazDane();

  cout << "\nstudent 2:" << endl;
  student2.pokazDane();

  return 0;
}
