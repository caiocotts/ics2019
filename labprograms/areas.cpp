#include <iostream>
using namespace std;

int main() {
  double length, width, rectangleA1, rectangleA2;

  cout << "Enter the lenght and with of 2 rectangle to compare which has a "
          "larger area.\n";
  cout << "Enter the length and width for rectangle 1: ";
  cin >> length >> width;
  rectangleA1 = length * width;
  1 cout << "Enter the length and width for rectangle 2: ";
  cin >> length >> width;
  rectangleA2 = length * width;

  if (rectangleA1 > rectangleA2) {
    cout << "Rectangle 1 has the larger area.\n";
  } else if (rectangleA1 < rectangleA2) {
    cout << "Rectangle 2 has the larger area.\n";
  } else if (rectangleA1 == rectangleA2) {
    cout << "Both rectangles have the same area\n";
  }
}