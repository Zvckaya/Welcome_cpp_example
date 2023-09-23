#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    bool win = true;
    for (int i = 0; i < 5; i++) {
        cout << "정수를 입력하시오:";
        cin >> arr[i];
    }
    for (int i : arr) {
        if (i == 5) {
            win = false;
        }
    }

    if (win == true) {
        cout << "인내심이 강합니다. 사용자승!";
    }
    else {
        cout << "5를 입력하였군요! 컴퓨터 승!";
    }
}

