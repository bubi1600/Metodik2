#include <iostream>
#include <vector>
#include "Circle.h"
#include "Cylinder.h"
#include "Rectangle.h"
#include "Parallelepiped.h"
#include "RoundedRectangle.h"

typedef std::vector<std::unique_ptr<Shape>> shape_uptr;


void GetData(const shape_uptr& shapes);

int main()
{
    char orange[7] = "Orange";
    char blue[5] = "Blue";
    char purple[7] = "Purple";
    char grey[5] = "Grey";
    char green[6] = "Green";

    shape_uptr shapes;

    shapes.push_back(std::make_unique<Circle>(blue, 4));
    shapes.push_back(std::make_unique<Cylinder>(orange, 3, 5));
    shapes.push_back(std::make_unique<Rectangle>(purple, 4, 6));
    shapes.push_back(std::make_unique<Parallelepiped>(grey, 15, 18, 21));
    shapes.push_back(std::make_unique<RoundedRectangle>(green, 15, 17, 3));

    GetData(shapes);
    system("pause");
    return 0;
}

void GetData(const shape_uptr& shapes)
{
    for (auto& s : shapes)
    {
        std::cout << "Colour: " << s->GetColour()
            << "\tArea: " << s->GetArea()
            << "\n";
    }
}