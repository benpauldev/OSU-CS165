


/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.b  LineSegment.cpp (Implement file)
 
 */

#include "LineSegment.hpp"
#include <iostream>

LineSegment::LineSegment(Point P1, Point P2)
{
    setEnd1(P1);
    setEnd2(P2);
}

LineSegment::LineSegment()                      
{
    setEnd1(Point (0,0));
    setEnd2(Point (0,0));
}

void LineSegment:: setEnd1(Point first)
{
    P1 = first;
    
}


void LineSegment:: setEnd2 (Point second)
{
    P2 = second;
}


Point LineSegment:: getEnd1()
{
    return P1;
}

Point LineSegment:: getEnd2()
{
    return P2;
}

double LineSegment::length()
{
    return P1.distanceTo(P2);
}


double LineSegment::slope()
{
double  x1 = P1.getXcoord(),
        x2 = P2.getXcoord(),
        y1 = P1.getYcoord(),
        y2 = P2.getYcoord();
    
    
    return (y2 - y1) / (x2 - x1);
}


/*
 
 Description: Project 3.b  LineSegment.cpp (Implement file)
 
 */
