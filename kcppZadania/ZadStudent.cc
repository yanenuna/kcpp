```cpp
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string imie;
  string nazwisko;
  int numerIndeksu;
};

int main() {
  vector<Student> listaStudentow;
  int wybor;

  cout << "=== program do zarzadzania lista studentow ==="
       << endl;

  do {
    cout << "\nmenu:" << endl;
    cout << "1. dodaj studenta" << endl;
    cout << "2. usun studenta" << endl;
    cout << "3. wyswietl liste" << endl;
    cout << "4. sortuj liste (alfabetycznie)" << endl;
    cout << "5. sprawdz, czy student istnieje" << endl;
    cout << "0. wyjdz" << endl;
    cout << "wybierz opcje: ";

    cin >> wybor;
    cin.ignore();

    switch (wybor) {

    case 1: {
      Student nowyStudent;

      cout << "podaj imie: ";
      getline(cin, nowyStudent.imie);

      // sprawdzenie czy imie nie jest puste
      if (nowyStudent.imie.empty()) {
        cout << "imie nie moze byc puste!" << endl;
        break;
      }

      cout << "podaj nazwisko: ";
      getline(cin, nowyStudent.nazwisko);

      cout << "podaj numer indeksu: ";
      cin >> nowyStudent.numerIndeksu;
      cin.ignore();

      // sprawdzenie unikalnosci numeru indeksu
      bool unikalny = true;

      for (const auto &student : listaStudentow) {
        if (student.numerIndeksu ==
            nowyStudent.numerIndeksu) {

          unikalny = false;
          break;
        }
      }

      if (!unikalny) {
        cout << "numer indeksu musi byc unikalny!"
             << endl;
      } else {
        listaStudentow.push_back(nowyStudent);
        cout << "dodano studenta!" << endl;
      }

      break;
    }

    case 2: {
      int indeks;

      cout << "podaj numer indeksu studenta do usuniecia: ";
      cin >> indeks;
      cin.ignore();

      bool znaleziono = false;

      for (int i = 0; i < listaStudentow.size(); i++) {

        if (listaStudentow[i].numerIndeksu ==
            indeks) {

          listaStudentow.erase(
              listaStudentow.begin() + i);

          cout << "usunieto studenta!"
               << endl;

          znaleziono = true;
          break;
        }
      }

      if (!znaleziono) {
        cout << "nie znaleziono studenta!"
             << endl;
      }

      break;
    }

    case 3: {
      if (listaStudentow.empty()) {

        cout << "lista jest pusta!"
             << endl;

      } else {

        cout << "\nlista studentow:"
             << endl;

        for (const auto &student :
             listaStudentow) {

          cout << student.imie << " "
               << student.nazwisko
               << ", indeks: "
               << student.numerIndeksu
               << endl;
        }
      }

      break;
    }

    case 4: {

      sort(listaStudentow.begin(),
           listaStudentow.end(),
           [](const Student &a,
              const Student &b) {

             return a.nazwisko <
                    b.nazwisko;
           });

      cout << "posortowano liste!"
           << endl;

      break;
    }

    case 5: {
      int indeks;

      cout << "podaj numer indeksu studenta: ";
      cin >> indeks;
      cin.ignore();

      bool istnieje = false;

      for (const auto &student :
           listaStudentow) {

        if (student.numerIndeksu ==
            indeks) {

          cout << "student istnieje: "
               << student.imie << " "
               << student.nazwisko
               << endl;

          istnieje = true;
          break;
        }
      }

      if (!istnieje) {
        cout << "nie ma takiego studenta!"
             << endl;
      }

      break;
    }

    case 0:
      cout << "koniec programu."
           << endl;
      break;

    default:
      cout << "nieprawidlowa opcja!"
           << endl;
    }

  } while (wybor != 0);

  return 0;
}
```
