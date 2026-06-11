#include <iostream>

using namespace std;

// próba przekazania kopii tablicy
void modifyArray(int array[], int size) {

    // zmiana pierwszego elementu tablicy
    array[0] = 100;
}

int main() {

    int numbers[] = {1, 2, 3, 4, 5};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "tablica przed wywolaniem funkcji: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    modifyArray(numbers, size);

    cout << "tablica po wywolaniu funkcji: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    cout << "wniosek: tablica nie zostala przekazana jako kopia." << endl;

    return 0;
}
