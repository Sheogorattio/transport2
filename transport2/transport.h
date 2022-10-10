#pragma once
#include<iostream>
using namespace std;
class transport
{
protected:
	char* type;
	string model;
	double max_speed;
	double fuel_usage;
public:
	transport();
	virtual void input();
	virtual void output()const;
	virtual double getUsage()const;
	virtual ~transport() =0;
};
