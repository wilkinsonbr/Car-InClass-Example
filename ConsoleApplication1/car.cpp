#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "car.h"
using namespace std;

// default constructor initialized member variables
Car::Car()
{
	strcpy_s(carMake, "");
	carType = SEDAN;
	strcpy_s(carColor, "");
	nDoors = 4;
}

// overloaded constructor - explicitly sets member vars based on paramenters
Car::Car(char cMake[], int ctype, char cColor[], int doors)
{
	strcpy_s(carMake, cMake);
	carType = ctype;
	strcpy_s(carColor, cColor);
	nDoors = doors;
}

// method to display the car object to the console
void Car::DisplayCar()
{
	cout << "the car is " << carMake << endl;
	cout << "the color is " << carColor << endl;
	cout << "number of doors " << nDoors << endl;
	switch (carType)
	{
	case SEDAN:
		cout << "the car type is a Sedan" << endl;
		break;
	case TRUCK:
		cout << "the car type is a Truck" << endl;
		break;
	case SPORT:
		cout << "the car type is a Sports Car" << endl;
		break;
	case SUV:
		cout << "the car type is a SUV" << endl;
		break;
	default:
		cout << "invalid type..." << endl;
	}
}