

/*
 
 Author: Benjamin Fondell
 
 Date: 2/15/2017
 
 Description: Project 6.a  summer.cpp
 
 */

#include <iostream>

using namespace std;

double summer(double[], int);

double summer(double array[],int size)
{
    
    if (size > 0)
    {
        return array[size-1] + summer(array, size -1);
    }
    else
    {
        return 0;
    }
}

/*
 Description: Project 6.a  summer.cpp
*/
