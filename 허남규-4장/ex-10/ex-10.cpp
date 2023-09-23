#include <iostream>
using namespace std;

class BankAccout {
	string number;
	int balance;
public:
	void init(string number, int balance) {
		this->number = number;
		this->balance = balance;
		cout << "현재 잔액" << this->balance<<endl << endl;
	}

	void deposit(int amount) {
		balance += amount;
		cout << "after deposit(" << amount << ")" ;
		cout << "현재 잔액: " << balance << endl;
	}

	void withdraw(int amount) {
		balance -= amount;
		cout << "after withdraw(" << amount << ")" ;
		cout << "현재 잔액: " << balance << endl;
	}
};

int main()
{
	BankAccout account;
	
	account.init("352-1071-1058-03", 1000000);
	account.deposit(1000000);
	account.withdraw(1000000);
	
}
