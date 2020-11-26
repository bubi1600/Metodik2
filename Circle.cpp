#define _USE_MATH_DEFINES
#include <cmath>
#include "Circle.h"

Circle::Circle(char* colour, double radius)
    : Shape(colour), radius(radius) {}

double Circle::GetArea() const
{
    return M_PI * (radius * radius);
}
