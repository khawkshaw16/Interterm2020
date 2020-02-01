#include<iostream>

using namespace std;

const double tax = .09;

double addTax(double item,double tax) {
    double salesTax;
    salesTax = (item * tax);
    return salesTax;
}

int main() {
    double item;
    double tax = .09;
    double salesTax;
    cout << "Enter the price of the item purchased:" << endl;
    cin >> item;
    salesTax = CalcSalesTax(item, tax);
    cout << "The item purchased was: " << "$" << item << endl;
    cout << "Total amount of purchase is: " << "$" << (salesTax + item) << endl;

return 0;

}
