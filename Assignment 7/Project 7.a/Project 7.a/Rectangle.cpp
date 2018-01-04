/*
 
 Author: Benjamin Fondell
 
 Date: 2/21/2017
 
 Description: Project 7.a  Rectangle.cpp (Implement file)
 
 */

#include "Rectangle.hpp"
#include <iostream>


using namespace std;

Rectangle :: Rectangle()
{
    length = 0.0;
    width = 0.0;
}

Rectangle :: Rectangle (double len, double wid)
{
    setLength(len);
    setWidth(wid);
}

void Rectangle :: setLength (double l)
{
    length = l;
}

void Rectangle :: setWidth (double w)
{
    width = w;
}

double Rectangle :: area()
{
    return width * length;
}

double Rectangle :: perimeter()
{
    return 2*(width + length);
}

/*

Description: Project 7.a  Rectangle.cpp (Implement file)

*/
