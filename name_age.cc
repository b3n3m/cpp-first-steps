#include <iostream>
#include <string>

using namespace std;

int main() {
  /*cout << "Bitte nenne deinen Vornamen: ";
  string vorname;
  cin >> vorname;
  cout << "Bitte nenne deinen Nachnamen: ";
  string nachname;
  cin >> nachname;
  cout << "Bitte nenne dein Alter: ";
  int alter;
  cin >> alter;
  */
  string vorname;
  string nachname;
  int alter;
  cout << "Bitte nenne mir deinen Vornamen, Nachnamen und dein Alter: \n";
  cin >> vorname >> nachname >> alter;
  cout << "Hallo " << vorname << " " << nachname
       << " , wie geht es dir? Verdammt du bist " << alter << " alt?!" << endl;
}