#include <iostream>

using namespace std;

// char:
// 'c','a','9','\n'

// char*,char[]:
// "Hello" == {'H','e','l','l','o','\0'}
// null-terminated --> no count needed

// char** == (char*)[]
// not null-terminated --> needs count --> argc

int main(int argc, char** argv) {
  cout << "Hello World, again and again and again...\n";

  cout << "argc = " << argc << '\n';
  for (int i = 0; i < argc; ++i)
    cout << "argv[" << i << "] = " << argv[i] << '\n';
}