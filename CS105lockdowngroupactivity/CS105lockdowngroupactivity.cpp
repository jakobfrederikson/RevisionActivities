// CS105lockdowngroupactivity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Activity 2 by Izzy

#include <iostream>
using namespace std;

class Rectangle {
protected:
    int height;
    int width;
public:
	Rectangle(int he = 0, int wi = 0) {
		height = he;
		width = wi;
	}
	virtual void display() = 0;
};

class RectangleArea :public Rectangle{
private:
	int area;
public:
    void readinput(int h, int w) {
		height = h;
		width = w;
    }
	void display() {
		area = height * width;
		cout << height << " " << width << endl;
		cout << area;
	}
};

int main()
{
    int x, y;
    RectangleArea ra;

	cout << "Enter the rectangle height: ";
	cin >> x;
	cout << "\nEnter the rectangle width: ";
	cin >> y;
	ra.readinput(x, y);

	ra.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

