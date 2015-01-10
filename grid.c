#include <string>
#include <iostream>
using namespace std;
//Will define the class if it is not already defined
#ifndef GRID_H
#define GRID_H
class grid
{
public:
    grid(int x, int y);
protected:
    int g_x;
    int g_y;
};
