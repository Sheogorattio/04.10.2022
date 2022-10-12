#include "incorrectSideLengthException.h"

incorrectSideLengthException::incorrectSideLengthException(const double num) :baseException(num)
{}

void incorrectSideLengthException::message() {
	cout << side << " is incorrect size. Side of square must be longer than zero.\n";
}