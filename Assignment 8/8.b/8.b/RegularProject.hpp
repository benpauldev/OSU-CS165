

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  RegularProject.hpp
 
 */

#ifndef RegularProject_hpp
#define RegularProject_hpp

#include <stdio.h>
#include "CustomerProject.hpp"

class RegularProject : protected CustomerProject
{

public:
    
    RegularProject(double H, double M, double T);
    virtual double billAmount();
    
};

#endif

/*

 Description: Project 8.b  RegularProject.hpp

*/
