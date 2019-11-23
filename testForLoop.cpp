#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i <= 10; i++) {
    cout << right;
    cout << setw(222) << "Hello World" << endl;
  }
}