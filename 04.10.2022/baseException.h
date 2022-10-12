#pragma once
#include <iostream>
#include<cstring>
using namespace std;
class baseException
{
protected:
	double side;
public:
	baseException() = default;
	baseException(const double num);
	virtual void message();
};

