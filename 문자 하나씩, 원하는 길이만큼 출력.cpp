#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ofstream fout;
	fout.open("test.txt");

	fout << "Hello this is test code. " << endl;
	fout << "I'm reviewing now. haha. " << endl;
	fout << "Please recommend to write here. " << endl;
	fout << "Thank you for reading and welcome to my site. " << endl;

	fout.close();

	ofstream fout1;
	fout.open("output.txt");
	
	ifstream fin;
	fin.open("test.txt");

	char ch;
	int length;
	cout << "Length = ";
	cin >> length;

	while (1) {
		int count = 1;
		if (fin.eof())
			break;
		while (count <= length) {
			fin.get(ch);
			if (ch != '\n') {
				fout << ch;
				count++;
			}
			if (fin.eof()) 
				break;
		}
		fout << endl;
	}

	fin.close();
	fout1.close();

	return 0;
}