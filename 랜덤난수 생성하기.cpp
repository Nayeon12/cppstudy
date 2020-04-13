#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 100);

	for (int row = 1; row <= 10; row++) {
		for (int col = 1; col <= 10; col++) {
			cout << setw(4) << dis(gen);
		}
		cout << endl;
	}
	return 0;
}