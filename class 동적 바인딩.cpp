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
	Base* pBase = &derived;
	pBase->print();
	pBase = &base;
	pBase->print();

	cout << endl;
	
	vector<Base*> vec{ new Base, new Derived, new Base };
	pBase = new Derived;
	vec.push_back(pBase);

	for (auto& elem : vec)
		elem->print();

	for (auto& elem : vec)
		delete elem;

	return 0;
}