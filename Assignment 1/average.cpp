/*

Author: Benjamin Fondell

Date: 1/12/2017

Description:    Assignment 1 Project 1.b
            
                Program for finding the average of five numbers.

*/

#include <iostream>
#include <string>

using namespace std;

int main()

{
    double number1, number2, number3, number4, number5;
    double totalNumber;
    double average;
    
    cout<<"Please enter five numbers." << endl;
    
    cin >>number1;
    cin >>number2;
    cin >>number3;
    cin >>number4;
    cin >>number5;
    
    totalNumber = number1 + number2 + number3 + number4 + number5;
    
    average = totalNumber / 5;
    
    cout << "The average of those numbers is: \n";
    cout << average << endl;

    return 0;
}

/*

Description: Program asks  for five input numbers from user. Numbers are totaled and divided by five producing the average.

*/
