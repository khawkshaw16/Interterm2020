#include<iostream>

using namespace std;

int main() {
  int hoursWorked;
  double payRate; //$16
  double payRateOT; //$24
  double sst; //6%
  double fit; //14%
  double sit; //5%
  double medical; //$10
  double grossPay;
  double netPay;
  int hourDifference;

  payRate = 16.00;
  payRateOT = 24.00;

  cout << "How many hours did the employee work?" << endl;
  cin >> hoursWorked;

  if (hoursWorked > 40) {
    hourDifference = hoursWorked - 40;
    grossPay = ((payRate * 40) + (payRateOT * hourDifference));
    cout << "The employee's gross pay is: " << grossPay << endl;
    sst = .06 * grossPay;
    fit = .14 * grossPay;
    sit = .05 * grossPay;
    medical = 10 * hoursWorked;
    netPay = ((((grossPay - sst) - fit) - sit) - medical);
    cout << "The employee's Social Security tax is: " << sst << endl;
    cout << "The employee's Federal income tax is: " << fit << endl;
    cout << "The employee's State income tax is: " << sit << endl;
    cout << "The employee's net take-home pay is: " << netPay << endl;
  }
  else {
    grossPay = (payRate * hoursWorked);
    cout << "The employee's gross pay is: " << grossPay << endl;
    sst = .06 * grossPay;
    fit = .14 * grossPay;
    sit = .05 * grossPay;
    medical = 10 * hoursWorked;
    netPay = ((((grossPay - sst) - fit) - sit) - medical);
    cout << "The employee's Social Security tax is: " << sst << endl;
    cout << "The employee's Federal income tax is: " << fit << endl;
    cout << "The employee's State income tax is: " << sit << endl;
    cout << "The employee's net take-home pay is: " << netPay << endl;


  }

}
