#include <iostream>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int num[100];
    int cnt[10];
    fill_n(cnt, 10, 1);
    
    
    for (int i = 0; i < 100; i++) {
        num[i] = rand()%10;
        cout << num[i]<<endl;
    }
    for (int i : num) {
        cnt[i]++;
    }

    for (int j : cnt) {
        cout << j << " ";
    }
    int max=0;
    for (int i = 0; i < 10; i++) {
        if (cnt[i] > cnt[max]) {
            max = i;
        }
    }
    cout << "가장 많이 생성된 수: " << max;
}
