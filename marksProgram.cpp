#include <iostream>
using namespace std;

int main() {
  float score1, score2, score3;
  int studentNum = 1;

  for (int i = 0; i <= 3; i++) {
    cout << "Student number " << studentNum << "\n";

    cout << "Test number 1 ";
    cin >> score1;
    cout << "Test number 2 ";
    cin >> score2;
    cout << "Test number 3 ";
    cin >> score3;
    float average = ((score1 + score2 + score3) / 300) * 100;
    cout << average << "\n";
    studentNum += 1;
  }
}
