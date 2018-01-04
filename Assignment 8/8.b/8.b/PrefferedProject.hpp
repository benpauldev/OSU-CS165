

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  PrefferedProject.hpp
 
 */

#ifndef PrefferedProject_hpp
#define PrefferedProject_hpp

#include <stdio.h>
#include "CustomerProject.hpp"


class PrefferedProject : protected CustomerProject
{

    
public:
    
    PrefferedProject(double, double, double);
    virtual double billAmount();
    
};

#endif

/*

 Description: Project 8.b  PrefferedProject.hpp

*/
