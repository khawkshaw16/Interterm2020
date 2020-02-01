#include<iostream>

using namespace std;

int main() {
  double metricTon = 35273.96;
  double cerealBox;
  double weight;
  double numOfBoxes;

  //Get cereal box weight (ounces) from user
  cout << "What is the weight of the cereal box in ounces?" << endl;
  cin >> cerealBox;

  //Calculating the weight in metric tons
  weight = cerealBox/metricTon;
  cout << "The weight of the cereal box in metric tons is: " << numOfBoxes << endl;

  return 0;
  
}
