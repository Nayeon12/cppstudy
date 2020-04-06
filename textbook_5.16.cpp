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
		cout << "해오름달 ";
	else if (month == 2)
		cout << "시샘달 ";
	else if (month == 3)
		cout << "물오름달 ";
	else if (month == 4)
		cout << "잎새달 ";
	else if (month == 5)
		cout << "푸른달 ";
	else if (month == 6)
		cout << "누리달 ";
	else if (month == 7)
		cout << "견우직녀달 ";
	else if (month == 8)
		cout << "타오름달 ";
	else if (month == 9)
		cout << "열매달 ";
	else if (month == 10)
		cout << "하늘연달 ";
	else if (month == 11)
		cout << "미틈달 ";
	else if (month == 12)
		cout << "매듭달 ";

	cout << day << "일";

	return 0;
}