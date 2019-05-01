#include <iostream>

#include <fibonacci.hpp>

using namespace std;

int main() {
  for (int i = 0; i < 10; ++i)
    cout << "fibonacci(" << i << ") = " << fibonacci(i) << "\n";
}
