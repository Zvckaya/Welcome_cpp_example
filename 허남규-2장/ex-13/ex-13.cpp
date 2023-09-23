#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "몇 항까지 구할 까요: ";
    cin >> n;
    int num1=0;
    int num2=1;
    int num3;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << num1<<" ";
        }
        else if (i == 1) {
            cout << num2<<" ";
        }
        else {
            num3 = num1 + num2;
            cout << num3<<" ";
            num1 = num2;
            num2 = num3;
        }
    }
    
}