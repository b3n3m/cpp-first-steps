#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i <= 5; ++i) {
    cout << "i = " << i << endl;
  }

  int x;
  int i;
  for (i = 0, x = 12; i < 5 && x > 7; ++i, --x) {
    cout << "i = " << i << "\tx = " << x << endl;
  }
}