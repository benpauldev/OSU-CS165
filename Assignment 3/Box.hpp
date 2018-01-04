/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.a  Box.hpp (interface file)
 
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
    
        Box (double, double, double);
    
        bool setHeight (double);
        bool setWidth  (double);
        bool setLength (double);
        double getVolume ();
        double getSurfaceArea ();

};

#endif /* Box_h */

/*

 Description: Project 3.a  Box.hpp (interface file)

*/
