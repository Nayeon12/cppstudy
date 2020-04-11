#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream fout;
	fout.open("testtxt.txt");

	string s = "start";
	fout << s << endl;
	fout << "this txt is test" << endl;
	fout << "hihi I'm nayeon" << endl;
	fout.close();

	ifstream fin;
	fin.open("testtxt.txt");
	/*
	while (getline(fin, s)) { // 한줄씩 읽기, EOF읽으면 알아서 false
		cout << s << endl;
	}
	*/
	
	while (true) { // 한 단어씩
		fin >> s;
		if (!fin)
			break;
		cout << s << endl;
	}
	fin.close();

	return 0;
}