#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
	}
	int getX() { return x; }
	int getY() { return y; }
	void setXY(int _x, int _y) { x = _x; y = _y; }

	Point operator+(const Point& pt) {
		Point result(x + pt.x, y + pt.y);
		return result;
	}

	Point operator=(const Point& pt) {
		this->x = pt.x;
		this->y = pt.y;
		return (*this);
	}
	friend void print(const Point& pt);
	friend ostream & operator<<(ostream & cout, const Point & pt);
};

void print(const Point& pt) {
	cout << pt.x << ", " << pt.y << endl; // friend
}

void print(int a) {
	cout << a << endl;
}

ostream& operator<<(ostream& cout, const Point& pt) {
	cout << pt.x << ", " << pt.y << endl;
	return cout;
}

int main() {
	Point pt1(1, 2);
	print(pt1);
	cout << endl;

	int a = 2 + 3;
	Point pt2(10, 20), pt3(30, 40);
	Point pt4 = pt2 + pt3;
	cout << pt2 << endl;
	cout << pt3 << endl;
	cout << pt4 << endl;
	cout << endl;

	return 0;
}