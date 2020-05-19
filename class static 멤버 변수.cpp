#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	static int numCreateObjects;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
		numCreateObjects++;
	}
	int getX() const { return this->x; }
	int getY() const { return this->y; }
	void setXY(int _x, int _y) { this->x = _x; this->y = _y; }

	static int getNumCreateObject() { return numCreateObjects; }
	friend void print(const Point& pt);
};

//static 멤버 변수 초기화
int Point::numCreateObjects = 0;

void print(const Point& pt) {
	cout << pt.x << ", " << pt.y << endl;
}

int main() {
	Point pt1(1, 2);
	print(pt1);
	cout << pt1.getNumCreateObject() << endl;
	cout << endl;

	Point pt2(10, 20), pt3(30, 40);
	print(pt2);
	print(pt3);

	cout << pt1.getNumCreateObject() << endl;

	return 0;
}