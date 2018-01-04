
/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description:Project 2.d  This program recieves user input of time an object falls. The program then outputs the distance the opject fell in meters.
 */

#include <iostream>
#include <cmath>

using namespace std;
double fallDistance( double fallTime);

/*int main()


{
    double distance;
    double seconds;
    
    
    cout << "Input Falling Time. \n";
    cin >> seconds;
    
    
    distance = fallDistance(seconds);
    
    
    
    cout << "The distance an object drops in " << seconds << " is " << distance << " meters.\n";
    
    return 0;
}
*/
double fallDistance(double fallTime)
{
    double result;
    
    result = ((1.0/2.0)*(9.8))*pow(fallTime,2);
    
    return result;
}

/*
 
 Description: This program recieves user input of time an object falls. The program then outputs the distance the opject fell in meters.  
 */
