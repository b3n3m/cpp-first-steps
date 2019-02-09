#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "sizeof(int) = " << sizeof(int) * 8 << "bit" << endl
       << "integer range = [" << numeric_limits<int>::min() << ", "
       << numeric_limits<int>::max() << "]" << endl;

  int x = 25;
  cout << "Hello, World!\n"
       << "Ich bin " << x << " Jahre jung." << endl;
  // endl = schreibt Out vor Ende Quellcode und zeigt Vortschritt. Zwigeng wird
  // Cache ausgegeben
}