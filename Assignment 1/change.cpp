/*

Author: Benjamin Fondell

Date: 1/12/2017

Description: Assignment 1 Project 1.d
 
            Program inputs any amount of cents between 0 and 100 and outputs exact change in USD coin. 
 */

//
#include <iostream>

using namespace std;

int main()

{

    int cents,
        quarters,
        dimes,
        nickels,
        pennies;
    
    
    cout << "Please enter an amount in cents less than a dollar. \n";
    cin >> cents;
    
    
    quarters = cents / 25;
    cents %= 25;                                                        // Using modulus applies the remainder  of change to
                                                                        // variable "cents".
    dimes = cents / 10;
    cents %= 10;
    
    nickels = cents / 5;
    cents %= 5;
    
    pennies = cents / 1;
    
    cout << "Your change will be. \n";
    cout << "Q: " << quarters << endl;
    cout << "D: " << dimes << endl;
    cout << "N: " << nickels << endl;
    cout << "P: " << pennies << endl;
    
    return 0;

}

/*

Description: Program inputs any amount of cents between 0 and 100 and outputs exact change in USD coin.

*/
