#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

  int numInput = 0;
  srand(time(0));
  int num = (rand() % 100) + 1;

  cout << "Guess the number between 1 - 100.\n\n";
  cout << "Enter your guess: ";
  cin >> numInput;
  while (true) {
    if (numInput > num) {
      cout << "Number is too large\n";
      cout << "Enter your guess: ";
    } else if (numInput < num) {
      cout << "Number is too small\n";
      cout << "Enter your guess: ";
    } else if (numInput == num) {
      cout << "The number is correct\n";
      break;
    }
    cin >> numInput;
  }
}