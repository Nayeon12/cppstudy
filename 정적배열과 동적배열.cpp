#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int size = 3;
	int list[size] = { 10, 20, 30 };

	int length = 3;
	cin >> length;
	int* list2 = new int[length]; //동적배열 선언

	int* begin = list2;
	int* end = list2 + length;
	
	for (int* curr = begin; curr != end; curr++)
		cin >> *curr;

	for (int* curr = begin; curr != end; curr++)
		cout << *curr << '\t';
	cout << endl;

	delete[] list2; //할당해제

	return 0;
}