#include <iostream>
#include "../include/Figury.h"

using namespace std;

int main() {

    int wybor;

    do {
        cout << "\n===== MENU =====" << endl;

        cout << "44. Tabela produktow" << endl;
        cout << "45. Temperatura" << endl;
        cout << "47. Parzysta" << endl;
        cout << "49. Petle" << endl;
        cout << "411. For" << endl;
        cout << "412. Silnia" << endl;
        cout << "413. Ksztalt" << endl;
        cout << "415. Gra" << endl;
        cout << "53. Unia" << endl;
        cout << "56. Figury" << endl;

        cout << "0. Koniec" << endl;

        cout << "wybor: ";
        cin >> wybor;

        switch (wybor) {

            case 56: {
                Figury figury;
                figury.wykonaj();
                break;
            }

            case 0:
                cout << "koniec programu." << endl;
                break;

            default:
                cout << "zadanie jeszcze nie dodane." << endl;
                break;
        }

    } while (wybor != 0);

    return 0;
}
