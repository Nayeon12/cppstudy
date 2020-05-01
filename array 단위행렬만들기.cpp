#include <iostream>
using namespace std;

int** buildTable(int n) {
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
		arr[i][i] = 0;
	}
	return arr;
}

void make_identity_matrix(int** table, int n) {
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (row == col)
				table[row][col] = 1;
			else
				table[row][col] = 0;
		}
	}
}

void printTable(int** table, int n) {
	cout << "Output : " << endl;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++)
			cout << table[row][col] << '\t';
		cout << endl;
	}
}

int main() {
	int n = 0;
	cout << "N을 입력하시오 : ";
	cin >> n;
	if (n < 1) {
		cout << "\n행렬을 생성할 수 없습니다.\n" << endl;
		exit(EXIT_FAILURE);
	}

	int** table = buildTable(n);
	make_identity_matrix(table, n);
	printTable(table, n);

	for (int i = 0; i < n; i++)
		delete[] table[i];
	delete[] table;

	return 0;
}