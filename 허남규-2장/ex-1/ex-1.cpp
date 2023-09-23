#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_str;
    string second_str;
    cout << "첫 번째 문자열: ";
    cin >> first_str;
    cout << "두 번째 문자열: ";
    cin >> second_str;
    if (first_str == second_str) {
        cout << "2개의 문자열은 같습니다";
    }
    else {
        cout << "두개의 문자열은 다릅니다";
    }

}

