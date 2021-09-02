// RevisionActivity4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Activity 4 by Jakob

#include <iostream>
using namespace std;

class Student
{
public:
	string name;
	float m1, m2, m3, m4, m5;
	float average;
	char grade;

	void read()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter marks: ";
		cin >> m1 >> m2 >> m3 >> m4 >> m5;
		cout << endl;
	}

	void find_grade()
	{
		if (average >= 80)
			grade = 'A';
		else if (average >= 60 && average < 80)
			grade = 'B';
		else if (average >= 50 && average < 60)
			grade = 'C';
		else
			grade = 'D';
	}
};

class Percentage : public Student
{
public:
	void findTotalAndPercentage()
	{
		float total;

		total = m1 + m2 + m3 + m4 + m5;
		average = total / 5;
	}
};

class Grade : public Percentage
{
public:
	char return_grade()
	{
		return grade;
	}
};

class Report : public Grade
{
public:
	void print_report()
	{
		cout << "NAME:          " << name << endl;
		cout << "MARKS:         " << m1 << " " << m2 << " " << m3 << " " << m4 << " " << m5 << endl;
		findTotalAndPercentage();
		cout << "GRADE PERCENT: " << average << endl;
		find_grade();
		cout << "GRADE:         " << return_grade();
		cout << "\n\n";
	}
};

int main()
{
	int testcases = 0;
	Report r[100];

	cout << "Enter amount of students: ";
	cin >> testcases;
	system("cls");

	for (int i = 0; i < testcases; i++)
	{
		r[i].read();
	}

	for (int i = 0; i < testcases; i++)
	{
		r[i].print_report();
	}
}
