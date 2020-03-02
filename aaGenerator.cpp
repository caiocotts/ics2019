#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*
1
Unit 2- Control Structure

By : Caio dos Santos Cotts Quintao

This program generates, using *, a total of 7 different forms of 3 different
shapes: lines, rectangles and triangles
*/

// Function that generates a horizontal line.
void hLine() {
  int length;
  cout << "Enter lenght of line(1-20): ";
  cin >> length;
  while (length < 1 || length > 20) {
    cout << "Invalid dimension!  The dimension must be between 1 and 20";
    cout << "Enter lenght of line(1-20): ";
    cin >> length;
  }

  for (int i = 0; i < length; i++) {
    cout << "*";
  }
  cout << "\n";
}

// Function that generates a vertical line.
void vLine() {
  int height;
  cout << "Enter height of line(1-20): ";
  cin >> height;
  while (height < 1 || height > 20) {
    cout << "Invalid dimension!  The dimension must be between 1 and 20";
    cout << "Enter height of line(1-20): ";
    cin >> height;
  }

  for (int i = 0; i < height; i++) {
    cout << "*\n";
  }
}

// Function that generates a rectangle.
void rect() {
  int length;
  int height;
  cout << "Enter length of rectangle: ";
  cin >> length;
  cout << "Enter height of rectangle ";
  cin >> height;
  while ((length < 1 || length > 20) || (height < 1 || height > 20)) {
    cout << "Invalid dimension!  The dimension must be between 1 and 20\n";
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter height of rectangle ";
    cin >> height;
  }

  for (int i = 0; i < height; i++) {
    for (int i = 0; i < length; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

// Function that generates a right angle triangle with its hypotenuse facing the
// right.
void lSlantTriangle() {
  int height;
  cout << "Enter height of triangle: ";
  cin >> height;
  for (int j = 1; j < height + 1; j++) {
    for (int i = 0; i < j; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

// Function that generates a right angle triangle with its hypotenuse facing the
// left.
void rSlantTriangle() {
  int height;

  cout << "Enter height of triangle: ";
  cin >> height;
  for (int j = 1; j < height + 1; j++) {
    for (int s = (height - j); s > 0; s--) {
      cout << " ";
    }
    for (int i = 0; i < j; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

// Function that generates an isosceles triangle.
void isoTriangle() {
  int height;
  cout << "Enter height of triangle: ";
  cin >> height;
  for (int j = 1; j < height + 1; j++) {
    for (int s = (height - j); s > 0; s--) {
      cout << " ";
    }
    for (int i = 1; i < j * 2; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

// Function that generates two isosceles triangles stacked on top of each other.
void doubleIsoTriangle() {
  int height;
  cout << "Enter height of triangle: ";
  cin >> height;
  height /= 2;
  height += 1;
  // First triangle.
  for (int j = height; j > 0; j--) {
    for (int s = (height - j); s > 0; s--) {
      cout << " ";
    }
    for (int i = 1; i < j * 2; i++) {
      cout << "*";
    }
    cout << "\n";
  }
  // Second triangle
  for (int j = 2; j < height + 1; j++) {
    for (int s = (height - j); s > 0; s--) {
      cout << " ";
    }
    for (int i = 1; i < j * 2; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

// Main function where the swith structure is located with the addition of all
// counters.
int main() {
  bool running = true;
  int counter_hLine = 0;
  int counter_vLine = 0;
  int counter_rect = 0;
  int counter_lSlantTriangle = 0;
  int counter_rSlantTriangle = 0;
  int counter_isoTriangle = 0;
  int counter_doubleIsoTriangle = 0;

  cout << "Welcome to the Ascii shape generator!\n\n";
  int shapeIndex = 0;
  while (running) {
    cout << "This program draws the following shapes:\n   1) Horizontal "
            "line\n   2) Vertical line\n   3) Rectangle\n   4) Left slant "
            "right angle triangle\n   5) Right slant right angle triangle\n   "
            "6) Isosceles triangle\n   7) double cone\n";
    cout << "Enter your choice (1-7): ";
    cin >> shapeIndex;

    while (shapeIndex < 1 || shapeIndex > 7) {
      cout << "Invalid choice!  Your choice must be between 1 and 7\n";
      cout << "Enter your choice (1-7): ";
      cin >> shapeIndex;
    }
    switch (shapeIndex) {
    case 1:
      hLine();
      counter_hLine += 1;
      break;

    case 2:
      vLine();
      counter_vLine += 1;
      break;

    case 3:
      rect();
      counter_rect += 1;
      break;

    case 4:
      lSlantTriangle();
      counter_lSlantTriangle += 1;
      break;

    case 5:
      rSlantTriangle();
      counter_rSlantTriangle += 1;
      break;

    case 6:
      isoTriangle();
      counter_isoTriangle += 1;
      break;

    case 7:
      doubleIsoTriangle();
      counter_doubleIsoTriangle += 1;
      break;

    default:
      break;
    }
    char yesOrNo;
    cout << "Would you like to generate another shape (y/n)? ";
    cin >> yesOrNo;
    while (tolower(yesOrNo) != 'n' && tolower(yesOrNo) != 'y') {
      cout << "Invalid input!  Your input must be ‘y’ or ‘n’.\n";
      cout << "Would you like to generate another shape (y/n)? ";
      cin >> yesOrNo;
    }

    if (tolower(yesOrNo) == 'n')
      running = false;
  }
  cout << "Here is the summary of the shapes that were "
          "generated:\n\n";
  printf("%-30s %d\n", "Horizontal line: ", counter_hLine);
  printf("%-30s %d\n", "Vertical line: ", counter_vLine);
  printf("%-30s %d\n", "Rectangle: ", counter_rect);
  printf("%-30s %d\n", "Left slant triangle: ", counter_lSlantTriangle);
  printf("%-30s %d\n", "Right slant triangle: ", counter_rSlantTriangle);
  printf("%-30s %d\n", "Isosceles triangle: ", counter_isoTriangle);
  printf("%-30s %d\n", "Double cone: ", counter_doubleIsoTriangle);
}