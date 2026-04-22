#ifndef CIRCLECLASS.H
#define CIRCLECLASS.H

#include "BasicShape.h"
#include <string>

class CircleClass : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	CircleClass(double x, double y, double r, std::string n = "Circle");
	void calcArea(double radius);

	void setxCenter(double xc);
	double getxCenter();
	void setyCenter(double yc);
	double getyCenter();
	void setRadius(double radius);
	double getRadius();
};
#endif