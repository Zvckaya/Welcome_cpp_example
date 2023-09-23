#include <iostream>
using namespace std;

class Person {
    string name;
    int age;

public:
    void setPerson(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << "이름: " << name << endl;
        cout << "나이: " << age;

    }
};

int main()
{
    Person obj;
    obj.setPerson("김철수", 21);
    obj.print();

}
