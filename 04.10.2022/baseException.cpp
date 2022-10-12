#include "baseException.h"

baseException::baseException(const double num) {
	side = num;
}

void baseException::message()
{
	cout << "error\n";
}