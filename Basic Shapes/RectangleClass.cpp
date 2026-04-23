#include "RectangleClass.h"

RectangleClass::RectangleClass(double l, double w, std::string n = "Rectangle")
{
	BasicShape::setName(n);
	setLength(l);
	setWidth(w);
	calcArea();
}

void RectangleClass::calcArea()
{
	BasicShape::setArea(RectangleClass::length * RectangleClass::width);
}

void RectangleClass::setLength(double l)
{
	if (l > 0) {
		RectangleClass::length = l;
	}
	else {
		RectangleClass::length = 0;
	}
	calcArea();
}

double RectangleClass::getLength()
{
	return RectangleClass::length;
}

void RectangleClass::setWidth(double w)
{
	if (w > 0) {
		RectangleClass::width = w;
	}
	else {
		RectangleClass::width = 0;
	}
}

double RectangleClass::getWidth()
{
	return RectangleClass::width;
}