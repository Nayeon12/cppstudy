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
	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : ";
	cin >> rowA >> colA;
	int rowB, colB;
	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : ";
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
			cout << "����� ������ �� �����ϴ�.";
			break;
		}
		cout << "A��� : " << endl;
		print(matA);
		cout << endl;

		cout << "B��� : " << endl;
		print(matB);
		cout << endl;

		cout << "AB ����� : " << endl;
		mult(matA, matB, mat);
		print(mat);

		break;
	}
	else if (colA != rowB){
		cout << "A��� : " << endl;
		print(matA);
		cout << endl;

		cout << "B��� : " << endl;
		print(matB);
		cout << endl;

		cout << "�� ����� ���� �� �����ϴ�.";
		break;
	}

	else if (rowA == 0 or colA == 0 or rowB == 0 or colB == 0) {
		cout << endl;
		cout << "����� ������ �� �����ϴ�.";
		break;
		}
	}

	return 0;
}