#include <string>
#include <iostream>
using namespace std;
//Will define the class if it is not already defined
#ifndef SQUARE_H
#define SQUARE_H
class Square: public Shape
{
public:
    Square(int x, int y, int z);
    void draw(Grid &grid);
protected:
    int size;
};
Square::Square(int x, int y,int z):Shape(x,y)
{
    size = z;
}
void Square::draw(Grid &grid)
{
    for(int i =0; i<size; i++)
    {
        grid.set(m_x+i,m_y,'*');
        grid.set(m_x+i,m_y+size,'*');
    }
    for (int y_count=0; y_count<size; y_count++)
    {
        grid.set(m_x,m_y+y_count,'*');
        grid.set(m_x+size,m_y+y_count,'*');
    }

}
#endif
