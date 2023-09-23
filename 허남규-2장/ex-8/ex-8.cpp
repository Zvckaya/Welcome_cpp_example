#include <iostream>
using namespace std;


int main()
{
	int n;
	cout << "정수를 입력하세요";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " " ;
		}
	}
}

