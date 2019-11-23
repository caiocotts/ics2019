#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int num = 2;
  int count = 1;
  while (num <= 100) {
    if (count % 5 == 0) {
      cout << setw(6) << num << endl;

    } else {
      cout << setfill('-') << setw(6) << num;
    }
    num += 2;
    count += 1;
  }
}