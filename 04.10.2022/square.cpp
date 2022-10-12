#include "square.h"
#include"exceptions.h"
using namespace SQUARE;
square::square() {
	side = 0;
}
square::square(double s) {
	try {
		side = 0;
		if (s <= 0) {
			throw incorrectSideLengthException(s);
		}
		side = s;
	}
	catch (baseException& a) {
		a.message();
	}
}
void square::input(double s) {
	try {
		if (s <= 0) {
			throw incorrectSideLengthException(s);
		}
		side = s;
	}
	catch(baseException& a) {
		a.message();
	}
}
double square::getSide() {
	return side;
}