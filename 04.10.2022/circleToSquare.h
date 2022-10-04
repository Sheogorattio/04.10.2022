#pragma once
#include "circle.h"
#include "square.h"
class circleToSquare:public circle, square
{
	bool check;
public:
	circleToSquare() = default;
	circleToSquare(double s, double r);
	bool isAble();
};

