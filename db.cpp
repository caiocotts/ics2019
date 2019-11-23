#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

struct entry {
  string name;
  string phone;
};

entry db[] = {{"adao", "321412412"},    {"benedito", "999999"},
              {"bezerra", "654642"},    {"jose", "1111111"},
              {"marcelo", "432432423"}, {"roberto", "4333333"},
              {"ziraldo", "7777777"}};
int size = 7;

int binary_tree(entry table[], string lookup) {
  srand(time(0));
  int index = (rand() % size);
  int num = 0;

  while (table[index].name != lookup) {
    index = (rand() % size);
    num += 1;
  }
  return index;

  //  for (int index = 0; index < 7; index++) {
  //    if (table[index].name == lookup) {
  //      return index;
  //    }
  //  }
  //  return -1;
}

int main() {
  //  cout << sizeof(db) / sizeof(entry);
  // string arr[15];
  // cout << "Size of array: " << sizeof(arr) << endl;
  // cout << "Size of elem:  " << sizeof(string) << endl;
  // cout << "Total de elem: " << sizeof(arr) / sizeof(string) << endl;
  string name;
  cin >> name;
  int p = binary_tree(db, name);
  cout << db[p].name << " " << db[p].phone;
}