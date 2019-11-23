#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double height, weight, bmi;

  cout << "Enter your height and weight in that order to calculate your Body "
          "Mass Index: ";
  cin >> height >> weight;
  bmi = weight * 703 / pow(height, 2);
  if (bmi > 18.5 && bmi <= 25) {
    cout << "Your weight is optimal\n";
  } else if (bmi > 25) {
    cout << "Your weight is considered overweight\n";
  } else if (bmi < 18) {
    cout << "Your body weight is considered underweight\n";
  }
}