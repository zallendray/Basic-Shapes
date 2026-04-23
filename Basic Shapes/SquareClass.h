#ifndef SQUARECLASS_H
#define SQUARECLASS_H

#include "RectangleClass.h"

class SquareClass : public RectangleClass
{
private:
	double side;
public:
	SquareClass(double s, std::string n);
	void setSide(double side);
	double getSide();
};

#endif
