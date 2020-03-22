#include <iostream>
using namespace std;

int main() {
	string name, number, major;
	cout << "이름 : " << endl;
	cin >> name;
	cout << "학번: " << endl;
	cin >> number;
	cout << "학과: " << endl;
	cin >> major;

	cout << "제 이름은 " << name << "이고, 학번은 " << number << "입니다." << endl;
	cout << "그리고 저는 " << major << "입니다." << endl;

}