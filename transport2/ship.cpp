#include "ship.h"

ship::ship() //:transport()
{
	delete[] type;
	type = new char[5];
	strcpy_s(type, 5, "Ship");
}

void ship::input()
{
	transport::input();
	cout << "Enter type of fuel:\t";
	cin >> fuel_type;
}

void ship::output() const
{
	transport::output();
	cout << "Fuel type:\t" << fuel_type << endl;
}