#include <iostream>
using namespace std;

int main()
{
    int numYears;
    int i;
    double cost;
    double rate;
    cout.precision(3);

    cout << "Enter the number of years in which the item will be purchased: ";
    cin >> numYears;
    cout << "Enter the cost of the item: $";
    cin >> cost;
    cout << "Enter the inflation rate as a percentage: ";
    cin >> rate;
    rate = rate / 100;

    for ( i=0; i < numYears; ++i)
    cost = cost + cost*rate;

    cout << "The cost of the item after " << numYears << " years will be $ " << cost << ".";

    return 0;
}
