#include <iostream>

using namespace std;

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {

    /// Example of scoped enumeration
    Month currentMonth = Month::June;

    cout << "Value of June in Month: "
         << static_cast<int>(currentMonth) << endl;

    if (currentMonth == Month::June) {
        cout << "Current month is June." << endl;
    }

    cout << "January: " << static_cast<int>(Month::January) << endl;
    cout << "June: " << static_cast<int>(Month::June) << endl;
    cout << "December: " << static_cast<int>(Month::December) << endl;

    return 0;
}
