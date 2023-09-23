#include <iostream>
using namespace std;

class Employee {
    string name;
    int age;
    int salary;
public:
    void setEmployee(string name,int age,int salary) {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void print() {
        cout << "Employee1:" << endl;
        cout << name << endl;
        cout << age << endl;
        cout << salary << endl;

    }
};

int main()
{
    Employee obj;
    obj.setEmployee("김철수", 38, 2000000);
    obj.print();
}
