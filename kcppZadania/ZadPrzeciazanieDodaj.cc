#include <iostream>
#include <string>

using namespace std;

// dodawanie liczb całkowitych
int dodaj(int a, int b) {
    return a + b;
}

// dodawanie liczb zmiennoprzecinkowych
double dodaj(double a, double b) {
    return a + b;
}

// konkatenacja napisów
string dodaj(string a, string b) {
    return a + b;
}

int main() {

    int intA = 10;
    int intB = 5;

    double doubleA = 3.5;
    double doubleB = 2.7;

    string text1 = "Dzien ";
    string text2 = "dobry";

    cout << "Dodawanie int: "
         << dodaj(intA, intB) << endl;

    cout << "Dodawanie double: "
         << dodaj(doubleA, doubleB) << endl;

    cout << "Konkatenacja string: "
         << dodaj(text1, text2) << endl;

    return 0;
}
