
#include <iostream>
using namespace std;

int main()
{
	string str[5];

	for (int i = 0; i < 5; i++) {
		cout << "문자열을 입력하시오: ";
		cin >> str[i];
	}
	string max = str[0];
	for (int i = 1; i < 5; i++) {
		if (str[i].size() > max.size()) {
			max = str[i];
		}
	}
	cout << "제일 긴 문자열: " << max;
}
