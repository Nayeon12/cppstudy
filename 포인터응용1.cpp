#include <iostream>
using namespace std;

void welcome(string *a) {
	cout << "무엇을 공부하고 있나요? : ";
	cin >> *a;
}

int main() {
	string x;
	cout << "Welcome to my site :)" << endl;
	welcome(&x);
	cout << "아하 ! 당신은 " << x << "을(를) 공부하고 있군요" << endl;

	return 0;
}