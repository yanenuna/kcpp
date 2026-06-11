#include <iostream>

using namespace std;

// przykłady operatorów arytmetycznych
void OperatoryArytmetyczne() {

    int a = 10;
    int b = 3;

    cout << "operatory arytmetyczne:" << endl;

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << endl;
}

// przykłady operatorów przypisania
void OperatoryPrzypisania() {

    int a = 10;

    cout << "operatory przypisania:" << endl;

    cout << "wartosc poczatkowa a = "
         << a << endl;

    a += 5;
    cout << "po a += 5: "
         << a << endl;

    a -= 3;
    cout << "po a -= 3: "
         << a << endl;

    a *= 2;
    cout << "po a *= 2: "
         << a << endl;

    a /= 4;
    cout << "po a /= 4: "
         << a << endl;

    a %= 3;
    cout << "po a %= 3: "
         << a << endl;
}

int main() {

    OperatoryArytmetyczne();

    OperatoryPrzypisania();

    return 0;
}
