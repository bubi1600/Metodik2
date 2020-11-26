#include "rectangle.h"

Rectangle::Rectangle(char* colour, double width, double height)
    : Shape(colour), width(width), height(height) {}

double Rectangle::GetArea() const
{
    return width * height;
}
