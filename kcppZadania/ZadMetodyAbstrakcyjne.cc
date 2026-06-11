#include <cmath>
#include <iostream>

using namespace std;

class Figura {
public:
  virtual double Pole() = 0;
  virtual double Obwod() = 0;
};

class Kwadrat : public Figura {
private:
  double bok;

public:
  Kwadrat(double b) : bok(b) {}

  double Pole() {
    return bok * bok;
  }

  double Obwod() {
    return 4 * bok;
  }
};

class Prostokat : public Figura {
private:
  double dlugosc;
  double szerokosc;

public:
  Prostokat(double d, double s)
      : dlugosc(d), szerokosc(s) {}

  double Pole() {
    return dlugosc * szerokosc;
  }

  double Obwod() {
    return 2 * (dlugosc + szerokosc);
  }
};

class Trojkat : public Figura {
private:
  double a;
  double b;
  double c;

public:
  Trojkat(double bokA,
           double bokB,
           double bokC)
      : a(bokA), b(bokB), c(bokC) {}

  double Pole() {
    double p = Obwod() / 2.0;

    return sqrt(p * (p - a) *
                (p - b) * (p - c));
  }

  double Obwod() {
    return a + b + c;
  }
};

class Kolo : public Figura {
private:
  double promien;

public:
  Kolo(double p) : promien(p) {}

  double Pole() {
    return M_PI * promien * promien;
  }

  double Obwod() {
    return 2 * M_PI * promien;
  }

  // obliczenie dystansu
  double Dystans(double metryKwadratowe) {

    return sqrt(metryKwadratowe /
                M_PI);
  }
};

int main() {

  Kwadrat kwadrat(4);
  Prostokat prostokat(5, 3);
  Trojkat trojkat(3, 4, 5);
  Kolo kolo(2);

  cout << "kwadrat:" << endl;
  cout << "pole: "
       << kwadrat.Pole()
       << endl;

  cout << "obwod: "
       << kwadrat.Obwod()
       << endl;

  cout << "\nprostokat:" << endl;
  cout << "pole: "
       << prostokat.Pole()
       << endl;

  cout << "obwod: "
       << prostokat.Obwod()
       << endl;

  cout << "\ntrojkat:" << endl;
  cout << "pole: "
       << trojkat.Pole()
       << endl;

  cout << "obwod: "
       << trojkat.Obwod()
       << endl;

  cout << "\nkolo:" << endl;
  cout << "pole: "
       << kolo.Pole()
       << endl;

  cout << "obwod: "
       << kolo.Obwod()
       << endl;

  cout << "dystans dla 10 m^2: "
       << kolo.Dystans(10)
       << endl;

  return 0;
}
