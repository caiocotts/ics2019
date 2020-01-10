#include <iostream>
using namespace std;

int main() {
  long val = 0, num;
  bool isPrime = true;
  cout << "Input a number to check if it's prime: ";
  cin >> num;
  if (num == 2) {
    cout << "The number is prime\n";
    exit(1);
  }

  for (int i = 2; i <= num - 1; i++) {
    if ((num % i) == 0) {
      isPrime = false;
      break;
    }
  }
  if (isPrime) {
    cout << "The number is prime.\n";
  } else {
    cout << "The number is not prime.\n";
  }
}
