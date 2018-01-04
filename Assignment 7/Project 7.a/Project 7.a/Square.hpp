
/*
 
 Author: Benjamin Fondell
 
 Date: 2/21/2017
 
 Description: Project 7.a  Square.hpp (Header file)
 
 */

#ifndef Square_hpp
#define Square_hpp

#include <iostream>
#include <stdio.h>
#include "Rectangle.hpp"


// Deriv          Base
//_______       __________
class Square : public Rectangle
{

public:
    Square ();
    Square (double);
    void setLength (double);
    void setWidth (double);
   
    
};

#endif 

/*

 Description: Project 7.a  Square.hpp (Header file)


*/
