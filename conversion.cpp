#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void inputData(float &feet, float &inches);
void calcFeetInches(float feet, float inches, float &meters, float &cm);
void output(float meters, float cm, float feet, float inches);

int main() {
	 float feet;
   float inches;
   float meters;
   float cm;
   char answer;
   do {
      cout << "Feet & inches --> meters & centimeters" << endl;
      inputData(feet, inches);
      calcFeetInches(feet, inches ,meters, cm);
      output(meters, cm, feet, inches);
      cout << "To repeat calculation enter 'Y': " << endl;
      cin >> answer;
    }

    while (answer == 'y' || answer== 'Y');

return 0;
}
void inputData(float &feet, float &inches) {
  cout << "Feet: ";
  cin >> feet;
  cout << "Inches: ";
  cin >> inches;
}
void calcFeetInches(float feet, float inches, float &meters, float &cm) {
  meters = (feet* 0.3048) + (inches*0.0254);
  cm = (feet * 30.48 + inches * 2.54);
}
