#ifndef RECTANGLECLASS_H
#define RECTANGECLASS_H

#include "BasicShape.h"
#include <string>

class RectangleClass : public BasicShape
{
private:
	double length;
	double width;
public:
	RectangleClass(double l, double w, std::string n);
	void calcArea();
	void setLength(double l);
	double getLength();
	void setWidth(double w);
	double getWidth();
};

#endif
