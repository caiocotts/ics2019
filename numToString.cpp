#include <iostream>
#include <string>
using namespace std;

int main() {
  int input;
  string num;

  cin >> input;
  input = abs(input);
  num = to_string(input);
  int digit;
  int sum = 0;
  for (int i = 0; i < num.size(); i++) {
    cout << num.at(i) << " ";
    digit = (int)num.at(i) - '0';
    sum += digit;
  }
  cout << sum << endl;
}