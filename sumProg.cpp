#include <iostream>
using namespace std;

int main() {
  int i, evenSum = 0, oddSum = 0;
  while (cin >> i) {
    if (i % 2 == 0) {
      evenSum += i;
    } else {
      oddSum += i;
    }
  }

  cout << evenSum << oddSum;
}