#include <iostream>
using namespace std;


int maximun(int x, int y, int z) {
    if (x > y&&x>z) {
        return x;
    }
    else if (y > x && y > z) {
        return y;
    }
    else {
        return z;
    }
}


int main()
{
    int a, b, c;
    cout << "3개의 정수를 입력하시오: ";
    cin >> a >> b >> c;
    int result = maximun(a, b, c);
    cout << "가장 큰 정수는 " << result;
}

