#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int pennies, nickels, dimes, quarter;
  double pennyCount, nickelCount, dimeCount, quarterCount, total;

  cout << "To win enter how many pennies, nickles, dimes and quarter to euqal "
          "to one dollar\n";
  cout << "Enter how many pennies: \n";
  cin >> pennies;
  pennyCount = pennies * 0.01;
  cout << "Enter how many nickles: \n";
  cin >> dimes;
  nickelCount = dimes * (0.05);
  cout << "Enter how many dimes: \n";
  cin >> dimes;
  dimeCount = dimes * 0.10;
  cout << "Enter how many quarters: \n";
  cin >> quarter;
  quarterCount = quarter * 0.25;
  total = (pennyCount + nickelCount + dimeCount + quarterCount);

  cout << setprecision(2) << fixed << showpoint << "utota\n ";
  if (total == 1.00) {
    cout << "Congrats! You win the game!\n";
  } else if (total > 1.00) {
    cout << "You entered: " << total << ". That is more than one dollar.\n";
  } else {
    cout << "You entered: " << total << ". That is less than one dollar.\n";
  }
}