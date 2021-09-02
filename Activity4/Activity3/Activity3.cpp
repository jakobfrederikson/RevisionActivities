#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

class Shapes {
private:
	bool input;

public:
	float length, breadth, side, radius, diag1, diag2;

	void read_rectangle() {
		input = false;
		do {
			cout << "\n== Enter Rectangle Data ==";
			cout << "\nEnter the Length of the Rectangle: ";
			cin >> length;

			cout << "Enter the Breadth of the Rectangle: ";
			cin >> breadth;

			if (length > 100000 || length < 1 && breadth < 1 || breadth > 100000) {
				cout << "\nERRROR: Length and Breadth range 1-99999";
				input = false;
				Sleep(2000);
			}
			else {
				input = true;
			}

		} while (input == false);
	}

	void read_square() {
		input = false;
		do {
			cout << "\n== Enter Square Data ==";
			cout << "\nEnter the side of the Square: ";
			cin >> side;

			if (side < 1 || side >= 100000) {
				cout << "\nERRROR: Side range 1-99999";
				input = false;
				Sleep(2000);
			}
			else {
				input = true;
			}

		} while (input == false);
	}

	void read_circle() {
		input = false;
		do {
			cout << "\n== Enter Circle Data ==";
			cout << "\nEnter the radius of the Circle: ";
			cin >> radius;

			if (side < 1 || side >= 100) {
				cout << "\nERRROR: Radius range 1-100";
				input = false;
				Sleep(2000);
			}
			else {
				input = true;
			}

		} while (input == false);
	}

	void read_rhombus() {
		input = false;
		do {
			cout << "\n== Enter Rhombus Data ==";
			cout << "\nEnter the first diagonal of the Rhombus: ";
			cin >> diag1;

			cout << "Enter the second diagonal of the Rhombus: ";
			cin >> diag2;

			if (diag1 < 1 || diag1 >= 1000 && diag2 < 1 || diag2 >= 1000) {
				cout << "\nERRROR: Side range 1-999";
				input = false;
				Sleep(2000);
			}
			else {
				input = true;
			}

		} while (input == false);
	}

};

class Area : public Shapes {
public:
	float area_rectangle(float l, float b) {
		return l + b;
	}

	float area_square(float s) {
		return s * s;
	}

	float area_circle(float r) {
		return  3.14f * (r * r);
	}

	float area_rhombus(float d1, float d2) {
		return (d1 * d2) / 2;
	}
};

class Perimeter : public Shapes {
public:
	float perimeter_rectangle(float l, float b) {
		return 2 * (l * b);
	}

	float perimeter_square(float s) {
		return 4 * s;
	}

	float perimeter_circle(float r) {
		return 2 * (3.14 * r);
	}

	float perimeter_rhombus(float d1) {
		return 4 * d1;
	}
};

int main()
{
	int amount;

	cout << "\n== Shapes Calculator (Didn't we do this in a lab or something idk) ==";
	cout << "\nHow many times do you want to run the calculator: ";
	cin >> amount;

	vector<Shapes> sVec;
	Area a;
	Perimeter p;

	// Input loop
	for (int i = 0; i < amount; i++) {
		system("CLS");
		sVec.emplace_back();
		sVec[i].read_rectangle();
		sVec[i].read_square();
		sVec[i].read_circle();
		sVec[i].read_rhombus();
	}

	for (int i = 0; i < amount; i++) {
		cout << "\n== Test Case " << i + 1 << " ==";

		cout << "\n===== AREA =====";
		cout << "\nRectangle: " << a.area_rectangle(sVec[i].length, sVec[i].breadth);
		cout << "\nSquare: " << a.area_square(sVec[i].side);
		cout << "\nCircle: " << a.area_circle(sVec[i].radius);
		cout << "\nRectangle: " << a.area_rhombus(sVec[i].diag1, sVec[i].diag2);

		cout << "\n===== PERIMETER =====";
		cout << "\nRectangle: " << p.perimeter_rectangle(sVec[i].length, sVec[i].breadth);
		cout << "\nSquare: " << p.perimeter_square(sVec[i].side);
		cout << "\nCircle: " << p.perimeter_circle(sVec[i].radius);
		cout << "\nRectangle: " << p.perimeter_rhombus(sVec[i].diag1);

		cout << "\n\n";
	}

	return 0;
}