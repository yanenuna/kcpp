#include <iostream>

using namespace std;

// funkcje zadeklarowane jako extern "C"
extern "C" void Function1();
extern "C" void Function2();

// pozostałe funkcje
void Function3();
void Function4();
void Function5();

extern "C" void Function1() {
    cout << "Function1 (extern C)" << endl;
}

extern "C" void Function2() {
    cout << "Function2 (extern C)" << endl;
}

void Function3() {
    cout << "Function3" << endl;
}

void Function4() {
    cout << "Function4" << endl;
}

void Function5() {
    cout << "Function5" << endl;
}

int main() {

    cout << "Program start" << endl;

    Function1();
    Function2();
    Function3();
    Function4();
    Function5();

    cout << "Program end" << endl;

    return 0;
}
