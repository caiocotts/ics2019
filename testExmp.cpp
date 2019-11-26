#include <iostream>
using namespace std;

int main() {
  int n1 = 3;
  int n2 = 5;
  int temp = 0;
  while (((n1 + n2) % 5) != 0) {
    temp = n1 + n2;
    n1 = n2;
    n2 = temp;
    cout << temp << " ";
  }
}