#include <iostream>
#include <string>
using namespace std;

int main() {
	string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü����";
	string keyword;
	cout << "Ű���� : ";
	cin >> keyword;
	cout << endl;

	int firstcomma = 0;
	while (true) {
		int secondcomma = data.find(",", firstcomma + 1);
		if (firstcomma <= data.find(keyword) && (secondcomma > data.find(keyword))) {
			if (data.find(keyword, firstcomma) == 0)
				cout << data.substr(firstcomma, secondcomma - firstcomma) << "	";
			else
				cout << data.substr(firstcomma + 1, secondcomma - firstcomma - 1) << "	";

			if (secondcomma == -1)
				break;

			data = data.substr(secondcomma, string::npos);
		}
		else if (data.find(keyword) == string::npos)
			break;

		firstcomma = secondcomma;

	}

	return 0;
}