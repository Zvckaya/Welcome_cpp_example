#include <iostream>
using namespace std;

class Sum {
	int n1;
	int n2;
public:
	void init(int x,int y) {
		this->n1 = x;
		this->n2 = y;

	}
	int add() {
		return n1 + n2;
	}
};

int main()
{
	int n1, n2;
	Sum obj;
	cout << "첫 번째 정수:";
	cin >> n1;
	cout << "두 번째 정수:";
	cin >> n2;
	obj.init(n1, n2);
	cout << "연산 결과: " << obj.add();
	

}
