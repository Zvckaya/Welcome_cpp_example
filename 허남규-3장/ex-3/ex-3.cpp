#include <iostream>
using namespace std;


int main()
{
	double a, b;
	cout << "직각삼각형의 한변: ";
	cin >> a;
	cout << "직각삼각형의 한변: ";
	cin >> b;
	double result = sqrt(pow(a, 2) + pow(b, 2));
	cout << "빗변:"<<result;
}

