#include <iostream>

int main()
{
	static int month = 1;
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	
	for (int i : days) {
		
		std::cout <<month<<"월은" << i<<"일까지 있습니다."<<std::endl;
		month++;
	}
}
