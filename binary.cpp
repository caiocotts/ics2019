#include <cmath>
#include <iostream>
using namespace std;

int main(

) {
  string bin;
  int length = 8;
  int heading = pow(2, length);
  int val;
  cout << "Enter number up to " << heading << ": ";
  cin >> val;
  for (int i = 0; i < length + 1; i++) {
    if (val >= heading) {
      val = val - heading;
      bin = bin + "1";
    } else {
      bin = bin + "0";
    }
    heading = heading / 2;
  }
  cout << bin << "\n";
}