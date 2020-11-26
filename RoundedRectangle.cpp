#define _USE_MATH_DEFINES
#include <cmath>
#include "RoundedRectangle.h"

RoundedRectangle::RoundedRectangle(char* colour, double width, double height, double radius)
    : Rectangle(colour, width, height), radius(radius) {}

double RoundedRectangle::GetArea() const
{
    return Rectangle::GetArea() - (radius * radius) * (4 - M_PI);
}