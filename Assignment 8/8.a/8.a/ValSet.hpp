

/*
 
 Author: Benjamin Fondell
 
 Date: 3/1/2017
 
 Description: Project 8.a  ValSet.hpp (Header file)
 
 */

#ifndef ValSet_hpp
#define ValSet_hpp

#include <stdio.h>
#include <memory>
#include <cstdlib>
#include <vector>

using namespace std;

template <class T>
class ValSet
{

private:
    
    T * array;
    int arraySize;
    int numberOfValues;
    vector<T> vect;
    
public:

    ValSet<T> ();
    ValSet<T> (const ValSet &);
    ValSet& operator= (const ValSet &);
    ~ValSet<T> ();
    int size();
    bool isEmpty();
    bool contains(T);
    void add(const T &);
    void remove(T);
    vector<T> getAsVector();
    
    
};

#endif /* ValSet_hpp */

/*

Description: Project 8.a  ValSet.hpp (Header file)

*/
