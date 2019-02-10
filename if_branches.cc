#include <iostream>

using namespace std;

int main() {
  cout << "Gib mir 2 Zahlen: ";
  int x;
  int y;
  cin >> x >> y;
  cout << "Deine Zahlen sind x = " << x << " und y = " << y << endl;

  if (x == y) {
    cout << "x und y sind gleich!\n";
  } else if (x > y) {
    cout << "x ist größer als y!\n";
  } else {
    cout << "x is kleiner als y!\n";
  }

  if ((x < 7) && (y != 5)) cout << "Jackpot!\n";
  if (x || y) cout << "Wenigstens eine Zahl ist nicht null!\n";
  if (!x) cout << "x is null!\n";
}