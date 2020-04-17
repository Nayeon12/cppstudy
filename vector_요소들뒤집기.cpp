#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void reverse(vector<int>& v) {
	int i = 1;
	int temp;
	for (int count = 0; count < v.size() / 2; count++) {
		temp = v[count];
		v[count] = v[v.size() - i];
		v[v.size() - i] = temp;
		i++;
	}
}

int main() {
	vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "기본 Vector 값 : " << endl;
	for (int& elem : vec)
		cout << setw(3) << elem;

	cout << endl;
	reverse(vec);
	cout << "함수 실행 후 Vector 값 : " << endl;
	for (int& elem : vec)
		cout << setw(3) << elem;

	return 0;
}