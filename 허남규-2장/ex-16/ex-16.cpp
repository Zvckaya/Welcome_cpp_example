#include <iostream>
using namespace std;

int main()
{
    int start = 50;
    int goal=250;
    int bets=0;
    int win = 0;
    while (start < goal) {
        bets++;
        if ((double)rand() / RAND_MAX < 0.5) {
            start++;
            win++;
        }
        else start--;
    };
    printf("%d 중의 %d번 승리 \n", bets,win);
    float luck = (float)win / (float)bets;
    cout << "이길확률:" << luck *100<<endl;
    float normal_bet = (float)bets / (float)win;
    cout << "평균 배팅 횟수:" << normal_bet;
}
