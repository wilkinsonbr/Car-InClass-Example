#pragma once
enum { SEDAN, TRUCK, SPORT, SUV };

// Class delcarlation for car object
class Car
{
	char carMake[50];
	int carType;
	char carColor[50];
	int nDoors;

public:
	Car();
	Car(char cMake[], int ctype, char cColor[], int doors);
	void DisplayCar();
};
