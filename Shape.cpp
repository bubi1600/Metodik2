#include "Shape.h"

Shape::Shape(char* colour) 
    : colour(colour) {}

char* Shape::GetColour() const
{
    return colour;
}