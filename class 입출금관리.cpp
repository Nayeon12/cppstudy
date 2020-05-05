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
		cout << "[ ������ �� �� �� Ȳ]" << endl;
		cout << "���� : " << name << '\t' << "�ܾ� : " << balance << endl;
	}
};

int main() {
	Account ac1("�ڳ���", "1234", 5000);
	Account ac2;
	ac1.print();

	while (true) {
		string pw;
		cout << endl;
		cout << "��й�ȣ�� �Է��ϼ��� : ";
		cin >> pw;

		if (pw == "1234") {
			int user;
			cout << "������ ���Ͻø� 1��, ����� ���Ͻø� 2���� ��������. (����� 0��)" << endl;
			cin >> user;

			if (user == 1) {
				int depo;
				cout << endl;
				cout << "[ �� �� ]" << endl;
				cout << "������ �ݾ��� �Է��ϼ��� : ";
				cin >> depo;
				ac1.deposit(depo);
				ac1.print();
				continue;
			}

			else if (user == 2) {
				int wdrw;
				cout << endl;
				cout << "[ �� �� ]" << endl;
				ac1.print();
				cout << "����� �ݾ��� �Է��ϼ��� : ";
				cin >> wdrw;
				if (!ac1.withdraw(wdrw))
					cout << "�ܾ��� �����մϴ�." << endl;
				ac1.print();
			}

			else {
				cout << "����� ���񽺸� �����մϴ�." << endl;
				break;
			}
		}
		else
			continue;
	}
	return 0;
}