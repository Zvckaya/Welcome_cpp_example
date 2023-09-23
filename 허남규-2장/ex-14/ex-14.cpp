#include <iostream>
using namespace std;

int main()
{
	char opcode;
	int n1, n2;
	int result;
	cout << "연산의 종류: ";
	cin >> opcode;
	cout << "숫자를 입력하시오: ";
	cin >> n1 >> n2;
	switch (opcode)
	{
	case '+':
		result = n1 + n2;
		break;
	case '-':
		result = n1 - n2;
		break;
	case '/':
		if (n2 != 0)
			result = n1 / n2;
		else
			result = 0;
		break;
	case '*' :
		result = n1 * n2;
	default:
		break;
	}

	cout << "계산의 결과: " << result;
	
}

