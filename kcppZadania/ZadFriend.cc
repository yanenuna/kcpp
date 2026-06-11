#include <iostream>

using namespace std;

class B;

class A {
private:
  int sekretA;

public:
  A() {
    sekretA = 100;
  }

  // klasa B jest przyjacielem klasy A
  friend class B;
};

class B {
private:
  int sekretB;

public:
  B() {
    sekretB = 200;
  }

  // klasa A jest przyjacielem klasy B
  friend class A;

  void pokazSekretA(A obiektA) {
    cout << "dostep do prywatnej zmiennej A: "
         << obiektA.sekretA << endl;
  }
};

int main() {

  A obiektA;
  B obiektB;

  // klasa B ma dostep do prywatnych skladnikow A
  obiektB.pokazSekretA(obiektA);

  cout << "\nfriendship is not mutual."
       << endl;

  cout << "aby A miala dostep do prywatnych "
       << "skladnikow B, nalezy dodac "
       << "'friend class A' w klasie B."
       << endl;

  return 0;
}
