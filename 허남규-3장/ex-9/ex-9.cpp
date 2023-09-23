#include <iostream>
using namespace std;


int main()
{
    srand((unsigned int)time(NULL));

    int a, b;
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    int result = a + b;
    printf("사용자의 주사위: %d+%d=%d \n", a, b,result);
   
    if (result == 7 || result == 11) {
        cout << "사용자가 이겼습니다";
    }
    else if (result == 2 || result == 3 || result == 12) {
        cout << "사용자가 졌습니다";
    }
    else {
        cout << "아무일도 없었다..";
    }
}

