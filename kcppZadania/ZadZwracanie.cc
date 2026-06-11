#include <iostream>

using namespace std;

// zwracanie przez wartość
int ReturnByValue() {
    int number = 10;
    return number;
}

// zwracanie przez referencję
int& ReturnByReference() {
    static int number = 20;
    return number;
}

// zwracanie przez wskaźnik
int* ReturnByPointer() {
    static int number = 30;
    return &number;
}

// zwracanie tablicy przez wskaźnik
int* ReturnArray() {
    static int numbers[] = {1, 2, 3, 4, 5};
    return numbers;
}

int main() {

    // przez wartość
    int value = ReturnByValue();
    cout << "Przez wartosc: " << value << endl;

    // przez referencję
    int& reference = ReturnByReference();
    cout << "Przez referencje: " << reference << endl;

    // przez wskaźnik
    int* pointer = ReturnByPointer();
    cout << "Przez wskaznik: " << *pointer << endl;

    // tablica
    int* array = ReturnArray();

    cout << "Tablica: ";

    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
