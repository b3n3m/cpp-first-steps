#include <fibonacci.hpp>

namespace bmo {

int fibonacci(int n) {
  if (n < 2) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

}  // namespace bmo