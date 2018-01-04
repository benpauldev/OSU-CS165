

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.b  CustomerProject.hpp
 
 */

#ifndef CustomerProject_hpp
#define CustomerProject_hpp

#include <stdio.h>

class CustomerProject
{
protected:
    
    double  hours,
    materials,
    transportation;
    
public:
    CustomerProject();
    CustomerProject(double, double, double);
    void setHours(double);
    void setMaterials(double);
    void setTransportation(double);
    double getHours();
    double getMaterials();
    double getTransportation();
    virtual double billAmount()=0;
    
};

#endif 

/*
 Description: Project 8.b  CustomerProject.hpp
*/
