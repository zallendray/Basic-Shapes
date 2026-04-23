#include <iostream>
#include "BasicShape.h"
#include "CircleClass.h"
#include "RectangleClass.h"
#include "SquareClass.h"
#include <iostream>

int main()
{
    const int num_shapes = 5;

    CircleClass circle(15, -5, 42, "The SuperCircle"), circle2(11.2, 7.5, 2.7, "The SubCircle");
    RectangleClass rec(17, 2, "Small Rectangle"), rec2(10, 5, "Big Rectangle");
    SquareClass square(12, "Equilateral Square");

    BasicShape* shapes[num_shapes] = {&circle,&circle2,&rec,&rec2,&square};

    for (int i = 0; i < num_shapes; i++)
    {
        std::cout << "Name: " << shapes[i]->getName() << "   Area: " << shapes[i]->getArea() << std::endl;

    }
    std::cout << std::endl;

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