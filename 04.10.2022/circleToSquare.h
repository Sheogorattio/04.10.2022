#pragma once
#include "circle.h"
#include "square.h"
using namespace CIRCLE;
using namespace SQUARE;
namespace cToS {

	class circleToSquare :public circle, square
	{
		bool check;
	public:
		circleToSquare() = default;
		circleToSquare(double s, double r);
		bool isAble();
	};
}

