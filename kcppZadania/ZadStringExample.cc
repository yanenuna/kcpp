#include <iostream>
#include <string>

using namespace std;

int main() {

    // deklaracja stringa
    string text = "Applied Informatics";

    cout << "Poczatkowy napis: " << text << endl;

    // empty()
    cout << "\nempty()" << endl;
    cout << "Czy napis jest pusty? ";

    if (text.empty()) {
        cout << "Tak" << endl;
    } else {
        cout << "Nie" << endl;
    }

    // size() i length()
    cout << "\nsize() i length()" << endl;
    cout << "size(): " << text.size() << endl;
    cout << "length(): " << text.length() << endl;

    // at()
    cout << "\nat()" << endl;
    cout << "Znak o indeksie 3: " << text.at(3) << endl;

    // append()
    cout << "\nappend()" << endl;
    text.append(" in Poland");
    cout << "Po append(): " << text << endl;

    // find()
    cout << "\nfind()" << endl;
    size_t position = text.find("Poland");

    if (position != string::npos) {
        cout << "\"Poland\" znaleziono na pozycji: "
             << position << endl;
    }

    // substr()
    cout << "\nsubstr()" << endl;
    string subText = text.substr(0, 7);
    cout << "Podciag: " << subText << endl;

    // erase()
    cout << "\nerase()" << endl;
    text.erase(7, 12);
    cout << "Po erase(): " << text << endl;

    // swap()
    cout << "\nswap()" << endl;
    string secondText = "Computer Science";

    cout << "Przed swap()" << endl;
    cout << "text: " << text << endl;
    cout << "secondText: " << secondText << endl;

    text.swap(secondText);

    cout << "Po swap()" << endl;
    cout << "text: " << text << endl;
    cout << "secondText: " << secondText << endl;

    // clear()
    cout << "\nclear()" << endl;
    text.clear();

    cout << "Po clear(): \"" << text << "\"" << endl;
    cout << "Czy napis jest pusty? ";

    if (text.empty()) {
        cout << "Tak" << endl;
    } else {
        cout << "Nie" << endl;
    }

    return 0;
}
