#pragma once
#include "transport.h"
class jeep:public transport
{
	bool isOffroad;
public:
	jeep();
	void input();
	void output()const;
};

