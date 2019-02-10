#include <iostream>

using namespace std;

int main() {
  int x = 1;
  int y = 2;
  int z = 3;
  cout << "x = " << x << endl;
  {
    cout << "x = " << x << endl;
    int x = 2;
    cout << "x = " << x << endl;
    {
      cout << "x = " << x << endl;
      int x = 3;
      cout << "x = " << x << endl;
      cout << "y = " << y << endl;
    }
    cout << "x = " << x << endl;
  }
  cout << "x = " << x << endl;
}