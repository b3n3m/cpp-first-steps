#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int factorial(int n) {
  int result = 1;
  for (int i = 2; i <= n; ++i) result *= i;
  return result;
}

int to_int(char* text) {
  stringstream input{text};
  int n;
  input >> n;
  if (input.fail() || !input.eof()) {
    throw invalid_argument(string("Argument '") + text + "' has wrong format!");
  }
  return n;
}

int main(int argc, char** argv) {
  if (argc < 2) {
    cout << "usage:" << '\n' << argv[0] << " <integer> [<integer>...]\n";
    return -1;
  }
  for (int i = 1; i < argc; ++i) {
    try {
      const int n = to_int(argv[i]);
      const int result = factorial(n);
      cout << n << "! = " << result << '\n';
    } catch (const exception& e) {
      cout << e.what() << '\n';
    }
  }
}