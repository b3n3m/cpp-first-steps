#include <iostream>

using namespace std;

int main() {
  int a = 1;
  int result = 0;
  int fibu;
  cin >> fibu;
  // bis 46 als int möglich
  for (int i = 1; i < fibu + 1; ++i) {
    cout << i << " = " << result << "\n";

    result += a;
    a = result - a;
  }
}