#include "functions.h"
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void addCoins(double pennies, double nickels, double dimes, double quarters) {
  pennies /= 100;
  nickels /= 20;
  dimes /= 10;
  quarters /= 4;
  double sum = pennies + nickels + dimes + quarters;
  cout << sum;
}

void convertMillis(int millis) {
  double seconds = millis / 1000.0;
  if (seconds < 60) {
    cout << "00:00:" << seconds << "\n";
    return;
  }

  double minutes;
  seconds = modf(seconds / 60, &minutes);
  seconds *= 60.0;
  if (minutes < 60) {
    cout << "00:" << minutes << ":" << seconds << "\n";
    return;
  }

  double hours;
  minutes = modf(minutes / 60, &hours);
  minutes *= 60.0;
  cout << hours << ':' << minutes << ':' << seconds << "\n";
}

double distance(int x1, int y1, int x2, int y2) {
  double distance = 0.0;
  distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  return distance;
}

void printMatrix(int n) {
  srand(time(0));
  int val = (rand() % 2);
  for (int i = 0; i < n; i++) {
    for (int i = 0; i < n; i++) {
      cout << val << ' ';
      val = (rand() % 2);
    }
    cout << "\n";
  }
}

void futureInvestmentValue(double investmentAmount, double annualInterestRate,
                           int years) {

  double futureValues = investmentAmount;
  for (int i = 0; i < years; i++) {
    for (int j = 0; j < 12; j++) {
      futureValues += futureValues * (annualInterestRate / 12) / 100;
    }
    cout << futureValues << "\n";
  }
}

void displayPattern(int n) {

  for (int j = 1; j < n + 1; j++) {
    for (int s = (n - j); s > 0; s--) {
      cout << "  ";
    }
    for (int i = j; i > 0; i--) {
      cout << i << ' ';
    }
    cout << "\n";
  }
}

void displaySortedNumbers(int num1, int num2, int num3) {

  if (num1 > num2 && num2 > num3) {
    cout << num3 << " " << num2 << " " << num1 << "\n";
  } else if (num2 > num3 && num3 > num1) {
    cout << num1 << " " << num3 << " " << num2 << "\n";
  } else if (num3 > num1 && num1 > num2) {
    cout << num2 << " " << num1 << " " << num3 << "\n";
  } else if (num1 > num3 && num3 > num2) {
    cout << num2 << " " << num3 << " " << num1 << "\n";
  } else if (num3 > num2 && num2 > num1) {
    cout << num1 << " " << num2 << " " << num3 << "\n";
  } else if (num2 > num1 && num1 > num3) {
    cout << num3 << " " << num1 << " " << num2 << "\n";
  }
}

int isPalindrome(int n) {
  int num = n;
  bool palindrome = true;
  int reverseNum = reverse(num);
  if (reverseNum == num) {
    return true;
  } else {
    return false;
  }
}

int reverse(int n) {
  string num;

  num = to_string(n);
  string reverseNum;
  for (int i = num.size() - 1; i >= 0; i--) {
    reverseNum += num.at(i);
  }

  return stoi(reverseNum);
}

int sumDigits(int n) {
  string num;

  num = to_string(n);
  int digit;
  int sum = 0;
  for (int i = 0; i < num.size(); i++) {
    digit = (int)num.at(i) - '0';
    sum += digit;
  }
  return sum;
}

int getPentagonalNumber(int n) {

  int p = n * (3 * n - 1) / 2;
  return p;
}
void question1() {
  for (int x = 1; x <= 50; x++) {
    int p = getPentagonalNumber(x);
    if (x % 5 == 0)
      cout << setw(8) << p << endl;
    else
      cout << setw(8) << p;
  }
  cout << "\n";
}

void question2() {
  int number;
  cin >> number;
  int sum = sumDigits(number);
  cout << sum << "\n";
}

void question3() {
  int number;
  cin >> number;
  int reverseNumber = reverse(number);
  cout << reverseNumber << "\n";
}

void question4() {
  int number;
  cin >> number;
  bool palindrome = isPalindrome(number);
  if (palindrome) {
    cout << "Ob-La-Di, Ob-La-Da\n";
  } else {
    cout << "I've got blisters on my fingers!!\n";
  }
}

void question5() {
  int num1, num2, num3;
  cin >> num1 >> num2 >> num3;
  displaySortedNumbers(num1, num2, num3);
}

void question6() {
  int height = 0;
  cin >> height;
  displayPattern(height);
}

void question7() {
  double investmentAmount, annualInterestRate;
  int years;
  cin >> investmentAmount >> annualInterestRate >> years;
  futureInvestmentValue(investmentAmount, annualInterestRate, years);
}

void question8() {
  int val;
  cin >> val;
  printMatrix(val);
}

void question9() {
  double result;
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  result = distance(x1, y1, x2, y2);
  cout << result;
}

void question10() {
  int millis;
  cin >> millis;
  convertMillis(millis);
}

void question11() {
  double pennies, nickels, dimes, quarters;
  cin >> pennies >> nickels >> dimes >> quarters;

  addCoins(pennies, nickels, dimes, quarters);
}