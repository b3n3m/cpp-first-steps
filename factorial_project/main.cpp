#include <iostream>
#include <stdexcept>

#include "factorial.hpp"

using namespace std;

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
    } catch (const invalid_argument& e) {
      cout << e.what() << '\n';
    }
  }
}
