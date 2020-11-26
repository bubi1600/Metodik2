#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
    Circle(char* colour, double radius);

    double GetArea() const override;

protected:
    double radius;
};

#endif