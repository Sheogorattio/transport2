#include "plane.h"

plane::plane()
{
	delete[] type;
	type = new char[6];
	strcpy_s(type, 6, "Plane");
	max_speed = -1;
	fuel_usage = -1;
	wing_len = -1;
}

void plane::input()
{
	transport::input();
	cout << "enter wing_len\n";
	cin >>wing_len;
}
void plane::output() const {
	transport::output();
	cout << "Wing length:\t" << wing_len << endl;
}