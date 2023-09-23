#include <iostream>
using namespace std;

inline double calc_volume(double radius) {
	return (4.0 / 3.0 * 3.14 * pow(radius, 3));
	
}


int main()
{
	double radius;
	cout << "반지름을 입력하시오:";
	cin >> radius;
	double result = calc_volume(radius);
	cout << "구의 부피는 :"<< result;
   
}

