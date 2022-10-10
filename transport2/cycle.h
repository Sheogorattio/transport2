#pragma once
#include "transport.h"
class cycle:public transport
{
	string tire_type;
public:
	cycle();
	void input();
	void output()const;
	double getUsage() const;
};

