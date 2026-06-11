#include <iostream>
#include <string>

using namespace std;

// klasa reprezentująca samochód
class Car {
public:
    // konstruktor domyślny
    Car();

    // destruktor domyślny
    ~Car();

    // modyfikatory
    void SetBrand(string brand) { fBrand = brand; }
    void SetModel(string model) { fModel = model; }
    void SetYear(int year) { fYear = year; }

    // akcesory
    string GetBrand() { return fBrand; }
    string GetModel() { return fModel; }
    int GetYear() { return fYear; }

    // wyświetlanie informacji o samochodzie
    void Print();

private:
    string fBrand;
    string fModel;
    int fYear;
};

// definicje funkcji poza klasą

Car::Car() {
    fBrand = "Unknown";
    fModel = "Unknown";
    fYear = 0;

    cout << "The Car object has been created" << endl;
}

Car::~Car() {
    cout << "The Car object has been destroyed" << endl;
}

void Car::Print() {
    cout << "---------------------------------------" << endl;
    cout << "Car information:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Brand: " << fBrand << endl;
    cout << "Model: " << fModel << endl;
    cout << "Year:  " << fYear << endl;
    cout << "---------------------------------------" << endl;
}

int main() {

    Car myCar;

    myCar.SetBrand("Toyota");
    myCar.SetModel("Corolla");
    myCar.SetYear(2020);

    myCar.Print();

    cout << "Brand: " << myCar.GetBrand() << endl;
    cout << "Model: " << myCar.GetModel() << endl;
    cout << "Year:  " << myCar.GetYear() << endl;

    return 0;
}
