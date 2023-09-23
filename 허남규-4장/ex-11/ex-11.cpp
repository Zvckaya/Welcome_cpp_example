#include <iostream>
using namespace std;

class Box {
	double length;
	double width;
	double height;
public:
	double getVolume() {
		return length * width * height;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double height) {
		this->height = height;
	}
	double getLength() {
		return length;
	}
	void setLength(double length) {
		this->length = length;
	}
	double getWidth() {
		return width;
	}
	void setWidth(double width) {
		this->width = width;
	}

};

int main()
{
	Box box;
	box.setHeight(6);
	box.setLength(7);
	box.setWidth(5);

	cout << "[" << box.getHeight() << "," << box.getLength() << "," << box.getWidth() << "]"<<endl;
	cout << "상자의 부피:" << box.getVolume();


}

