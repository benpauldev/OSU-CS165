/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 5.b  Box.hpp (interface file)
 
 */


#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
    
    double  height,
    width,
    length;
    
public:
    
    Box ();
    
    Box (double height, double length, double width);
    
    void setHeight (double);
    void setWidth  (double);
    void setLength (double);
    
    double getVolume ();
    double getSurfaceArea ();
    double getHeight();
    double getWidth();
    double getLength();
    
};

#endif /* Box_h */

/*
 
 Description: Project 5.b  Box.hpp (interface file)
 
 */
