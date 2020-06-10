#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <functional>
using namespace std;

int evaluate(function<int(int, int)>func, int x, int y) {
	return func(x, y);
}

int main() {
	int a = 10; int b = 20;
	cout << evaluate([a](int x, int y) {return a + x + y; }, 2, 3) << endl;

	return 0;
}