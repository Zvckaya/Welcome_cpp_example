#include <iostream>
using namespace std;

int main()
{
    int result = 0;
    int temp;
    do {
        cout << "정수를 입력하시오:";
        cin >> temp;
        result += temp;;


    } while (temp != 0);
    cout << "합계= " << result;

}

