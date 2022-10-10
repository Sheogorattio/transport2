#pragma once
#include "transport.h"
class lorry:public transport
{
	string brand;
public:
	lorry();
	void input();
	void output()const;
};

