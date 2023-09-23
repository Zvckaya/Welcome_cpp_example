#include <iostream>
using namespace std;

void sayHello(int i=1) {
    if (i == 1) {
        printf("sayHello()->Hello");
    }
    else {
        printf("sayHello(%d)-> ", i);
        for (int j = 0; j < i; j++) {
            cout << "Hello ";
        }
    }
    cout << endl;
    
   
}

int main()
{
    sayHello();
    sayHello(3);
}

