#include <iostream>
#include <string>

using namespace std;

struct Student {
  string imie;
  int wiek;

  // konstruktor z lista inicjalizacyjna
  Student(string noweImie, int nowyWiek)
      : imie(noweImie), wiek(nowyWiek) {}
};

int main() {

  // utworzenie obiektu przy uzyciu konstruktora
  Student student1("Anna", 21);

  // odczyt wartosci
  cout << "student 1:" << endl;
  cout << "imie: " << student1.imie << endl;
  cout << "wiek: " << student1.wiek << endl;

  // utworzenie kolejnego obiektu
  Student student2("Jan", 22);

  // zmiana wartosci
  student2.imie = "Tomasz";
  student2.wiek = 23;

  // odczyt wartosci po zmianie
  cout << "\nstudent 2:" << endl;
  cout << "imie: " << student2.imie << endl;
  cout << "wiek: " << student2.wiek << endl;

  return 0;
}
