#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"

class Cylinder : public Circle
{
public:
    Cylinder(char* colour, double radius, double height);

    double GetArea() const override;

protected:
    double height;
};

#endif