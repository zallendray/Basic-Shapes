#include "RectangleClass.h"

RectangleClass::RectangleClass(double l, double w, std::string n = "Rectangle")
{
	BasicShape::setName(n);
	setLength(l);
	setWidth(w);
	calcArea(RectangleClass::length, RectangleClass::width);
}

void RectangleClass::calcArea(double length, double width)
{
	BasicShape::setArea(length * width);
}

void RectangleClass::setLength(double l)
{
	if (l > 0) {
		RectangleClass::length = l;
	}
	else {
		RectangleClass::length = 0;
	}
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