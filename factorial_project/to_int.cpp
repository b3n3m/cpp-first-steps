#include <sstream>
#include <stdexcept>
#include <string>
#include "factorial.hpp"

using namespace std;

int to_int(char* text) {
  stringstream input{text};
  int n;
  input >> n;
  if (input.fail() || !input.eof()) {
    throw invalid_argument{string{"Argument '"} + text + "' has wrong format!"};
  }
  return n;
}