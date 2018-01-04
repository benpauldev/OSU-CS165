
/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description:Project 2.d
 */

#include <iostream>

using namespace std;

double fallDistance( int fallTime);


int main()

{
    int seconds;
    
    cout << "Input Falling Time. \n";
    cin >>seconds;
    
    fallDistance(seconds);
    
    cout << "The distance an object drops in " << seconds << " is" << distance << "meters.\n";
    
}

double fallDistance(int fallTime)
{
    int distance;
    double gravity = 9.8;
    
    distance = (1/2)*gravity*(fallTime*fallTime);
    
    return distance;
}
