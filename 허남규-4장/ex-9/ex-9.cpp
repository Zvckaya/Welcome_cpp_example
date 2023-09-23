#include <iostream>
using namespace std;

class Triangle {
    int b, h;
public:

    void setTriangle(int b,int h) {
        this->b = b;
        this->h = h;
    }
     double area()
    {
        return (b * h) / 2.0;
    }
    void print() {
        printf("밑변이 %d이고 높이가 %d인 삼각형의 면적: %f", b, h, area());
    }
};


int main()
{
    Triangle tr;

    tr.setTriangle(3, 4);
    tr.print();
}

