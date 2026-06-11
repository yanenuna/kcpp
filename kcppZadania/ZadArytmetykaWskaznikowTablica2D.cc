#include <iostream>

using namespace std;

int main() {

    int Tab[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "adresy elementow tablicy:" << endl;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            cout << "tab[" << i << "][" << j << "] = "
                 << Tab[i][j]
                 << ", adres: "
                 << &Tab[i][j]
                 << endl;
        }
    }

    return 0;
}
