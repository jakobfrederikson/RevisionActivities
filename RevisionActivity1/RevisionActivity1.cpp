// RevisionActivity1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Activity 1 by Jakob

#include <iostream>
using namespace std;

class Vehicle
{
public:
    void display()
    {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle
{
public:
    void display()
    {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void display()
    {
        cout << "This is a Bike." << endl;
    }
};

int main()
{
    Vehicle* vehicle;
    int n = 0; // number of tyres
    int arraySpot = 0;

    cout << "Enter number of tyres in your vehicle: " << endl;
    cout << "[1] 2 tyres" << endl;
    cout << "[2] 4 tyres" << endl;
    cout << "Enter choice here: ";
    cin >> n;

    if (n == 1)
    {
        vehicle = new Bike;
    }
    else if (n == 2)
    {
        vehicle = new Car;
    }      
    else
    {
        vehicle = new Vehicle;
    }
    cout << endl;

    vehicle->display();
}
