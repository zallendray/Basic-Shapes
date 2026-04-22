#include "CircleClass.h"

CircleClass::CircleClass(double x, double y, double r, std::string n = "Circle")
{
	BasicShape::setName(n);
	calcArea(r);
	CircleClass::xCenter = x;
	CircleClass::yCenter = y;
}

void CircleClass::calcArea(double radius)
{
	if (radius > 0) {
		BasicShape::setArea(3.14 * radius * 3.14 * radius);
	}
	else {
		BasicShape::setArea(0);
	}
}

void CircleClass::setxCenter(double xc)
{
	CircleClass::xCenter = xc;
}

double CircleClass::getxCenter()
{
	return xCenter;
}

void CircleClass::setyCenter(double yc)
{
	CircleClass::yCenter = yc;
}

double CircleClass::getyCenter()
{
	return yCenter;
}

void CircleClass::setRadius(double radius)
{
	if (radius > 0) {
		CircleClass::radius = radius;
	}
	else {
		CircleClass::radius = 0;
	}
	calcArea(radius);
}

double CircleClass::getRadius()
{
	return CircleClass::radius;
}