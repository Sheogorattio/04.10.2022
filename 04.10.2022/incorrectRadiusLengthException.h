#pragma once
#include"baseException.h"
class incorrectRadiusLengthException:public baseException
{
public:
	incorrectRadiusLengthException(const double num);
	virtual void message();
};


