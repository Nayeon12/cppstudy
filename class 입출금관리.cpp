#include <string>
#include <iostream>
using namespace std;

class Account {
	string name;
	string pw;
	double balance;

public:
	Account() {
		name = "";
		pw = "";
		balance = 0;
	}
	Account(string _name, string _pw, double _bal) {
		name = _name;
		pw = _pw;
		balance = _bal;
		if (balance < 0)
			balance = 0;
	}
	void deposit(double _amt) { balance += _amt; }
	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}
	void print() {
		cout << "[ 고객님의 잔 액 현 황]" << endl;
		cout << "성함 : " << name << '\t' << "잔액 : " << balance << endl;
	}
};

int main() {
	Account ac1("박나연", "1234", 5000);
	Account ac2;
	ac1.print();

	while (true) {
		string pw;
		cout << endl;
		cout << "비밀번호를 입력하세요 : ";
		cin >> pw;

		if (pw == "1234") {
			int user;
			cout << "예금을 원하시면 1번, 출금을 원하시면 2번을 누르세요. (종료는 0번)" << endl;
			cin >> user;

			if (user == 1) {
				int depo;
				cout << endl;
				cout << "[ 예 금 ]" << endl;
				cout << "예금할 금액을 입력하세요 : ";
				cin >> depo;
				ac1.deposit(depo);
				ac1.print();
				continue;
			}

			else if (user == 2) {
				int wdrw;
				cout << endl;
				cout << "[ 출 금 ]" << endl;
				ac1.print();
				cout << "출금할 금액을 입력하세요 : ";
				cin >> wdrw;
				if (!ac1.withdraw(wdrw))
					cout << "잔액이 부족합니다." << endl;
				ac1.print();
			}

			else {
				cout << "입출금 서비스를 종료합니다." << endl;
				break;
			}
		}
		else
			continue;
	}
	return 0;
}