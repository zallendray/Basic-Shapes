#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>

class BasicShape
{
private:
	double area;
	std::string name;
public:
	void setArea(double a);
	double getArea();
	void setName(std::string n);
	std::string getName();

	virtual void calcArea() = 0;
};
#endif