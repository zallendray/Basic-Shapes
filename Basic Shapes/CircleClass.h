#ifndef CIRCLECLASS_H
#define CIRCLECLASS_H

#include "BasicShape.h"
#include <string>

class CircleClass : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	CircleClass(double x, double y, double r, std::string n);
	void calcArea();

	void setxCenter(double xc);
	double getxCenter();
	void setyCenter(double yc);
	double getyCenter();
	void setRadius(double radius);
	double getRadius();
};
#endif