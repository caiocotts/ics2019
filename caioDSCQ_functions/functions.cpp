#include "functions.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

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