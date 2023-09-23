#include <iostream>
using namespace std;

void printNum(string i) {
    for (char j : i) {
        if (j == '(' || j == ')')
            continue;
        else {
            cout << j;
        }
       
    }
    cout << endl;
}

int main()
{
    string num;
    cout << "전화번호를 입력하시오: ";

    cin >> num;
    while (num!="quit")
    {
        printNum(num);
        
        cout << "전화번호를 입력하시오: ";
        cin >> num;

    }
}

