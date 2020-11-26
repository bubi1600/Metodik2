#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(char* colour, double width, double height, double length)
    : Rectangle(colour, width, height), length(length) {}

double Parallelepiped::GetArea() const
{
    return (width * 2 + height * 2) * length + 2 * Rectangle::GetArea();
}