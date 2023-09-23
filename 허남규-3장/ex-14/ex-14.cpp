#include <iostream>
#include <string>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	string answer = "apple";
	string myanswer;
	string apple = "apple";

	for (int i = 0; i < apple.size(); i++) {
		int num1 = rand() % apple.size();
		int num2 = rand() % apple.size();
		char tmp;
		tmp = apple[num1];
		apple[num1] = apple[num2];
		apple[num2] = tmp;
	}
	do
	{
		cout << apple << "은 어떤 단어가 스크램블 된 것일까요?: ";
		getline(cin, myanswer);

	} while (myanswer!=answer);
	cout << "축하합니다";

	
	
}

