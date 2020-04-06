#include <iostream>
#include <iomanip>
using namespace std;

//1
int main() {
	int n;
	cout << "Enter height of tree : ";
	cin >> n;

	int height = 1;
	while (height <= n) {
		int count = 0;
		while (count < n - height) {
			cout << " ";
			count++;
		}
		count = 0;
		while (count < 2 * height - 1) {
			cout << "*";
			count++;
		}
		cout << endl;
		height++;
	}
	return 0; 
}



//2
int main() {
	int count;
	cout << "Enter height of tree : ";
	cin >> count;
	for (int i = 1; i <= count; i++) {
		cout << setw(count + 1 - i);
		for (int j = 1; j < i * 2; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}