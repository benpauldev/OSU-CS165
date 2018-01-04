/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 5.b  Box.cpp (implementation file)
 
 */

#include<iostream>
#include "Box.hpp"
using namespace std;




Box::Box ()

{
    height=1;
    length=1;
    width=1;
    
}



Box::Box(double H, double L, double W)

{
    
    setHeight(H);
    setLength(L);
    setWidth(W);
    
}



void Box::setHeight(double H)
{
    
    height=H;
    
}



void Box::setWidth(double W)
{
    
    width=W;
    
}



void Box::setLength(double L)
{
    
    length=L;
    
}



double Box::getHeight()
{
    
    return height;
    
}



double Box::getWidth()
{
    
    return width;
}


double Box::getLength()

{
    
    return length;
    
}


double Box::getVolume ()
{
    return length * width * height;
    
}

double Box::getSurfaceArea ()
{
    
    return 2 * (length * width) + 2 * (length * height) + 2 * (width * height);
    
}


/*
 
 Description:Project 5.b  Box.cpp (implementation file)
 
 */

