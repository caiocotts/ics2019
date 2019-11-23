#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
/*
This is the c++ program file for assignment 1, The Family Budget Calculator, in
this program the user is prompted to input certain values in which the program
takes in, processes and returns as the proper outputs for each calculation.
*/
int main() {
  // These are all the variables that I did not have to initialize as I declared
  // them.
  double dadIncome, momHouseIns, momCarIns, juniorHourRate, juniorHour,
      juniorWeeks, wholeNum, numerator, denominator, phoneOverYear,
      minutesBlock, costOfBlock, kiloWhattHours, quantityDiscount, utilityTax,
      distance, fuelEfficiency, averageGasPrice, biWeekMortgage;

  string i, ii;
  // this sets all values to print with 2 decimal places exept for my printf
  // function.
  cout << fixed << showpoint << setprecision(2);
  // ascii art for "assignment 1"
  // It looks like a bunch of scrambled blocks and characters, but it displays
  // quite nicely on the console.
  cout << " █████╗ ███████╗███████╗██╗ ██████╗ ███╗   ██╗███╗   "
          "███╗███████╗███╗   ██╗████████╗     ██╗\n";
  cout << "██╔══██╗██╔════╝██╔════╝██║██╔════╝ ████╗  ██║████╗ "
          "████║██╔════╝████╗  ██║╚══██╔══╝    ███║\n";
  cout << "███████║███████╗███████╗██║██║  ███╗██╔██╗ ██║██╔████╔██║█████╗  "
          "██╔██╗ ██║   ██║       ╚██║\n";
  cout << "██╔══██║╚════██║╚════██║██║██║   ██║██║╚██╗██║██║╚██╔╝██║██╔══╝  "
          "██║╚██╗██║   ██║        ██║\n";
  cout << "██║  ██║███████║███████║██║╚██████╔╝██║ ╚████║██║ ╚═╝ "
          "██║███████╗██║ ╚████║   ██║        ██║\n";
  cout << "╚═╝  ╚═╝╚══════╝╚══════╝╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝     "
          "╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝        ╚═╝\n";

  // This is the input for all of the family income and relevant values.
  cout << "\nWhat is the yearly salary of Papa Jackson? ";
  cin >> dadIncome;
  cout << "How much house insurence did Mama Jackson sell? ";
  cin >> momHouseIns;
  cout << "How much car insurence did Mama Jackson sell? ";
  cin >> momCarIns;
  cout << "Enter Junior's hourly rate: ";
  cin >> juniorHourRate;
  cout << "Enter Junior's number of hours per week: ";
  cin >> juniorHour;
  cout << "Enter number of weeks Junior worked: ";
  cin >> juniorWeeks;
  // Instead of using just cout commands with a bunch of dashes in them
  // I felt that using for loops was much easier to edit and to write.
  cout << "\n";
  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }
  cout << "INCOME";
  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }
  // Output of all of the family's income.
  double momIncome = (12.5 / 100 * momHouseIns) + (9.8 / 100 * momCarIns);
  double juniorIncome = juniorHourRate * juniorHour * juniorWeeks;
  double grossIncome = dadIncome + momIncome + juniorIncome;
  double averageIncome = (dadIncome + momIncome + juniorIncome) / 3;
  cout << right;
  cout << "\n\nPapa Jackson Income:" << setw(20) << "$" << dadIncome;
  cout << "\nMama Jackson Income:" << setw(20) << "$" << momIncome;
  cout << "\nJunior Jackson Income:" << setw(18) << "$" << juniorIncome;
  cout << "\nTotal family Income:" << setw(20) << "$" << grossIncome;
  cout << "\nAverage family net Income: " << setw(13) << "$" << averageIncome
       << "\n\n";
  for (int i = 0; i <= 15; i++) {
    cout << "-";
  }
  cout << "INCOME TAX";
  for (int i = 0; i <= 25; i++) {
    cout << "-";
  }
  // These are the variables I declared in order to output the tax values of the
  // family down below.
  double dadTaxPaid = 20.0 / 100 * dadIncome;
  double momTaxPaid = 15.0 / 100 * momIncome;
  double juniorTaxPaid = 5.0 / 100 * juniorIncome;
  double totalTax = dadTaxPaid + momTaxPaid + juniorTaxPaid;
  double netIncome = grossIncome - totalTax;
  double overallTaxRate = 100 - (netIncome / grossIncome * 100);
  double monthlyNetInc = netIncome / 12;
  cout << right;
  // Tax value outputs.
  cout << "\n\nTax paid by Papa Jackson:" << setw(15) << "$" << dadTaxPaid;
  cout << "\nTax paid by Mama Jackson:" << setw(15) << "$" << momTaxPaid;
  cout << "\nTax paid by Junior Jackson:" << setw(13) << "$" << juniorTaxPaid;
  cout << "\nTotal amount of Tax paid by the family:" << setw(1) << "$"
       << totalTax;
  // I used a printf function in order to formmat the overallTaxRate value, I
  // thought of using this because I had remembered this function from old
  // projects I've done in the past.
  printf("\nOverall Tax rate as a percentage is:   $%0.14f ", overallTaxRate);
  cout << "\nTotal net Income: " << setw(22) << "$" << netIncome;
  cout << "\nAverage monthly net Income: " << setw(12) << "$" << monthlyNetInc
       << "\n\n";

  for (int i = 0; i <= 22; i++) {
    cout << "-";
  }
  cout << "INVESTMENT";

  for (int i = 0; i <= 18; i++) {
    cout << "-";
  }
  // This section is for inputing and outputing the values used to calculate the
  // amount of investment and the number of stocks invested.
  cout << "\n\nPlease enter price for one share of stock...";
  cout << "\nPlease enter whole number portion: ";
  cin >> wholeNum;
  cout << "Please enter the numerator of the fraction: ";
  cin >> numerator;
  cout << "Please enter the denominator of the fraction:";
  cin >> denominator;
  double inproperFractNum = (wholeNum * denominator) + numerator;
  double investAmmount = 8.0 / 100 * netIncome;
  int numStocks = investAmmount / (inproperFractNum / denominator);
  cout << "Amount of investment: $" << investAmmount;
  cout << "\nNumbers of shares of stock invested: " << numStocks << "\n\n";

  for (int i = 0; i <= 17; i++) {
    cout << "-";
  }
  cout << "EXPENCES ELECTRICITY";

  for (int i = 0; i <= 13; i++) {
    cout << "-";
  }
  // This one is I/O for the electricity bill.
  cout << "\n\nHow many units of electricity over the year? ";
  cin >> kiloWhattHours;
  cout << "After how many months did the discount finish? ";
  cin >> quantityDiscount;
  double discount = quantityDiscount * 1000;
  discount = (discount * 0.16);
  double discount2 = 0.1 * discount;
  discount = discount - discount2;
  double preDiscount = kiloWhattHours - quantityDiscount * 1000;
  preDiscount = preDiscount * 0.16;
  double electricityBill = preDiscount + discount;
  utilityTax = 0.02 * electricityBill;
  electricityBill = electricityBill - 50 + utilityTax;
  cout << "Total cost of electricity bill for the year? $" << electricityBill
       << "\n\n";
  for (int i = 0; i <= 14; i++) {
    cout << "-";
  }
  cout << "EXPENCES PHONE BILL";

  for (int i = 0; i <= 17; i++) {
    cout << "-";
  }
  // This one is I/O for the phone bill
  cout << "\n\nNumber of minutes spent over the year: ";
  cin >> phoneOverYear;
  cout << "Number of minutes in a block of time: ";
  cin >> minutesBlock;
  cout << "Cost for each block: ";
  cin >> costOfBlock;
  int numBlocks = phoneOverYear / minutesBlock;
  double phoneBill = numBlocks * costOfBlock;
  cout << "Cost of the phone bill: $" << phoneBill << "\n\n";
  for (int i = 0; i <= 12; i++) {
    cout << "-";
  }
  cout << "EXPENCES GAS COST";

  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }
  // This one is I/O for the fuel efficiency and cost of fuel for the year.
  cout << "\n\nBrand and type of the vehicle: ";
  cin >> i >> ii;
  cout << "Distance travelled over the year: ";
  cin >> distance;
  cout << "Fuel Efficiency (km/L): ";
  cin >> fuelEfficiency;
  cout << "Average gas price ($/L): ";
  cin >> averageGasPrice;
  double fuelCost = averageGasPrice * distance;
  fuelCost /= fuelEfficiency;
  cout << "Total cost of gasoline for the year: $" << fuelCost << "\n\n";
  for (int i = 0; i <= 12; i++) {
    cout << "-";
  }
  cout << "EXPENCES MOTGAGE";

  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }
  // This one is I/O for the mortgage yearly payment calculaton.
  cout << "\n\nAmount of bi-weekly mortgage payment: ";
  cin >> biWeekMortgage;
  double totalMortgage = biWeekMortgage * 26;
  cout << "Total mortgage payment for the year: $" << totalMortgage << "\n\n";
  for (int i = 0; i <= 12; i++) {
    cout << "-";
  }
  cout << "OTHER EXPENCES";

  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }

  double restOfMoney = netIncome - totalMortgage - fuelCost - phoneBill -
                       electricityBill - investAmmount;
  double groceries = restOfMoney * 0.6;
  double entertainment = restOfMoney * 0.25;
  double cashSaving = restOfMoney * 0.15;
  cout << "\n\nAmount used on groceries: " << setw(8) << "$" << groceries;
  cout << "\nAmount used on entertainment: " << setw(4) << "$" << entertainment;
  cout << "\nAmount of cash saving: " << setw(11) << "$" << cashSaving
       << "\n\n";

  for (int i = 0; i <= 14; i++) {
    cout << "-";
  }
  cout << "SUMMARY";

  for (int i = 0; i <= 21; i++) {
    cout << "-";
  }
  cout << "\n\nTotal household gross income: $" << grossIncome;
  cout << "\nTotal income tax paid: $" << totalTax;
  double expenses = groceries + entertainment + totalMortgage + fuelCost +
                    phoneBill + electricityBill;
  cout << "\nTotal expenses: $" << expenses;
  double reserve = grossIncome - expenses - totalTax;
  cout << "\nTotal reserve: $" << reserve << "\n";
  return 0;
}