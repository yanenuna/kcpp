#include <iostream>

using namespace std;

// pokazanie działania operacji na wskaźnikach
void Function1() {

    int tab[] = {10, 20, 30};
    int* p;

    cout << "dzialanie operacji na wskaznikach:" << endl;

    p = tab;
    p++;
    cout << "p++: " << *p << endl;

    p = tab;
    ++p;
    cout << "++p: " << *p << endl;

    p = tab;
    ++(*p);
    cout << "++*p: " << *p << endl;

    p = tab;
    ++(*p);
    cout << "++(*p): " << *p << endl;

    p = tab;
    ++(*p);
    cout << "++*(p): " << *p << endl;

    p = tab;
    cout << "*p++: " << *p++ << endl;
    cout << "po operacji p wskazuje na: "
         << *p << endl;

    p = tab;
    (*p)++;
    cout << "(*p)++: " << *p << endl;

    p = tab;
    cout << "*(p)++: " << *(p++) << endl;
    cout << "po operacji p wskazuje na: "
         << *p << endl;

    p = tab;
    cout << "*++p: " << *(++p) << endl;

    p = tab;
    cout << "*(++p): " << *(++p) << endl;
}

// pokazanie działania wskaźników na zmiennych
void Function2() {

    int a = 0;
    int b = 0;
    int c = 0;

    int* wsk;

    cout << endl;

    cout << "1.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &b;
    *wsk = 10;

    cout << "2.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &c;
    *wsk = 20;

    cout << "3.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &b;
    *wsk = 30;

    cout << "4.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &a;
    *wsk = 40;

    cout << "5.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &b;
    *wsk = 50;

    cout << "6.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &c;
    *wsk = 60;

    cout << "7.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &b;
    *wsk = 70;

    cout << "8.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &a;
    *wsk = 80;

    cout << "9.  a, b, c: "
         << a << " "
         << b << " "
         << c << endl;

    wsk = &b;
    *wsk = 90;

    cout << "10. a, b, c: "
         << a << " "
         << b << " "
         << c << endl;
}

int main() {

    Function1();

    Function2();

    return 0;
}
