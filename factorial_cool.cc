#include <iostream>
#include <sstream>

using namespace std;

int factorial(int n) {
  int result = 1;
  for (int i = 2; i <= n; ++i) result *= i;
  return result;
}

int main(int argc, char** argv) {
  if (argc < 2) {
    cout << "usage:" << '\n' << argv[0] << " <integer> [<integer>...]\n";
    return -1;
  }
  for (int i = 1; i < argc; ++i) {
    stringstream input{argv[i]};
    int n;
    input >> n;
    if (input.fail() || !input.eof()) {
      cout << "Argument '" << argv[i] << "' has wrong format!\n";
      continue;
    }

    const int result = factorial(n);

    cout << n << "! = " << result << '\n';
  }
}