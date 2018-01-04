
/*
 
 Author: Benjamin Fondell
 
 Date: 2/15/2017
 
 Description: Project 6.b  converter.cpp
 
 */

#include<iostream>
#include<string>
using namespace std;


int binToDec(string);
string decToBin(int);

string decToBin(int number)
{
    
    if(number == 0)
    {
        return "0";
    }
    if(number == 1)
    {
        return "1";
    }
    else
    {
        
        return decToBin(number/2)+decToBin(number%2);
    }
}

int binToDec(string binary)
{
    string strcopy;
    long length;
    int    cast;
    char position;
    
    length = binary.size();
    
    if (length == 0)
    {
        return 0;
    }
    
    position = binary.at(length-1);
    
    cast = position - '0';
    
    strcopy = binary.substr(0, length-1);
    
    return binToDec(strcopy) * 2 + cast;
}

/*
 Description: Project 6.b  converter.cpp
*/
