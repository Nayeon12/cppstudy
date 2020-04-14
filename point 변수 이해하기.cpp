#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int* px = &x;

	cout << &x << ", " << x << endl;
	cout << px << endl;

	return 0;
}