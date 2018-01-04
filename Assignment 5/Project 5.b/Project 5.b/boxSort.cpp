/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 5.b  boxSort.cpp
 
 */

#include "Box.hpp"
#include <iostream>
using namespace std;




void boxSort(Box boxes[], int size)
{
  
    
    bool madeAswap;
    
    do
    {	madeAswap = false;
        for (int count = 0; count < (size - 1); count++)
        {
             if (boxes[count].getVolume()<boxes[count+1].getVolume())
             {
                 double tempL=boxes[count].getLength();
                 double tempW=boxes[count].getWidth();
                 double tempH=boxes[count].getHeight();
                 
                 boxes[count].setLength(boxes[count+1].getLength());
                 boxes[count].setWidth(boxes[count+1].getWidth());
                 boxes[count].setHeight(boxes[count+1].getHeight());
                 
                 
                 boxes[count+1].setLength(tempL);
                 boxes[count+1].setWidth(tempW);
                 boxes[count+1].setHeight(tempH);
                 
                 madeAswap = true;
            }
        }
    } while (madeAswap);
}

/*
 
 Description: Project 5.b  boxSort.cpp
 
 */
