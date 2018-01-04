

/*
 
 Author: Benjamin Fondell
 
 Date: 1/31/2017
 
 Description: Project 4.c  stdDev.cpp
 
 */

# include <iostream>
#include <cmath>
#include <iomanip>
#include "Student.hpp"

using namespace std;

// double stdDev(Student *stud[], int size);
             
//int main()
              
              
              
              
              
              
              
              
double stdDev(Student *stud[], int size)
{
    int count;
    double  total = 0.0,
            standardDev = 0.0,
            average;
    
    for (count = 0 ; count < size; count ++)
    {
        cout<<stud[count]->getName()<<"\t"<<stud[count]->getScore()<<endl;
        total += stud[count]->getScore();
    }

    average = total/size;
    
    for(count = 0; count < size; count++)
    {
    
    standardDev += pow(stud[count]->getScore()-average, 2);
    
    }
                             
    return sqrt(standardDev/size);

}

/*
 Description: Project 4.c  stdDev.cpp
*/
