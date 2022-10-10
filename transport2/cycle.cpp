#include "cycle.h"

cycle::cycle()//:transport()
{
	delete[] type;
	type = new char[8];
	strcpy_s(type, 8, "Bicycle");
}

void cycle::input()
{
	transport::input();
	cout << "Enter type of tire:\t";
	cin >> tire_type;
}

void cycle::output() const
{
	transport::output();
	cout << "Tire type:\t" << tire_type<< endl;
}

double cycle::getUsage() const
{
	return 0.0;
}
