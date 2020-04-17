#include <iostream>
using namespace std;

int main() {
	string x, y, z;
	int a, b, c, n1, n2, n3;
	
	cout << "어떤 과일을 구매하셨나요?: ";
	cin >> x >> y >> z;
	cout << x << "는 얼마인가요?: ";
	cin >> a;
	cout << y << "는 얼마인가요?: ";
	cin >> b;
	cout << z << "는 얼마인가요?: ";
	cin >> c;

	cout << "각각 몇개씩 구매하실 건가요? 입력해주세요!" << endl;
	cout << x << " : ";
	cin >> n1;
	cout << y << " : ";
	cin >> n2;
	cout << z << " : ";
	cin >> n3;

	cout << " -- 구매목록 -- " << endl;
	cout << x << " : " << n1 << "개" << endl;
	cout << y << " : " << n2 << "개" << endl;
	cout << z << " : " << n3 << "개" << endl;
	cout << "총 " << a * n1 + b * n2 + c * n3 << "원 이에요!" << endl;
}
