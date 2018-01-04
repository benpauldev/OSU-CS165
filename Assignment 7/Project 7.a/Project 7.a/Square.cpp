
/*
 
 Author: Benjamin Fondell
 
 Date: 2/21/2017
 
 Description: Project 7.a  Square.cpp (implement file)
 
 */

#include "Square.hpp"
#include <iostream>

using namespace std;

// Passes two equal doubles for the equal sides of square.
Square :: Square (double side) : Rectangle(side, side){}

// If either set function is called length and width are set to the double that is passed
void Square:: setLength(double l)
{
    Rectangle::setLength(l);
    Rectangle::setWidth(l);
}

void Square:: setWidth(double w)
{
    Rectangle::setLength(w);
    Rectangle::setWidth(w);
}

/*

 Description: Project 7.a  Square.cpp (implement file)

*/
