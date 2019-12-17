#include <iostream>
#include <string>
using namespace std;

int main() {
  string wordNum, phoneNum;
  int val = 0;
  while (true) {
    getline(cin, wordNum);
    for (int i = 0; i < wordNum.size(); i++) {

      int ch = wordNum.at(i);
      switch (tolower(ch)) {
      case 'a':
      case 'b':
      case 'c':
        phoneNum += "2";
        break;

      case 'd':
      case 'e':
      case 'f':
        phoneNum += "3";
        break;

      case 'g':
      case 'h':
      case 'i':
        phoneNum += "4";
        break;

      case 'j':
      case 'k':
      case 'l':
        phoneNum += "5";
        break;

      case 'm':
      case 'n':
      case 'o':
        phoneNum += "6";
        break;

      case 'p':
      case 'q':
      case 'r':
      case 's':
        phoneNum += "7";
        break;

      case 't':
      case 'u':
      case 'v':
        phoneNum += "8";
        break;

      case 'w':
      case 'x':
      case 'y':
      case 'z':
        phoneNum += "9";
        break;

      default:
        break;
      }
      if (phoneNum.size() == 3) {
        phoneNum += "-";
      }
      if (phoneNum.size() == 8) {
        break;
      }
    }
    cout << phoneNum << endl;
    phoneNum = "";
  }
}