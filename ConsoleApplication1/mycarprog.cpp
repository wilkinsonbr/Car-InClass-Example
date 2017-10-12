// mycarprog.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "car.h"
#include <iostream>
using namespace std;

int main()
{
	Car myCar1;  // create w default contructor
	Car myCar2("Honda", SUV, "Blueberry Blue", 4); // create w overloaded constructor
	Car myCar3(myCar1);  // create w copy constructor

	cout << endl << "---- Car 1 ----" << endl;
	myCar1.DisplayCar();
	cout << endl << "---- Car 2 ----" << endl;
	myCar2.DisplayCar();
	cout << endl << "---- Car 3 ----" << endl;
	myCar3.DisplayCar();


	return 0;
}