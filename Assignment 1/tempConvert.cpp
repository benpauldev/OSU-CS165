/*

Author: Benjamin Fondell

Date: 1/12/2017

Description:    Assignment 1 Project 1.c
 
                Program to convert Celsius input to Farenheit output.

 */

//Converting celsius temperatures to farenheit.

#include <iostream>

using namespace std;

int main()

    {
    
    double farenheit;
    double celsius;
    
    cout << "Please enter a Celcius temperature. \n";
    cin >> celsius;
    
    farenheit = 32 + celsius * (9.0/5);                                           //The Literals, 9 and 5 must be converted
                                                                                  // to floating points to avoid truncating
    
    cout << "The equivalent Farenheit temperature is: \n" << farenheit << endl;
    
    return 0;
    
    }

/*

Description: The program accepts user input of Celsius temperature and outputs the equivalent temperature in farenheit.

*/
