#include <iostream>
using namespace std;

int main() {
	cout << "Please enter the month and day as numbers : ";
	int month, day;
	cin >> month >> day;

	if (month == 1) 
		cout << "January"; 
	else if (month == 2) 
		cout << "February"; 
	else if (month == 3) 
		cout << "March"; 
	else if (month == 4) 
		cout << "April"; 
	else if (month == 5) 
		cout << "May"; 
	else if (month == 6) 
		cout << "June"; 
	else if (month == 7) 
		cout << "July"; 
	else if (month == 8) 
		cout << "August"; 
	else if (month == 9) 
		cout << "September"; 
	else if (month == 10) 
		cout << "October"; 
	else if (month == 11) 
		cout << "November";
	else 
		cout << "December";

	cout << " " << day << " or ";

	if (month == 1)
		cout << "�ؿ����� ";
	else if (month == 2)
		cout << "�û��� ";
	else if (month == 3)
		cout << "�������� ";
	else if (month == 4)
		cout << "�ٻ��� ";
	else if (month == 5)
		cout << "Ǫ���� ";
	else if (month == 6)
		cout << "������ ";
	else if (month == 7)
		cout << "�߿������ ";
	else if (month == 8)
		cout << "Ÿ������ ";
	else if (month == 9)
		cout << "���Ŵ� ";
	else if (month == 10)
		cout << "�ϴÿ��� ";
	else if (month == 11)
		cout << "��ƴ�� ";
	else if (month == 12)
		cout << "�ŵ�� ";

	cout << day << "��";

	return 0;
}