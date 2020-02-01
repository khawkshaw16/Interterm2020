#include <iostream>
using namespace std;


void swap(int &x, int &y);

int main () {
   // Declaring varibles
   int a = 0;
   int b = 10;
   cout << "Value of a :" << a << endl;
   cout << "Value of b :" << b << endl;
   // Swapping the variable to 0
   swap(a, b);
   cout << "After swap, value of a :" << a << endl;
   swap(a, b);
   cout << "After swap, value of b :" << b << endl;

   return 0;
   
}
