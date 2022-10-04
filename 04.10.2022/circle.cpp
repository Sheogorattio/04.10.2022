#include "circle.h"
circle::circle() {
	radius = 0;
}
circle::circle(double s) {
	radius = s;
}
void circle::input(double s) {
	radius = s;
}
double circle::getRadius() {
	return radius;
}