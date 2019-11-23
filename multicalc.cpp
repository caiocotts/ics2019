#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
  double a, b;
  double result;
  string opp;
  string name;

  cout << "8\"\"8\"\"8                       8\"\"\"\"8\n";
  cout << "8  8  8 e   e e   eeeee e     8    \" eeeee e     eeee\n";
  cout << "8e 8  8 8   8 8     8   8     8e     8   8 8     8  8\n";
  cout << "88 8  8 8e  8 8e    8e  8e    88     8eee8 8e    8e\n";
  cout << "88 8  8 88  8 88    88  88    88   e 88  8 88    88\n";
  cout << "88 8  8 88ee8 88eee 88  88    88eee8 88  8 88eee 88e8\n";

  sleep(1);
  cout << "\nUsername:  ";
  cin >> name;
  cout << "Hello " << name
       << ", what would you like to do? \n (A)ddition \n (S)ubtraction \n "
          "(D)ivision \n (M)ultiplication \nOpperation: ";
  cin >> opp;
  cout << "\n \nEnter two values to execute opperation:  ";
  cin >> a >> b;
  if (opp == "a") {
    result = a + b;
  }

  else if (opp == "s") {
    result = a - b;
  }

  else if (opp == "d") {
    result = a / b;
  }

  else if (opp == "m") {
    result = a * b;
  }
  cout << result << "\n";

  return 0;
}