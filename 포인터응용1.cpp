#include <iostream>
using namespace std;

void welcome(string *a) {
	cout << "������ �����ϰ� �ֳ���? : ";
	cin >> *a;
}

int main() {
	string x;
	cout << "Welcome to my site :)" << endl;
	welcome(&x);
	cout << "���� ! ����� " << x << "��(��) �����ϰ� �ֱ���" << endl;

	return 0;
}