
/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 5.a  stringSort.cpp
 
 */
#include <iostream>
#include <string>
#include <cctype>



using namespace std;

void stringSort(string [], int);
bool stringCompare(const string,const string);


void stringSort(string words[], int size)
{
    int startScan, minIndex;
    string minValue;
    
    for (startScan = 0; startScan < (size -1); startScan ++)
    {
        minIndex = startScan;
        minValue = words[startScan];
        
        for (int index = startScan+1; index < size; index++)
        {
            if (stringCompare(words[index], minValue))
            {
                minValue = words[index];
                minIndex = index;
            }
        }
        
        words[minIndex] = words[startScan];
        words[startScan] = minValue;
        
    }
    
}

bool stringCompare(string one, string two)
{
    
    int count;
    
    for(count=0; count < one.size() && count < two.size(); count++)
   {
       if(toupper(one[count]) < toupper(two[count]))
       {
           return true;
       }
       else if (toupper(two[count]) < toupper(one[count]))
       {
            return false;
       }
            
   }
    
    if (count == one.size() - 1) return false;
    else return true;
}
        
/*
 
 Description: Project 5.a  stringSort.cpp
 
 */
