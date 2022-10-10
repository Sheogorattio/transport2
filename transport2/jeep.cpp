#include "jeep.h"

jeep::jeep() //:transport()
{
	delete[] type;
	type = new char[5];
	strcpy_s(type, 5, "Jeep");
	isOffroad = 0;
}

void jeep::input()
{
	transport::input();
	cout << "Is offroad?(1/0):\t";
	cin >> isOffroad;
}

void jeep::output() const
{
	transport::output();
	cout << "Is offroad:\t" << isOffroad << endl;
}
