#include <iostream>

using namespace std;

int main() {

    float tablica1[5];
    float tablica2[5];
    float tablica3[5];

    // pobieranie danych od użytkownika
    cout << "podaj 5 liczb:" << endl;

    for (float* ptr = tablica1; ptr < tablica1 + 5; ptr++) {
        cin >> *ptr;
    }

    // wypelnienie drugiej tablicy wartosciami pomnozonymi przez 2
    for (float* ptr1 = tablica1, *ptr2 = tablica2;
         ptr1 < tablica1 + 5;
         ptr1++, ptr2++) {

        *ptr2 = (*ptr1) * 2;
    }

    // tworzenie trzeciej tablicy jako sumy dwóch pierwszych
    float* ptr1 = tablica1;
    float* ptr2 = tablica2;
    float* ptr3 = tablica3;

    while (ptr1 < tablica1 + 5) {

        *ptr3 = *ptr1 + *ptr2;

        ptr1++;
        ptr2++;
        ptr3++;
    }

    // wyświetlanie pierwszej tablicy
    cout << "tablica 1: ";

    for (float* ptr = tablica1; ptr < tablica1 + 5; ptr++) {
        cout << *ptr << " ";
    }

    cout << endl;

    // wyświetlanie drugiej tablicy
    cout << "tablica 2: ";

    for (float* ptr = tablica2; ptr < tablica2 + 5; ptr++) {
        cout << *ptr << " ";
    }

    cout << endl;

    // wyświetlanie trzeciej tablicy
    cout << "tablica 3: ";

    for (float* ptr = tablica3; ptr < tablica3 + 5; ptr++) {
        cout << *ptr << " ";
    }

    cout << endl;

    return 0;
}
