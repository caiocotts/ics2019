#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  cout << "Plese enter a numer between 1 and 10 to see its roman numeral "
          "equivalent:  ";
  cin >> num;

  switch (num) {

  case 1:
    cout << "I\n";
    break;

  case 2:
    cout << "II\n";
    break;

  case 3:
    cout << "III\n";
    break;

  case 4:
    cout << "IV\n";
    break;

  case 5:
    cout << "V\n";
    break;

  case 6:
    cout << "VI\n";
    break;

  case 7:
    cout << "VII\n";
    break;

  case 8:
    cout << "VIII\n";
    break;

  case 9:
    cout << "IX\n";
    break;

  case 10:
    cout << "X\n";
    break;

  default:
    break;
  }
}