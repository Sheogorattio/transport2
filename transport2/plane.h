#pragma once
#include<iostream>
#include"transport.h"
class plane:public transport
{
	double wing_len;
public:
	plane();
	void input();
	void output()const;
};

