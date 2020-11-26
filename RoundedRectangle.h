#ifndef ROUNDED_RECTANGLE_H
#define ROUNDED_RECTANGLE_H

#include "Rectangle.h"

class RoundedRectangle : public Rectangle
{
public:
    RoundedRectangle(char* colour, double width, double height, double radius);

    double GetArea() const override;

protected:
    double radius;
};

#endif