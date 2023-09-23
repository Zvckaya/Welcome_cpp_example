#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str;
    int end;

    cout << "문자열을 입력하시오: ";
    getline(cin, str);
    end = str.size() - 1;
    if ((97 < str[0]) && (str[end] < 122))
        str[0] = toupper(str[0]);
    if (str[end] == '.') {
        cout << "결과 문자열: "<<str;
    }
    else {
        cout << "결과 문자열: " << str << ".";
    }
   
}
