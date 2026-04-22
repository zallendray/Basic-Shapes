#ifndef RECTANGLECLASS.H
#define RECTANGECLASS.H

#include "BasicShape.h"
#include <string>

class RectangleClass : public BasicShape
{
private:
	double length;
	double width;
public:
	RectangleClass(double l, double w, std::string n = "Rectangle");
	void calcArea(double length, double width);
	void setLength(double l);
	double getLength();
	void setWidth(double w);
	double getWidth();
};

#endif
