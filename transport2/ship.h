#pragma once
#include "transport.h"
class ship:public transport
{
	string fuel_type;
public:
	ship();
	void input();
	void output()const;
};

