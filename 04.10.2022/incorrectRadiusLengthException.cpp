#include "incorrectRadiusLengthException.h"

incorrectRadiusLengthException::incorrectRadiusLengthException(const double num) :baseException(num)
{}

void incorrectRadiusLengthException::message() {
	cout << side << " is incorrect size. Radius of circle must be longer than zero.\n";
}
