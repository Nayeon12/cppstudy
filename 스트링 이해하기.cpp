#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "Nayeon";
	cout << s[2] << ", " << s.at(2) << endl;
	cout << s.substr(2, 3) << endl;
	cout << s.size() << s.length() << endl;
	cout << (s == "Nayeon") << endl;
	s.clear();
	cout << s.size() << endl;

	return 0;
}