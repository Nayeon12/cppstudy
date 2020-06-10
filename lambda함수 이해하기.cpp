#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int sum(int x, int y) { return x + y; }
int mult(int x, int y) { return x * y; }
int evaluate(int(*func)(int, int), int x, int y) {
	return func(x, y);
}

int main() {
	cout << evaluate(&sum, 2, 3) << endl;
	cout << evaluate(&mult, 2, 3) << endl;

	cout << evaluate([](int x, int y)->int {return x + y; }, 20, 30) << endl;

	cout << evaluate([](int x, int y) {return x * y; }, 20, 30) << endl;
	
	[](int x, int y) {cout << x << ", " << y << endl; } (20, 30);

	auto f = [](int x, int y) {return x - y; };
	cout << f(1000, 2000) << endl;

	return 0;
}