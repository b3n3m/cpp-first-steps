#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char** argv) {
  if (2 != argc) {
    cout << "usage: " << argv[0] << " <integer>\n";
    return -1;
  }

  stringstream input{argv[1]};
  int n;
  input >> n;

  if (input.fail()) {
    cout << "Wrong argument format!\n";
    return -1;
  }

  cout << "n = " << n << endl;
}