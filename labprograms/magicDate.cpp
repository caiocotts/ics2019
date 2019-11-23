#include <iostream>
using namespace std;

int main() {
  int day, month, year;

  cout << "Input a date to check if it is a magic date using this format, "
          "dd mm yy:   ";
  cin >> day >> month >> year;

  if (day * month == year) {
    cout << "This is a magic date!\n";
  } else {
    cout << "This is not a migic date.\n";
  }
}