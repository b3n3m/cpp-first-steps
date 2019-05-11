#include <iostream>

#include <rational.hpp>

using namespace std;

int main() {
  using bmo::rational;
  rational r{};
  cout << "sizeof(rational) = " << sizeof(rational) << '\n';

  if (!(r.numerator == 0 && r.denominator == 1)) {
    cerr << "ERROR: Default constructor of 'rational' initialzes wrong "
            "numerator and denominator!\n"
         << "r.numerator == " << r.numerator << "\n"
         << "r.denominator == " << r.denominator << "\n";
    return -1;
  }
  cout << "SUCCESS\n";
}