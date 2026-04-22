#include "BasicShape.h"
#include <string>

void BasicShape::setArea(double a)
{
	if (a > 0) {
		BasicShape::area = a;
	}
	else {
		BasicShape::area = 0;
	}
}

double BasicShape::getArea()
{
	return BasicShape::area;
}

void BasicShape::setName(std::string n)
{
	BasicShape::name = n;
}

std::string BasicShape::getName()
{
	return BasicShape::name;
}