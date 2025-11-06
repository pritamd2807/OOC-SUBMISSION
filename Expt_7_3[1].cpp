// C++ program to illustrate the implementation of Hybrid Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// base class
class Fare {
public:
    Fare() { cout << "Fare of Vehicle\n"; }
};

// first subclass
class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is a Car\n"; }
};

// second subclass
class Bus : public Vehicle, public Fare {
public:
    Bus() { cout << "This Vehicle is a Bus with Fare\n"; }
};

// main function
int main() {
    cout<<"Name: Pritam Jaysing Deshmukh\n";
    cout<<"Div: B\n";
    cout<<"Roll No: 111\n\n";
    // Creating object of subclasses will
    // invoke the constructor of base class.
    Bus obj1;
    return 0;
}

/*
OUTPUT:

Name: Pritam Jaysing Deshmukh
Div: B
Roll No: 111

This is a Vehicle
Fare of Vehicle
This Vehicle is a Bus with Fare

*/