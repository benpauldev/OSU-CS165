/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description:Project 2.f This program creates a function with the number of steps in a hailstone sequence for a user input number.
 */

#include <iostream>

using namespace std;

int hailstone(int startNumber);

/* int main()

{
    int number;
    int steps;
    
    cout<< "Enter number.\n";
    cin>> number;
    
    steps = hailstone(number);
    
    
    return 0;
    
}
 */

int hailstone(int startNumber)

{
    int count=0;
    
    while (startNumber != 1)
    
    {
    
        if ((startNumber % 2) == 0)
        {
        startNumber /= 2;
    
        }
        else
        {
        
        startNumber = ((startNumber * 3)+1);
        
        }
        count++;
    }

    return count;
    
}





/*
 
 Description: This program creates a function with the number of steps in a hailstone sequence for a user input number.
 */

