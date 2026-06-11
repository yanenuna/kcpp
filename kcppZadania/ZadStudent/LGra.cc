#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int poziom;
    int maksLiczba;

    // wybor poziomu trudnosci
    cout << "wybierz poziom trudnosci:" << endl;
    cout << "1 - latwy (1-50)" << endl;
    cout << "2 - trudny (1-200)" << endl;
    cout << "twoj wybor: ";
    cin >> poziom;

    if (poziom == 1) {
        maksLiczba = 50;
    } else if (poziom == 2) {
        maksLiczba = 200;
    } else {
        cout << "niepoprawny wybor poziomu." << endl;
        return 1;
    }

    int wylosowana = rand() % maksLiczba + 1;
    int proba;
    int licznik = 0;
    const int maksProby = 10;

    cout << "zgadnij liczbe (1-" << maksLiczba << "):" << endl;

    while (licznik < maksProby) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "za malo! probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "za duzo! probuj dalej." << endl;
        } else {
            cout << "brawo! zgadles w "
                 << licznik
                 << " probach." << endl;
            return 0;
        }

        cout << "pozostalo prob: "
             << maksProby - licznik
             << endl;
    }

    // gracz nie zgadl liczby
    cout << "przegrales. prawidlowa liczba to: "
         << wylosowana
         << endl;

    return 0;
}

