#include <iostream>
#include <string>

using namespace std;

class Student {
public:
  string imie;

  // funkcja inline zdefiniowana w klasie
  inline void ustawImie(string noweImie) {
    imie = noweImie;
  }

  // deklaracja funkcji
  void pokazDane();

  // funkcja majaca dostep do private i protected
  void zmienDane(int nowyWiek, string nowyKierunek);

protected:
  string kierunek;

private:
  int wiek;
};

// definicja funkcji poza klasa
void Student::pokazDane() {
  cout << "imie: " << imie << endl;
  cout << "wiek: " << wiek << endl;
  cout << "kierunek: " << kierunek << endl;
}

// definicja funkcji poza klasa
void Student::zmienDane(int nowyWiek, string nowyKierunek) {
  wiek = nowyWiek;
  kierunek = nowyKierunek;
}

int main() {
  Student student;

  student.ustawImie("Anna");
  student.zmienDane(21, "Informatyka");

  student.pokazDane();

  return 0;
}
