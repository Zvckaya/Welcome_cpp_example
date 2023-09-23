#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pw;

	cout << "암호를 입력하시오: ";
	cin >> pw;
	bool ckUpper = false;
	bool ckLower = false;
	bool ckNum = false;

	for (auto c : pw) {
		if (isupper(c)) {
			ckUpper = true;
		}
	}
	for (auto c : pw) {
		if (islower(c)) {
			ckLower = true;
		}
	}
	for (auto c : pw) {
		if (48 <= c && c <= 57) {
			ckNum = true;
		}
	}
	if (ckLower == true && ckUpper == true && ckNum == true) {
		cout << "안전합니다.";
	}
	else {
		cout << "안전하지 않습니다.";
	}
}
