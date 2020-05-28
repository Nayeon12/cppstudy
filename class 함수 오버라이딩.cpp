#include <iostream>
#include <vector>
using namespace std;

class Base {
public:
	virtual void print() { cout << "Base::print()" << endl; }
};

class Derived : public Base {
public:
	void print() override { cout << "Derived::print()" << endl; }
};

int main() {
	Base base;
	Derived derived;

	base.print();
	derived.print();

	return 0;
}