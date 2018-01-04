/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description:Project 2.e This program accepts three integers from user and then outputs them in order from least to greatest.
 

 */

#include <iostream>

using namespace std;

void smallSort(int &num1, int &num2, int &num3);

// int main()

{
    int a,
        b,
        c;
    
    cout << "Enter three numbers. \n";
    cin >> a;
    cin >> b;
    cin >> c;
    
    smallSort(a,b,c);
    
    cout << a <<" " << b <<  " " << c <<endl;

    return 0;
}

void smallSort(int &num1, int &num2, int &num3)
{
    
    
    if (num1 > num2)
    {
        int temp;
        
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 > num3)
    {
        int temp;
        
        temp = num1;
        num1 = num3;
        num3 = temp;
        
    }
    if (num2 > num3)
    {
        int temp;
        
        temp = num2;
        num2 = num3;
        num2 = temp;
    }

}








/*
 
 Description: This program accepts three integers from user and then outputs them in order from least to greatest.

*/
