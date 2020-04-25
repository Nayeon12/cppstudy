#include <iostream>
#include <vector>
#include <iomanip>
#include <random>
using namespace std;

vector<vector<int>> initialization(int row, int col) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(-9, 9);

	vector<vector<int>> mat(row, vector<int>(col));

	for (int i = 0; i < row; i++) {
		for (int k = 0; k < col; k++)
			mat[i][k] = dis(gen);
	}

	return mat;
}

void print(vector<vector<int>>& mat) {
	for (int row = 0; row < mat.size(); row++) {
		for (int col = 0; col < mat[0].size(); col++)
			cout << setw(4) << mat[row][col];
		cout << endl;
	}
}

void mult(vector<vector<int>>& mat1, vector<vector<int>>& mat2, vector<vector<int>>& mat) {
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat2[0].size(); j++) {
			for (int k = 0; k < mat1[0].size(); k++) {
				mat[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
}

int main() {
	int rowA, colA;
	cout << "A의 행, 열의 크기를 입력해주세요 : ";
	cin >> rowA >> colA;
	int rowB, colB;
	cout << "B의 행, 열의 크기를 입력해주세요 : ";
	cin >> rowB >> colB;

	vector<vector<int>> matA(rowA, vector<int>(colA));
	vector<vector<int>> matB(rowB, vector<int>(colB));
	vector<vector<int>> mat(rowA, vector<int>(colB));

	matA = initialization(rowA, colA);
	matB = initialization(rowB, colB);

	while (true) {
	if (colA == rowB) {
		if (rowA == 0 or colA == 0 or rowB == 0 or colB == 0) {
			cout << endl;
			cout << "행렬을 생성할 수 없습니다.";
			break;
		}
		cout << "A행렬 : " << endl;
		print(matA);
		cout << endl;

		cout << "B행렬 : " << endl;
		print(matB);
		cout << endl;

		cout << "AB 곱행렬 : " << endl;
		mult(matA, matB, mat);
		print(mat);

		break;
	}
	else if (colA != rowB){
		cout << "A행렬 : " << endl;
		print(matA);
		cout << endl;

		cout << "B행렬 : " << endl;
		print(matB);
		cout << endl;

		cout << "두 행렬을 곱할 수 없습니다.";
		break;
	}

	else if (rowA == 0 or colA == 0 or rowB == 0 or colB == 0) {
		cout << endl;
		cout << "행렬을 생성할 수 없습니다.";
		break;
		}
	}

	return 0;
}