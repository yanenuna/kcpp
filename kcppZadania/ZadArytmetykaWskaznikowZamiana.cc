#include <iostream>

using namespace std;

// zamiana wartości za pomocą wskaźników
void zamien(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int liczba1 = 10;
    int liczba2 = 20;

    cout << "przed zamiana:" << endl;
    cout << "liczba1 = " << liczba1 << endl;
    cout << "liczba2 = " << liczba2 << endl;

    zamien(&liczba1, &liczba2);

    cout << endl;
    cout << "po zamianie:" << endl;
    cout << "liczba1 = " << liczba1 << endl;
    cout << "liczba2 = " << liczba2 << endl;

    return 0;
}
