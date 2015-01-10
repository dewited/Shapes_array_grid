#include <string>
#include <iostream>
#include "grid.h"
using namespace std;
//Will define the class if it is not already defined
#ifndef SHAPES_H
#define SHAPES_H
class Shape
{
public:
    virtual void draw(Grid &grid) = 0;
    Shape(int x, int y)
    {
        m_x=x;
        m_y=y;
    }
//    virtual void draw(Grid &grid) = 0;
protected:
    int m_y, m_x;
};
#endif
