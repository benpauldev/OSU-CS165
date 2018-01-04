

/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.c  Point.hpp (interface file)
 
 */

#ifndef Point_h
#define Point_h

class Point
{
    private:
    
        double  xcoord,
                ycoord;
    
    public:
    
 
                Point();                            //constructors
                Point(double x, double y);
    
        void    setXcoord(double),
                setYcoord(double);
        double  getXcoord(),
                getYcoord(),
                distanceTo(const Point&);
    
};

#endif

/*
 
 Description: Project 3.c  Point.hpp (interface file)
 
 */
