

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  CustomerProject.cpp

 */

#include "CustomerProject.hpp"

CustomerProject::CustomerProject()
{
    hours =0;
    materials = 0;
    transportation =0;
}

CustomerProject :: CustomerProject(double hrs, double mats, double transpo)
{
    setHours(hrs);
    setMaterials(mats);
    setTransportation(transpo);
    
}

void CustomerProject :: setHours(double H)
{
    hours = H;
}

void CustomerProject :: setMaterials(double M)
{
    materials = M;
}


void CustomerProject :: setTransportation(double T)
{
    transportation = T;
}

double CustomerProject:: getHours()
{
    return hours;
}

double CustomerProject:: getMaterials()
{
    return materials;
}

double CustomerProject:: getTransportation()
{
    return transportation;
}

/*
 Description: Project 8.b  CustomerProject.cpp
*/
