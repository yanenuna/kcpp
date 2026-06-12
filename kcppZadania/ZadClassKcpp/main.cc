#include <iostream>

#include "../include/Figury.h"
#include "../include/For.h"
#include "../include/Ksztalt.h"
#include "../include/Parzysta.h"
#include "../include/Petle.h"
#include "../include/Silnia.h"
#include "../include/Tabela.h"
#include "../include/Temperatura.h"
#include "../include/Unia.h"

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
        cout << "53. Unia" << endl;
        cout << "56. Figury" << endl;

        cout << "0. Koniec" << endl;

        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor) {

            case 44: {
                Tabela tabela;
                tabela.wykonaj();
                break;
            }

            case 45: {
                Temperatura temperatura;
                temperatura.wykonaj();
                break;
            }

            case 47: {
                Parzysta parzysta;
                parzysta.wykonaj();
                break;
            }

            case 49: {
                Petle petle;
                petle.wykonaj();
                break;
            }

            case 411: {
                For zadFor;
                zadFor.wykonaj();
                break;
            }

            case 412: {
                Silnia silnia;
                silnia.wykonaj();
                break;
            }

            case 413: {
                Ksztalt ksztalt;
                ksztalt.wykonaj();
                break;
            }

            case 53: {
                Unia unia;
                unia.wykonaj();
                break;
            }

            case 56: {
                Figury figury;
                figury.wykonaj();
                break;
            }

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nieprawidlowy wybor." << endl;
                break;
        }

    } while (wybor != 0);

    return 0;
}
