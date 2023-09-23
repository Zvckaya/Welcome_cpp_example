#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++) {
		for (int j = i; j <= 100; j++) {
			for (int k = j; k <= 100; k++) {
				if (pow(i,2) + pow(j,2) == pow(k,2) ){
					printf("%d %d %d \n", j, i, k);
					printf("%d %d %d \n", i, j, k);
				}
			}
		}
	}
}
