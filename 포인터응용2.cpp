#include <iostream>
using namespace std;

void avg(int* a, int* b, int* c) {
	string s;
	cout << "����� ������ �Է����ּ��� : ";
	cin >> s;
	cout << endl;
	cout << "�ƹ����� Ű�� �Է����ּ��� : ";
	cin >> *a;
	cout << "��Ӵ��� Ű�� �Է����ּ��� : ";
	cin >> *b;
	cout << endl;

	if (s == "����")
		*c = (*a + *b - 13) / 2;
	else
		*c = (*a + *b + 13) / 2;
}

int main() {
	int x, y, z;
	cout << "�θ���� Ű�� ������� ����� �ڽ��� Ű" << endl;
	avg(&x, &y, &z);
	cout << "�ڽ��� Ű�� " << z << "cm �Դϴ�. (���� ���� +-5cm)" << endl;

	return 0;
}