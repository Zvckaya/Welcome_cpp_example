﻿#include <iostream>
using namespace std;

int main()
{
	int n;
	int result=0;
	cout << "n의 값을 입력하시오:";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		result += i * i;
	}
	printf("계산값은 %d 입니다.", result);
}
