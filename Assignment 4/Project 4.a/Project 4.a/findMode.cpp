

/*
 
 Author: Benjamin Fondell
 
 Date: 1/31/2017
 
 Description: Project 4.a  findMode.cpp
 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findMode(int array[], int size)
{
    
    int number = array[0];
    int mode = number;
    int occurence = 0;
    int countMode=0;
    vector<int> result;
    
    
    sort(array, array + size);
    
    for(int count =0 ; count<size; count++)
    {
        if(array[count] == number)
        {
            ++occurence;
        }
        else
        {
            if (occurence > countMode)
            {
                countMode = occurence;
                mode = number;
                
            }
            
            occurence = 1;
            number = array[count];
        }
    }
    
   
    
    for(int count =0 ; count<size; count++)
    {
        if(array[count] == number)
        {
            ++occurence;
        }
        else
        {
            if (occurence == countMode)
            {
                
                result.push_back(number);
                
            }
            
            occurence = 1;
            number = array[count];
        }
    }
        
 
    
    if(result.empty())
        
    {
        for(int count =0 ; count<size; count++)
        {
            result.push_back(array[count]);
        }
    }
    
    std:: sort(result.begin(),result.end());
    return result;
    
}

/*
 
 Description: Project 4.a  findMode.cpp
 
 */
