
/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.a  ValSet.cpp (Implement file)
 
 */


#include "ValSet.hpp"
#include <stdio.h>
#include <memory>
#include <cstdlib>
#include <iostream>

using namespace std;

template <class T>
ValSet<T>:: ValSet()
{
    arraySize = 10;
    array = (T *) malloc(sizeof(T) * 10);
    numberOfValues = 0;
}


template <class T>
ValSet<T>::ValSet(const ValSet &obj)
{
    array = (T*)malloc (sizeof(T) * obj.arraySize);
   
    for (int count =0; count < sizeof(T)*obj.arraySize; count++)
    {
        array[count] = obj.array[count];
    }
    
    arraySize = obj.arraySize;
    numberOfValues = obj.numberOfValues;
    
}

template <class T>
ValSet<T>& ValSet<T> ::operator= (const ValSet &obj)
{
    numberOfValues = obj.numberOfValues;
    arraySize = obj.arraySize;
    array = new T[arraySize];
    
    for (int count = 0; count < arraySize; count++)
    {
        array[count] =obj.array[count];
        
    }
    
    return *this;
}

//Destructor free memory and set data members back to 0.

template <class T>
ValSet<T>:: ~ValSet<T>()
{
    
    
    if( array != NULL)
    {
        free(array);
    }
    arraySize=0;
    numberOfValues=0;
}

template <class T>
int ValSet<T>::size()
{
    return numberOfValues;
}

template <class T>
bool ValSet<T>:: isEmpty()
{
    if (numberOfValues == 0)
    {
        return 1;
    }
    else
        return 0;
}

template <class T>
bool ValSet<T>:: contains(T thisT)
{
    for (int count = 0; count < numberOfValues; count ++)
    {
        if( thisT == array[count])
        {
            return 1;
        }
    }
    return 0;
}

template <class T>
void ValSet<T>::add(const T &thisT)
{
    numberOfValues++;
    
    if(numberOfValues > arraySize)
    {
        arraySize *= 2;
        
        array = (T*)realloc(array,sizeof(T)*arraySize);
    }
    
    array[numberOfValues-1] = thisT;
}

template <class T>
void ValSet<T>:: remove(T thisT)
{
    int partition;
    
    if (contains(thisT) == 1)
    {
        for (int count =0; count < numberOfValues; count++)
        {
            if(thisT == array[count])
            {
                partition = count;
                break;
            }
            
        }
        
        //Cuts out one value of the array and shifts everything to the right of the partition accordingly
        for (int count = partition;count < numberOfValues; count++)
        {
            array[count] = array[count +1];
        }
        numberOfValues--;
        //removes one from the number of valuse in the array to avoid empty memory.
    }
}

template <class T>
vector<T> ValSet<T>::getAsVector()
{
    vector<T> vect(arraySize);
    
    copy(array, array + arraySize, vect.begin());
    
   /* for (int count =0; count < sizeof(vect); count++)
    {
        cout<<vect[count]<<endl;
    }
    */
    
    return vect;
}

template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;

/*
  Description: Project 8.b  ValSet.cpp (Implement file)
*/
