#include "circleToSquare.h"
#include"exceptions.h"
using namespace cToS;
circleToSquare::circleToSquare(double s, double r) {
	check = 0;
	try {
		if (s <= 0) {
			throw incorrectSideLengthException(s);
		}
		if (r <= 0) {
			throw incorrectRadiusLengthException(r);
		}
		side = s;
		radius = r;
		
	}
	catch (baseException& a) {
		a.message();
	}
}
bool circleToSquare::isAble() {
	check =  side >= radius * 2;
	return check;
}
