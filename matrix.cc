// Michael Mansfield
// Description:
// This is a small C++ program that takes the decimal memory location
// of a piece of data of a defined generic size unit for a 2D array
// and calculates what address a given matrix coordinate would be in
// memory for row-major and column-major storage orders.

#include <iostream>

using namespace std;

int main() {

  cout << endl << endl;
  int start = 0, size = 0, xlimit = 0, ylimit = 0, xcoord = 0, ycoord = 0, check = 0;
  cout << "  Enter starting address: ";
  cin >> start;
  cout << "  Enter size of each item in memory: ";
  cin >> size;
  cout << "  For matrix X by Y, enter X: ";
  cin >> xlimit;
  cout << "  Enter Y: ";
  cin >> ylimit;
  cout << "  For coordinate (X, Y) to locate, enter X: ";
  cin >> xcoord;
  cout << "  Enter Y coordinate: ";
  cin >> ycoord;

  for(int x = 0; x < xlimit; x++) {
    for(int y = 0; y < ylimit; y++) {
      if(x == xcoord && y == ycoord) {
        cout << "  Row-Major address: " << start << endl;
		check++;
      }
      if(x == ycoord && y == xcoord) {
        cout << "  Column-Major address: " << start << endl;
		check++;
      }
	  if(check == 2) {
		cout << endl << endl;
	    return 0;
	  }
	  start += size;
    }
  }

}
