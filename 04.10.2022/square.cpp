#include "square.h"
square::square() {
	side = 0;
}
square::square(double s) {
	side = s;
}
void square::input(double s) {
	side = s;
}
double square::getSide() {
	return side;
}