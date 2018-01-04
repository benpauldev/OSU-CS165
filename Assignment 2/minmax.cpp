
/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description:Project 2.a This program finds the minimum and maximum values of a list of user specified integers.
 */

#include <iostream>

using namespace std;

int main()

{
    int howMany;
    int count = 0;
    int number,
    min = number,
    max = 0;
    
    cout << "How many numbers would you like to enter.\n";
    cin >> howMany;
    
    cout << "Please enter " << howMany <<" integers." <<endl;
    
    
    
    do
    {
        cin >> number;
        
        
        if (number > max)
            max = number;
        if (number <= min)
            min = number;
        
        count++;
    }
    while (count < howMany);
    
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    
    
}







/*
 
 Description:  This program finds the minimum and maximum values of a list of user specified integers.
 
 
 */
