
/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  PrefferedProject.cpp
 
 */


#include "PrefferedProject.hpp"

PrefferedProject::PrefferedProject (double H, double M, double T) : CustomerProject ( H, M, T){}

double PrefferedProject::billAmount()
{
    
    materials = (materials/100)*85;
    
    transportation = (transportation/100)*90;
    
    if(hours<100)
    {
    return materials + transportation + 80 * hours;
    }
    else
    {
        return materials + transportation + 80*100;
    }
};

/*

 Description: Project 8.b  PrefferedProject.cpp

*/
