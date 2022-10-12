#pragma once
#include"baseException.h"
class incorrectSideLengthException:public baseException
{
public:
	incorrectSideLengthException() = default;
	incorrectSideLengthException(const double num);
	virtual void message();
};