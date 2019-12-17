#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int firstNum = 0, secondNum = 0, sumEven = 0, powSumOdd = 0;
  cout << "Enter 2 digits, the first being smaller than the second: ";
  cin >> firstNum;
  cin >> secondNum;
  int i = firstNum;
  cout << "All odd numbers in between number 1 and 2: ";
  while (i++ <= secondNum) {

    if ((i % 2) != 0) {

      cout << i << " ";
      powSumOdd += pow(i, 2);
    }
  }
  i = firstNum;
  while (i++ <= secondNum) {
    if ((i % 2) == 0) {
      sumEven += i;
    }
  }
  cout << "\n"
       << "Then sum of all even numbers between number 1 and 2: " << sumEven
       << "\n";
  cout << "The sum of all even numbers between number 1 and 2, to the power of "
          "2: "
       << powSumOdd << "\n";
}
