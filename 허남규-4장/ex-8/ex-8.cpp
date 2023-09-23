#include <iostream>
using namespace std;
class Complex {
public:
    double r;
    double i;

    void setComplex(double r,double i){
        this->r = r;
        this->i = i;
    }

    void print() {
        if (i >= 0) {
            cout << r << " +" << i << "i"<<endl;
        }
        else {
            cout << r << " " << i << "i"<<endl;
        }
    }
};

int main()
{
    Complex com1;
    Complex com2;
    com1.setComplex(5, 3);
    com2.setComplex(3, -4);
    com1.print();
    com2.print();
}
