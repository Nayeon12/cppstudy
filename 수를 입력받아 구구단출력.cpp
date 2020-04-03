#include <iostream>
using namespace std;

int main() {
	int dan;
	while (true) {
		cout << "단 수를 입력하세요. : ";
		cin >> dan;

		if (dan == -1) {
			cout << "종료합니다." << endl;
			break;
		}
		else if (dan >= 1 && dan <= 9) {
			for (int i = 9; i >= 1; i--)
				cout << dan << "*" << i << " = " << dan * i << endl;
			cout << endl;
			continue;
		}
		else
			cout << "1부터 9까지의 정수를 입력해주세요." << endl;
		cout << endl;
		continue;
	}
	return 0;
}