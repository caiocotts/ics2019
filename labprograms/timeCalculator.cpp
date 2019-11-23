#include <iostream>
using namespace std;

int main() {
  int seconds;
  int minutes, hours, days = 0;
  cout << "Enter a number of seconds to calcute the fuck: ";
  cin >> seconds;
  if (seconds >= 60 && seconds < 3600) {
    minutes = seconds / 60;
    cout << "There are " << minutes << " minutes in that amount of seconds\n";
  } else if (seconds >= 3600 && seconds < 86400) {
    hours = seconds / 3600;
    cout << "There are " << hours << " hours in that amount of seconds\n";
  } else if (seconds >= 86400) {
    days = seconds / 86400;
    cout << "There are " << days << " days in that amount of seconds\n";
  }
}