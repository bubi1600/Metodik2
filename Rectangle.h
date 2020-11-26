#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(char* colour, double width, double height);

    double GetArea() const override;

protected:
    double width;

    double height;
};


#endif