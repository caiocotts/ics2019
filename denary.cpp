#include <iostream>
using namespace std;

int main() {
  string bin;
  int multi = 1;
  int sum = 0;
  cout << "Enter a binary number : ";
  cin >> bin;
  for (int i = bin.size() - 1; i >= 0; i--) {

    if (bin.at(i) == '1') {
      sum += multi;
    }
    multi *= 2;
  }
  cout << sum << "\n";
}
