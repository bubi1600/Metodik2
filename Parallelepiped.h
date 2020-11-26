#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Rectangle.h"

class Parallelepiped : public Rectangle
{
public:
    Parallelepiped(char* colour, double width, double height, double length);

    double GetArea() const override;

private:
    double length;
};

#endif