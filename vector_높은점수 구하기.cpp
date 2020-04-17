#include <iostream>
#include <vector>
using namespace std;

int inputGrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) { // �Է��� ������ 0���� �۰ų� 100���� ũ�� x
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade; // �׷��� �ʾƾ߸� �Է��� ���� ����
}

int* topGrade(const vector<int>& grade) { // �� �Լ����� ������ ������ ���Ϳ� ����
	int a = grade[0], b = grade[1], c = grade[2]; // ������ �ε����� ���� ������
	if (a > b&& a > c) {
		return&a; // �ְ� ���� �Ǻ��ϱ�
	}
	else if (c > b&& a < c) {
		return&c;
	}
	else
		return&b;
}

int main() {
	vector <int> grades; // ���ο� ����
	float _grade = 0; 
	for (int i = 0; i < 3; i++) { // �����ݺ���
		cout << "Input " << i << "-th grade(0-100) : ";
		int grade = inputGrade(_grade); //���� �Է��ϴ� �Լ��� ����
		grades.push_back(grade); // grades��� ���ο� ���Ϳ� �Լ� ����ǵ��� ��. (�Է��� ���� ����)
	}

	int top = *topGrade(grades); // ������� ���� ������ topGrade�� �ҷ��� �ּҰ����� ����, ���� ����

	cout << "TopGrade : " << top; // �ҷ���

	return 0;
}