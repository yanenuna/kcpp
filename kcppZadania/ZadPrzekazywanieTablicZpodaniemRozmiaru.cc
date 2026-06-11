#include <iostream>

using namespace std;

// wyświetlanie elementów tablicy o dowolnym rozmiarze
void printArray(int array[], int size) {

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

int main() {

    int numbers1[] = {1, 2, 3, 4, 5};
    int numbers2[] = {10, 20, 30};
    int numbers3[] = {7, 14, 21, 28, 35, 42};

    int size1 = sizeof(numbers1) / sizeof(numbers1[0]);
    int size2 = sizeof(numbers2) / sizeof(numbers2[0]);
    int size3 = sizeof(numbers3) / sizeof(numbers3[0]);

    cout << "tablica 1: ";
    printArray(numbers1, size1);

    cout << "tablica 2: ";
    printArray(numbers2, size2);

    cout << "tablica 3: ";
    printArray(numbers3, size3);

    return 0;
}
