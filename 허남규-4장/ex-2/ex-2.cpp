#include <iostream>
using namespace std;

class Computer {
	string name;
	int RAM;
	float cpu_speed;

public:
	void setComputer(string name, int RAM, float cpu_speed) {
		this->name = name;
		this->RAM = RAM;
		this->cpu_speed = cpu_speed;
	}

	void print() {
		cout << "이름: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU속도: " << cpu_speed ;

	}

};

int main()
{
	Computer obj;
	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.print();

}
