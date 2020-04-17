#include <iostream>
using namespace std;

void get_data(int& x, int& y);
void swap_call_by_value(int a, int b);
void swap_call_by_reference(int& a, int& b);

int main() {
	int x, y;
	get_data(x, y);

	cout << "swap_call_by_value 함수 사용 전" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_value(x, y);
	cout << "swap_call_by_value 함수 사용 후" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	cout << endl;

	cout << "swap_call_by_reference 함수 사용 전" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_reference(x, y);
	cout << "swap_call_by_reference 함수 사용 후" << endl;
	cout << "x = " << x << ", y = " << y << endl;

	return 0;
}


void get_data(int& x, int& y) {
	cout << " x 입력 : ";
	cin >> x;
	cout << " y 입력 : ";
	cin >> y;
}

void swap_call_by_value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap_call_by_reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
