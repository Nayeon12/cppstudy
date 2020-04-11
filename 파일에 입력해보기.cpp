#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	char alp;
	ofstream fout;
	fout.open("alphabet.txt");
	while (true) {
		cin >> alp;
		if (alp == 'q')
			break;
		fout.put(alp);
	}
	fout.close();

	ifstream fin("alphabet.txt");
	cout << endl << endl;
	while (true) {
		fin.get(alp);
		if (!fin)
			break;
		cout << alp << endl;
	}
	fin.close();

	return 0;
}