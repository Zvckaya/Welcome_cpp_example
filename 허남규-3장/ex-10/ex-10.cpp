#include <iostream>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    
    int front = 0;
    int back = 0;
    
    for (int i = 0; i < 100; i++) {
        if (rand() % 2 == 0) {
            front++;
        }
        else
        {
            back++;
        }
    }
    cout << "동전의 앞면: " << front<<endl;
    cout << "동전의 뒷면: " << back;
}

