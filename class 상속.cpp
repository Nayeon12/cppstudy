#include <iostream>
#include <vector>
using namespace std;

class Base {
public:
	void print_base() { cout << "Base" << endl; }
};

class Derived : public Base {
public:
	void print_derived() {
		cout << "Derived" << endl;
		Base::print_base();
	}
};

int main() {
	Base base;
	Derived derived;
	base.print_base();
	derived.print_derived();
	derived.print_base();
	cout << endl;

	return 0;
}