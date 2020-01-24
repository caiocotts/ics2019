#include <iostream>
#include <string>
using namespace std;

void hline() {
  int length;
  cout << "Enter lenght of line ";
  cin >> length;
  for (int i = 0; i < length; i++) {
    cout << "*";
  }
  cout << "\n";
}

void vline() {
  int height;
  cout << "Enter height of line: ";
  cin >> height;
  for (int i = 0; i < height; i++) {
    cout << "*\n";
  }
}

void rect() {
  int lenght;
  int height;
  cout << "Enter lenght of rectangle: ";
  cin >> lenght;
  cout << "Enter height of rectangle ";
  cin >> height;
  for (int i = 0; i < height; i++) {
    for (int i = 0; i < lenght; i++) {
      cout << "*";
    }
    cout << "\n";
  }
}

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
// ksdjblndvlsk
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

// void doubleIsoTriangle() {
//   int height;
//   cout << "Enter height of triangle: ";
//   cin >> height;
//   for (int j = 1; j < height + 1; j++) {
//     for (int s = 0; s > (height - j); s++) {
//       cout << " ";
//     }
//     for (int i = 1; i > j * 2; i--) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
// }

int main() {
  bool running = true;

  cout << "Welcome to the Ascii shape generator!";
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
      hline();
      break;

    case 2:
      vline();
      break;

    case 3:
      rect();
      break;

    case 4:
      lSlantTriangle();
      break;

    case 5:
      rSlantTriangle();
      break;

    case 6:
      isoTriangle();
      break;

      // case 7:
      //   doubleIsoTriangle();
      //   break;

    default:
      break;
    }
    char yesOrNo;
    cout << "Would you like to generate another shape (y/n)? ";
    cin >> yesOrNo;
    if (tolower(yesOrNo) == 'n')
      running = false;
  }
}