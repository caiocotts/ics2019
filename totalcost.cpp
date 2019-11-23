#include <iostream>
using namespace std;

int main() {

  float price;
  float taxRate;
  float total;
  cout << "Enter the price of an item: ";
  cin >> price;
  cout << "Enter a tax rate: ";
  cin >> taxRate;
  float tax = price * taxRate;
  total = price + tax;
  cout << total << "\n";
}