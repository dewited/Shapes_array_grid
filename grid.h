#include <string>
#include <iostream>
using namespace std;
//Will define the class if it is not already defined
#ifndef GRID_H
#define GRID_H
class Grid
{
public:
    void draw();
    void set(int x, int y, char c);
    void print();
protected:
    char grid_vector[60][24];
};
void Grid:: set(int x, int y, char c)
{
    grid_vector[x][y]=c;
}
void Grid::draw()
{

}
void Grid::print()
{
    for (int i = 0; i < 60; i++)
    {
        for (int b=0;b<24;b++)
        {
            cout <<grid_vector[i][b];
        }
    }
}
#endif
