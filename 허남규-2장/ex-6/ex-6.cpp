#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 8; i++) {
		for (int k = 1; k <= i; k++) {
			cout << k;
		}
		
		for (int j = 7-i; j > 0; j--) {
			cout << "*";
		}
		cout<<endl;
	}
}

