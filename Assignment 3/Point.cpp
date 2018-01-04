

/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.b  Point.cpp (Implement file)
 
 */

#include "Point.hpp"
#include <cmath>
#include <iostream>


Point::Point(double x, double y)
{
    setXcoord(x);
    setYcoord(y);
}

Point::Point()
{
    setXcoord(0);
    setYcoord(0);
}
void Point::setXcoord(double x)
{
    xcoord = x;
}

void Point::setYcoord(double y)
{
    ycoord = y;
}

double Point:: getXcoord()
{
    return xcoord;
}

double Point::getYcoord()
{
    return ycoord;
}

double Point::distanceTo(const Point &secondpoint)
{
    double  x1,
            x2,
            y1,
            y2;
    
    double  xdistance,            //variables for outcomes of intermediary equations
            ydistance,
            sqrtdistance,
            distancefinal;
    
    x1 = xcoord;
    x2 = secondpoint.xcoord;
    y1 = ycoord;
    y2 = secondpoint.ycoord;
    
    xdistance = x1 - x2;
    ydistance = y1 - y2;
    sqrtdistance = pow(xdistance, 2) + pow(ydistance, 2);
    distancefinal = sqrt(sqrtdistance);
    return distancefinal;
    
}


/*
 
Description: Project 3.b  Point.cpp (Implement file)
 
 */
