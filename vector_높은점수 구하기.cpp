#include <iostream>
#include <vector>
using namespace std;

int inputGrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) { // 입력한 점수가 0보다 작거나 100보다 크면 x
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade; // 그렇지 않아야만 입력한 점수 인정
}

int* topGrade(const vector<int>& grade) { // 위 함수에서 정해진 점수를 벡터에 넣음
	int a = grade[0], b = grade[1], c = grade[2]; // 벡터의 인덱스를 각각 정해줌
	if (a > b&& a > c) {
		return&a; // 최고 숫자 판별하기
	}
	else if (c > b&& a < c) {
		return&c;
	}
	else
		return&b;
}

int main() {
	vector <int> grades; // 새로운 벡터
	float _grade = 0; 
	for (int i = 0; i < 3; i++) { // 세번반복함
		cout << "Input " << i << "-th grade(0-100) : ";
		int grade = inputGrade(_grade); //점수 입력하는 함수랑 연결
		grades.push_back(grade); // grades라는 새로운 벡터에 함수 연결되도록 함. (입력한 점수 저장)
	}

	int top = *topGrade(grades); // 출력해줄 높은 점수를 topGrade를 불러와 주소값으로 연결, 정수 지정

	cout << "TopGrade : " << top; // 불러옴

	return 0;
}