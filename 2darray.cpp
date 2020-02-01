#include<iostream>

using namespace std;

int main() {

  int myArray[4][5] = {{2,4,6,8,10},{1,3,5,7,8},{1,2,4,5,7},{3,6,8,9,10}};

  for(int row = 0; row < 4; ++row) {

    for(int column = 0; column < 5; ++column) {
      cout << myArray[row][column] << " ";
    }
    cout << endl;
  }

  cout << myArray[][];
}
