#ifndef BASICSHAPE.H
#define BASICSHAPE.H

#include <string>

class BasicShape
{
private:
	double area;
	std::string name;
public:
	void setArea();
	double getArea();
	void setName();
	std::string getName();

	virtual void calcArea() = 0;
};
#endif