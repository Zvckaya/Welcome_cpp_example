
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
    srand(time(NULL));
    int my;
    int com = rand() % 3+1;
    cout << "가위 바위 보 중에 하나를 선택하시오(1,2,3): ";
    cin >> my;
    cout << "컴퓨터: "<<com<<endl;
    if (my == com) {
        cout << "비겼습니다!";
    }
    else if (my == 1) {
        if (com == 2)
            cout << "컴퓨터 승!";
        else
            cout << "사용자 승!";
    }
    else if (my == 2) {
        if (com == 1)
            cout << "사용자 승!";
        else
            cout << "컴퓨터 승!";
    }
    else {
        if (com == 1)
            cout << "컴퓨터 승";
        else
            cout << "사용자 승";
    }
        
}

