

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  RegularProject.cpp
 
 */

#include "RegularProject.hpp"

RegularProject::RegularProject (double H, double M, double T) : CustomerProject ( H, M, T){}

double RegularProject :: billAmount()
{
    int rate = 80.00;
    
    return (hours * rate) + materials + transportation;
}

/*
 
 Description: Project 8.b  RegularProject.cpp
 
*/
