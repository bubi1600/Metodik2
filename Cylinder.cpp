#define _USE_MATH_DEFINES
#include <cmath>
#include "Cylinder.h"

Cylinder::Cylinder(char* colour, double radius, double height)
    : Circle(colour, radius), height(height) {}

double Cylinder::GetArea() const
{
    return 2 * Circle::GetArea() + 2 * M_PI * radius * height;
}