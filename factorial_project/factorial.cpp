#include "factorial.hpp"
#include <stdexcept>

using namespace std;

int factorial(int n) {
  if (n < 0)
    throw invalid_argument{"Cannot compute factorial of negative number!"};
  int result = 1;
  for (int i = 2; i <= n; ++i) result *= i;
  return result;
}