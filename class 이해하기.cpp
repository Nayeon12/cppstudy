#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void setXY(int _x, int _y) {
		x = _x;
		y = _y;
	}
	int getX() { return x; }
	int getY() { return y; }
	void print() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

int main() {
	Point pt1, pt2(10, 20);
	pt1.setXY(1, 2);
	cout << pt1.getX() << endl;
	cout << pt1.getY() << endl;

	pt1.print();
	pt2.print();

	return 0;
}