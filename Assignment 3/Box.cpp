
/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.a  Box.cpp (implementation file)
 
 */

#include "Box.hpp"


Box::Box(double heig, double wid, double len)
{
    height = heig;
    width = wid;
    length = len;
}

Box::Box()
{
    height = 1;
    width = 1;
    length = 1;
}

bool Box::setHeight (double h)
{
    bool validData = true;
    
    if (h >= 0)
        height = h;
    else
        validData = false;
    
    return validData;
}

bool Box::setWidth (double w)
{
    bool validData = true;
    
    if (w >= 0)
        height = w;
    else
        validData = false;
    
    return validData;
}

bool Box::setLength (double l)
{
    bool validData = true;
    
    if (l >= 0)
        height = l;
    else
        validData = false;
    
    return validData;
}

double Box::getVolume()
{
    return length * width * height;
}

double Box::getSurfaceArea()
{
    return (2 * (length*height)) + (2 * (width * height)) + (2 * (length * width));
}


/*
 
 Description:Project 3.a  Box.cpp (implementation file)

 */































