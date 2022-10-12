#include "circle.h"
#include"exceptions.h"
using namespace CIRCLE;
circle::circle() {
	radius = 0;
}
circle::circle(double s) {
	try {
		if (s <= 0) {
			throw incorrectRadiusLengthException(s);
		}
		radius = s;
	}
	catch (baseException& a) {
		a.message();
	}
}
void circle::input(double s) {
	try {
		if (s <= 0) {
			throw incorrectRadiusLengthException(s);
		}
		radius = s;
	}
	catch (baseException& a) {
		a.message();
	}
}
double circle::getRadius() {
	return radius;
}