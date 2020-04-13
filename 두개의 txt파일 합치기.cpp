#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	ofstream fout1;
	fout1.open("first.txt");

	fout1 << "Hi my name is Nayeon Park." << endl;
	fout1 << "Welcome to my github or blog." << endl;
	
	fout1.close();

	ofstream fout2;
	fout2.open("second.txt");
	
	fout2 << "I hope you keep looking at my posts." << endl;
	fout2 << "Thank you for reading!" << endl;

	fout2.close();

	ofstream fout;
	fout.open("welcome.txt");
	ifstream fin1;
	fin1.open("first.txt");

	string s;
	while (getline(fin1, s)) {
		fout << s << endl;
	}
	fout << endl;

	fin1.close();

	ifstream fin2;
	fin2.open("second.txt");

	string s1;
	while (getline(fin2, s1)) {
		fout << s1 << endl;
	}
	
	fin2.close();
	fout.close();
}