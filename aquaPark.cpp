#include <iostream>
using namespace std;

int main() {
  int tickets, childTickets, total = 0;

  cout << "Enter how many adult tickets are needed: ";
  cin >> tickets;
  cout << "Enter how many child tickets are needed: ";
  cin >> childTickets;
  tickets *= 15;
  childTickets *= 11;
  total = tickets + childTickets;
  if (total >= 50) {
    total -= (0.05 * total);
    cout << total << endl;
  } else {
    cout << total << endl;
  }
}