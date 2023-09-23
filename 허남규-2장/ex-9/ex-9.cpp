#include <iostream>
using namespace std;


int main()
{
	float c;
	for (int f = 0; f <= 100; f += 10) {
		c = (f - 32.0) * 5.0 / 9.0;
		cout << f << "     " << c << endl;

	}
}

