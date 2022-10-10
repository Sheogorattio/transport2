#include "lorry.h"

lorry::lorry()// :transport()
{
	delete[] type;
	type = new char[6];
	strcpy_s(type, 6, "Lorry");
}

void lorry::input()
{
	transport::input();
	cout << "Enter brand:\t";
	cin >> brand;
}

void lorry::output() const
{
	transport::output();
	cout << "Brand:\t" << brand << endl;
}
