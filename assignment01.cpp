#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double dadIncome = 99000;
  double momHouseIns = 150000;
  double momCarIns = 300000;
  double juniorHourRate = 12.5;
  double juniorHour = 15;
  double juniorWeeks = 40;
  double momIncome = (12.5 / 100 * momHouseIns) + (9.8 / 100 * momCarIns);
  double juniorIncome = juniorHourRate * juniorHour * juniorWeeks;

  double grossIncome = dadIncome + momIncome + juniorIncome;
  double averageIncome = (dadIncome + momIncome + juniorIncome) / 3;

  double dadTaxPaid = 20.0 / 100 * dadIncome;
  double momTaxPaid = 15.0 / 100 * momIncome;
  double juniorTaxPaid = 5.0 / 100 * juniorIncome;
  double totalTax = dadTaxPaid + momTaxPaid + juniorTaxPaid;
  double netIncome = grossIncome - totalTax;
  double overallTaxRate = 100 - (netIncome / grossIncome * 100);
  // printf("%0.14f\n", overallTaxRate);
  double monthlyNetInc = netIncome / 12;

  double wholeNum = 1.0;
  double numerator = 3.0;
  double denomerator = 4.0;
  double inproperFractNum = (wholeNum * denomerator) + numerator;

  double investAmmount = 8.0 / 100 * netIncome;
  double numStocks = investAmmount / (inproperFractNum / denomerator);
}