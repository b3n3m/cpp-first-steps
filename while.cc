#include <iostream>

using namespace std;

int main() {
  int x = 0;
  while (x < 5) {
    cout << "x = " << x++ << endl;
    // x = x + 1;
    // x += 1;
    //++x;
    // x++ -> (tmp = x, x = x + 1, tmp)
  }
}