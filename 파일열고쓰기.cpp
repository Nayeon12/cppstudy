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
	while (getline(fin, s)) { // ���پ� �б�, EOF������ �˾Ƽ� false
		cout << s << endl;
	}
	*/
	
	while (true) { // �� �ܾ
		fin >> s;
		if (!fin)
			break;
		cout << s << endl;
	}
	fin.close();

	return 0;
}