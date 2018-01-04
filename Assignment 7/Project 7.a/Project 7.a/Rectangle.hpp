
/*
 
 Author: Benjamin Fondell
 
 Date: 2/21/2017
 
 Description: Project 7.a  Rectangle.hpp (Header file)
 
 */

#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>


class Rectangle
{
    protected:
        double length;
        double width;
    
    public:
    
        Rectangle ();
        Rectangle (double, double);
        void setLength (double);
        void setWidth (double);
        double area ();
        double perimeter ();
    
};

#endif 

/*

 Description: Project 7.a  Rectangle.hpp (Header file)

*/
