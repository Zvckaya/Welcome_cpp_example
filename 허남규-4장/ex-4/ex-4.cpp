#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string author;

};

int main()
{
	Book obj;
	cout << "책 이름: ";
	cin >> obj.title;
	cout << "저자:";
	cin >> obj.author;
}
