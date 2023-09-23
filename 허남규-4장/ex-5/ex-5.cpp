#include <iostream>
using namespace std;

class Dice {
    int diceValue;
public:
    int roll() {
        this->diceValue = (int)(rand() % 6 + 1);
        return this->diceValue;
    }
};

int main()
{
    srand((unsigned int)time(NULL));
    Dice obj;
    cout << "주사위 값:" << obj.roll()<<endl;
    cout << "주사위 값:" << obj.roll();

}
