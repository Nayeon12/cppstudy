#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void print(const vector<vector<int>>& mat) {
//	for (unsigned row = 0; row < mat.size(); row++) {
//		for (unsigned col = 0; col < mat[0].size(); col++) {
//			cout << setw(4) << mat[row][col];
//		}
//		cout << endl;
//	}

	for (const vector<int>& row : mat) {
		for (int col : row) {
			cout << setw(4) << col;
		}
		cout << endl;
	}
}

int main() {
	vector<vector<int>> mat{ {1,2,3},
							{4,5,6} };
	mat[0][0] = 1;  
	mat[0][1] = 2;  
	mat[0][2] = 3;  
	mat[1][0] = 4;  
	mat[1][1] = 5;  
	mat[1][2] = 6;

	print(mat);

	return 0;
}