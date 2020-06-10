#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

template<class Iter>
void print(Iter iter_begin, Iter iter_end) {
	for (Iter iter = iter_begin; iter != iter_end; iter++)
		cout << *iter << '\t';
	cout << endl;
}

template<class Iter, class T>
int count_value(Iter iter_begin, Iter iter_end, T key_value) {
	int count = 0;
	for (Iter iter = iter_begin; iter != iter_end; iter++)
		if (*iter == key_value)
			count++;
	return count;
}

int main() {
	vector<int> v{ 1,2,3,2,2,2 };
	list<double> l{ 1.1, 2.2, 3.3, 1.1, 1.1 };
	string sAry[] = { "Apple", "Bear", "Carrot", "Apple" };

	cout << count_value(begin(v), end(v), 2) << endl;
	cout << count_value(begin(l), end(l), 1.1) << endl;
	cout << count_value(begin(sAry), end(sAry), "Apple") << endl;

	struct Point {
		int x;
		int y;
		bool operator == (const Point& pt) {
			return (x == pt.x) && (y == pt.y);
		}
	};

	Point pts[] = { {1,2}, {3,4}, {5,6}, {1,2}, {1,2} };
	cout << count_value(begin(pts), end(pts), Point{ 1,2 });

	return 0;
}