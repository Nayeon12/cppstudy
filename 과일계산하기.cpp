#include <iostream>
using namespace std;

int main() {
	string x, y, z;
	int a, b, c, n1, n2, n3;
	
	cout << "� ������ �����ϼ̳���?: ";
	cin >> x >> y >> z;
	cout << x << "�� ���ΰ���?: ";
	cin >> a;
	cout << y << "�� ���ΰ���?: ";
	cin >> b;
	cout << z << "�� ���ΰ���?: ";
	cin >> c;

	cout << "���� ��� �����Ͻ� �ǰ���? �Է����ּ���!" << endl;
	cout << x << " : ";
	cin >> n1;
	cout << y << " : ";
	cin >> n2;
	cout << z << " : ";
	cin >> n3;

	cout << " -- ���Ÿ�� -- " << endl;
	cout << x << " : " << n1 << "��" << endl;
	cout << y << " : " << n2 << "��" << endl;
	cout << z << " : " << n3 << "��" << endl;
	cout << "�� " << a * n1 + b * n2 + c * n3 << "�� �̿���!" << endl;
}