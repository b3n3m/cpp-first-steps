#include <iostream>

using namespace std;

int main() {
  // promt for integer number
  // compute factorial
  // output result

  // int x;
  // cin >> x;
  // int y = x;

  // for (--x; x > 0; --x) {
  //   y *= x;
  // }
  // cout << "Die Falkutltät beträgt " << y << endl;

  int n;
  cin >> n;
  if (n < 0) {
    cout << "Fakultäten für negative oder nicht ganze Zahlen sind nicht "
            "definiert."
         << endl;
  } else {
    if (n > 12) {
      long result_long = 1;
      for (int i = 2; i <= n; ++i) {
        result_long *= i;
      }
      cout << "Die Falkutltät beträgt: " << result_long << endl;
    } else {
      int result_int = 1;
      for (int i = 2; i <= n; ++i) {
        result_int *= i;
      }
      cout << "Die Falkutltät beträgt: " << result_int << endl;
    }
  }
}