#include <iostream>
using namespace std;

int main() {
	int dan;
	while (true) {
		cout << "�� ���� �Է��ϼ���. : ";
		cin >> dan;

		if (dan == -1) {
			cout << "�����մϴ�." << endl;
			break;
		}
		else if (dan >= 1 && dan <= 9) {
			for (int i = 9; i >= 1; i--)
				cout << dan << "*" << i << " = " << dan * i << endl;
			cout << endl;
			continue;
		}
		else
			cout << "1���� 9������ ������ �Է����ּ���." << endl;
		cout << endl;
		continue;
	}
	return 0;
}