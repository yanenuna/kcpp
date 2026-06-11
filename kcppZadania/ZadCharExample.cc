#include <iostream>
#include <cstring>

using namespace std;

int main() {

    // inicjalizacja napisów
    char text1[] = "Hello";
    char text2[20];
    char text3[] = "World";

    cout << "text1: " << text1 << endl;
    cout << "text3: " << text3 << endl;

    // kopiowanie napisu za pomocą strcpy
    strcpy(text2, text1);
    cout << "Po strcpy text2: " << text2 << endl;

    // łączenie napisów za pomocą strcat
    strcat(text2, " ");
    strcat(text2, text3);
    cout << "Po strcat text2: " << text2 << endl;

    // długość napisu
    cout << "Dlugosc text2: " << strlen(text2) << endl;

    // porównywanie napisów
    if (strcmp(text1, text3) == 0) {
        cout << "Napisy sa takie same." << endl;
    }
    else {
        cout << "Napisy sa rozne." << endl;
    }

    // kopiowanie określonej liczby znaków
    char text4[10];

    strncpy(text4, text1, sizeof(text4) - 1);
    text4[sizeof(text4) - 1] = '\0';

    cout << "Po strncpy text4: " << text4 << endl;

    return 0;
}
