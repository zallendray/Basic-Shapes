#ifndef RECTANGLECLASS.H
#define RECTANGECLASS.H

#include "BasicShape.h"

class RectangleClass
{
private:
	double length;
	double width;
public:
	RectangleClass();
	void calcArea();
	void setLength();
	double getLength();
	void setWidth();
	double getWidth();
};

#endif
