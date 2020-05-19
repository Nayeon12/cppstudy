#include <iostream>
using namespace std;

class Point {
private:
	int x;
	int y;
	static int numCreateObj;
	int* ary;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {
		numCreateObj++;
		ary = new int[10];
	}
	int getX() const { return x; }
	int getY() const { return y; }
	void setXY(int _x, int _y) { x = _x; y = _y; }
	Point operator+(const Point& pt) {
		Point result(this->x + pt.x, this->y + pt.y);
		return result;
	}

	~Point() {
		cout << "destructed" << endl;
		delete[] ary;
	}
	Point operator= (const Point& pt) {
		this->x = pt.x;
		this->y = pt.y;
		return (*this);
	}
	static int getNumCreateObj() { return numCreateObj; }

	friend ostream& operator<<(ostream& cout, const Point& pt);
};

int Point::numCreateObj = 0;

ostream& operator<<(ostream& cout, const Point& pt) {
	cout << pt.x << ", " << pt.y;
	return cout;
}

int main() {
	Point pt1(1, 2), pt2(10, 20);
	Point pt3 = pt1 + pt2; // == pt1.+(pt2)
	cout << pt3 << endl; //<<(cout, pt3)
	//1) (cout << pt3)		<<endl;
	//2) cout << endl;
	cout << pt3.getNumCreateObj() << endl;
	cout << endl;

	int size = 5;
	Point* ptAry = new Point[size];

	for (int i = 0; i < size; i++) {
		cout << ptAry[i] << endl;
	}
	delete[] ptAry;
	cout << pt1.getNumCreateObj() << endl;

	return 0;
}