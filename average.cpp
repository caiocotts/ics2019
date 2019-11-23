#include <iostream>
using namespace std;

int main() {
  double num1, num2, num3;
  cout << "Enter three numbers:  ";

  cin >> num1 >> num2 >> num3;
  double average = (num1 + num2 + num3) / 3;

  cout << average << endl;

  return 0;
}