#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
    explicit Shape(char* colour);

    char* GetColour() const;

    virtual double GetArea() const = 0;

private:
    char* colour;
};

#endif