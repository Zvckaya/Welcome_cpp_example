﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
	int counter[256] = { 0 };
	string s;
	cout << "문자열을 입력하시오: ";
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
		counter[s[i]]++;

	for (int i = 97; i < 123; i++)
		cout << (char)i << ": " << counter[i] << endl;
	
}

