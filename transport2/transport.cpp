#include "transport.h"

transport::transport()
{
	type = nullptr;/*new char[5];
	strcpy_s(type, 5, "none");*/
	max_speed = -1;
	fuel_usage = -1;
}

void transport::input()
{
	cout << "enter model\n";
	cin >> model;
	cout << "enter max speed\n";
	cin >> max_speed;
	cout << "enter usage\n";
	cin >> fuel_usage;
}

void transport::output() const
{
	cout << "Type:\t" << type << endl;
	cout << "Model:\t" << model << endl;
	cout << "Max speed:\t" << max_speed << endl;
	cout << "Fuel usage:\t" << fuel_usage << "/100km" << endl;
}

double transport::getUsage() const
{
	return fuel_usage;
}

transport::~transport() {
	cout << "destructor\n";
	delete[] type;
}
