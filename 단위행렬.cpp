#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int row = 1;
	int col = 1;
	while (row <= 10) {
		col = 1;
		while (col <= 10) {
			if (col == row)
				cout << setw(4) << "1";
			else
				cout << setw(4) << "0";

			col++;
		}
		row++;
		cout << endl;
	}
	return 0;
}