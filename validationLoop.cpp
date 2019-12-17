#include <iostream>
using namespace std;

int main() {
  int sum = 0;

  for (int i = 73; i <= 415; i++) {
    sum += i;
  }
  cout << sum << "\n";
}