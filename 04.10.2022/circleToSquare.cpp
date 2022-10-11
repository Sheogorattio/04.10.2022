#include "circleToSquare.h"
using namespace cToS;
circleToSquare::circleToSquare(double s, double r) {
	side = s;
	radius = r;
	check = 0;
}
bool circleToSquare::isAble() {
	check =  side >= radius * 2;
	return check;
}
