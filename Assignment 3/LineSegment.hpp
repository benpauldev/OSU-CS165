

/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.c  LineSegment.hpp (interface file)
 
 */

#ifndef LineSegment_h
#define LineSegment_h
#include "Point.hpp"

class LineSegment
{
private:
    Point P1;
    Point P2;
public:
    
    LineSegment();                      //constructors
    LineSegment(Point, Point);
    
    void   setEnd1(Point);
    Point  getEnd1();
    void   setEnd2(Point);
    Point  getEnd2();
    double length();
    double slope();
};

#endif




/*
 
 Description: Project 3.b  LineSegment.hpp (interface file)
 
 */
