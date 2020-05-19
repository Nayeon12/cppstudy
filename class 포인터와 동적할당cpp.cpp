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

	Point operator+(const Point& pt) {
		Point result(this->x + pt.x, this->y + pt.y);
		return result;
	}

	Point operator = (const Point& pt) {
		this->x = pt.x;
		this->y = pt.y;
		return(*this);
	}
	static int getNumCreateObject() { return numCreateObjects; }
	friend void print(const Point& pt); 
	friend ostream& operator<<(ostream& cout, const Point& pt);
	friend class Spy; 
};

int Point::numCreateObjects = 0;

void print(const Point& pt) {
	cout << pt.x << ", " << pt.y << endl;
}
void print(int a) {
	cout << a << endl;
}

ostream& operator<<(ostream& cout, const Point& pt) {
	//	cout << pt.getX() << ", " << pt.getY();
	cout << pt.x << ", " << pt.y << endl;
	return cout;
}

class Spy {
public:
	void  hack_all_info(const Point& pt) {
		cout << "Hacked by Spy" << endl;
		cout << "x : " << pt.x << endl;
		cout << "y : " << pt.y << endl;
		cout << "numCreateObj : " << pt.numCreateObjects << endl;
		cout << endl;
	}
};

int main() {
	Point pt1(1, 2);
	print(pt1);
	cout << pt1.getNumCreateObject() << endl;
	cout << endl;

	Point* pPt = new Point(10, 20);
	cout << (*pPt).getX() << ", " << (*pPt).getY() << endl;
	cout << pPt->getX() << ", " << pPt->getY() << endl;
	cout << pt1.getNumCreateObject() << endl << endl;

	Spy spy;
	spy.hack_all_info(pt1);
	spy.hack_all_info(*pPt);

	return 0;
}