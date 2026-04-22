#ifndef CIRCLECLASS.H
#define CIRCLECLASS.H

#include "BasicShape.h"

class CircleClass
{
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	CircleClass();
	void calcArea();

	void setxCenter();
	double getxCenter();
	void setyCenter();
	double getyCenter();
	void setRadius();
	double getRadius();
};
#endif