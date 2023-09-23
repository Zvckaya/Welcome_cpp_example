#include <iostream>
using namespace std;

class CellPhone {
	bool on;
	string number;
	string model;
	string color;

public:
	void setPhone(string number,string model,string color) {
		this->number = number;
		this->model = model;
		this->color = color;
	}

	void setOn() {
		this->on = true;
	}

	void print() {
		cout << "CellPhone1:" << endl;
		cout << number << endl;
		cout << model << endl;
		cout << color << endl;
		cout << (on ? "true" : "false");
	}
};

int main()
{
	CellPhone obj;
	obj.setPhone("010-1234-5678","Galaxy","Black");
	obj.setOn();
	obj.print();

}

