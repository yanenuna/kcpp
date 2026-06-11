#include <iostream>
using namespace std;

// przyklad define
#define PI 3.14159

// makro z argumentami
#define POLE_KWADRATU(x) ((x) * (x))

// stringizing (#)
#define NAPIS(x) #x

// token pasting (##)
#define ZMIENNA(n) liczba##n

// define do ifdef
#define TRYB_DEBUG

int main() {

  // przyklad ifdef i else
#ifdef TRYB_DEBUG
  cout << "tryb debug jest wlaczony" << endl;
#else
  cout << "tryb debug jest wylaczony" << endl;
#endif

  // przyklad ifndef
#ifndef TEST
  cout << "makro TEST nie jest zdefiniowane" << endl;
#endif

  // przyklad define
  cout << "wartosc PI: " << PI << endl;

  // przyklad makra z argumentem
  cout << "pole kwadratu (makro): "
       << POLE_KWADRATU(5) << endl;

  // bez dyrektywy preprocesora
  const double pi = 3.14159;
  cout << "wartosc pi (bez define): "
       << pi << endl;

  int bok = 5;
  cout << "pole kwadratu (bez makra): "
       << bok * bok << endl;

  // przyklad #
  cout << "stringizing (#): "
       << NAPIS(to jest tekst)
       << endl;

  // bez #
  string tekst = "to jest tekst";
  cout << "bez stringizing: "
       << tekst << endl;

  // przyklad ##
  int ZMIENNA(1) = 100;

  cout << "token pasting (##): "
       << liczba1 << endl;

  // bez ##
  int liczba2 = 200;

  cout << "bez token pasting: "
       << liczba2 << endl;

  return 0;
}

