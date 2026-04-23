#include <iostream>
#include "CircleClass.h"
#include "RectangleClass.h"
#include "SquareClass.h"
#include <iostream>

int main()
{
    CircleClass circle(15, -5, 42, "The SuperCircle"), circle2(11.2, 7.5, 2.7, "The SubCircle");
    RectangleClass rec(17, 2, "Small Rectangle"), rec2(10,5,"Big Rectangle");
    SquareClass square(12,"Equilateral Square");

    std::cout << "Name: " << circle.getName() << "  Area: " << circle.getArea() << std::endl
        << "Name: " << circle2.getName() << "   Area: " << circle2.getArea() << std::endl
        << "Name: " << rec.getName() << "   Area: " << rec.getArea() << std::endl
        << "Name: " << rec2.getName() << "   Area: " << rec2.getArea() << std::endl
        << "Name: " << square.getName() << "   Area: " << square.getArea() << std::endl << std::endl;


    circle.setRadius(10);
    std::cout << "Circle after changing radius to 10: " << circle.getArea() << std::endl;
    circle.setxCenter(51);
    std::cout << "Circle after changing center.x to 51: " << circle.getArea() << std::endl;

    rec.setLength(10);
    std::cout << "Rectangle after changing length to 10: " << rec.getArea() << std::endl;
    rec.setWidth(10);
    std::cout << "Rectangle after changing width to 10: " << rec.getArea() << std::endl;

    square.setSide(15);
    std::cout << "Square after changing side to 15: " << square.getArea() << std::endl;

}