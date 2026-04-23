#include "SquareClass.h"

SquareClass::SquareClass(double s, std::string n = "Square") : RectangleClass(s,s,n)
{
	BasicShape::setName(n);
}

void SquareClass::setSide(double side)
{
	if (side > 0) {
		SquareClass::side = side;
		RectangleClass::setLength(side);
		RectangleClass::setWidth(side);
	}
	else {
		SquareClass::side = 0;
		RectangleClass::setLength(side);
		RectangleClass::setWidth(side);
	}
}

double SquareClass::getSide()
{
	return SquareClass::side;
}