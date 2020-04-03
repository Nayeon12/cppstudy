#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "number : ";
	cin >> n;
	for (int i = 0; i <= n; i = i + 2)
		sum += i;

	cout << "Sum of 1 to " << n << " = " << sum << endl;

	return 0;
}