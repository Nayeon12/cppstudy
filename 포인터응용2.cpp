#include <iostream>
using namespace std;

void avg(int* a, int* b, int* c) {
	string s;
	cout << "당신의 성별을 입력해주세요 : ";
	cin >> s;
	cout << endl;
	cout << "아버지의 키를 입력해주세요 : ";
	cin >> *a;
	cout << "어머니의 키를 입력해주세요 : ";
	cin >> *b;
	cout << endl;

	if (s == "여자")
		*c = (*a + *b - 13) / 2;
	else
		*c = (*a + *b + 13) / 2;
}

int main() {
	int x, y, z;
	cout << "부모님의 키를 기반으로 계산한 자식의 키" << endl;
	avg(&x, &y, &z);
	cout << "자식의 키는 " << z << "cm 입니다. (오차 범위 +-5cm)" << endl;

	return 0;
}