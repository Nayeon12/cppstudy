#include <iostream>
using namespace std;

void print_D08(int year = 1900, int month = 1, int day = 1) {
	cout << "��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�." << endl;

}

int main() {
	int year, month, day;
	print_D08();
	cout << "year �Է� : ";
	cin >> year;
	cout << "month �Է� :";
	cin >> month;
	cout << "day �Է� : ";
	cin >> day;
	print_D08(year, month, day);
	
	return 0;
}