
/*
 
 Author: Benjamin Fondell
 
 Date: 3/5/2017
 
 Description: Project 9.b  postfixValue.cpp
 
 */

#include <stdio.h>
#include <stack>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

double postfixEval(char expression[])
{
    stack<double> pile;
    
    char* ptr = strtok(expression, " ");
    
    while (ptr != NULL)
    {
        if (isdigit(ptr[0]))
        {
            pile.push(atof(ptr));
        }
        else
        {
            double second = pile.top();
            pile.pop();
            double first = pile.top();
            pile.pop();
            
            double operation = 0;
            
            switch (ptr [0])
            {
                case '+':
                    operation = first + second;
                    break;
                
                case '-':
                    operation = first - second;
                    break;
                
                case '*':
                    operation = first * second;
                    break;
                    
                case '/':
                    operation = first/second;
                    break;
            }
            
            pile.push(operation);
        }
        
        ptr = strtok(NULL, " ");
    }
    
    return pile.top();
}

/*int main()
{
    char expression[] = "25 12 7 - 2 * /";
    cout << postfixEval(expression) << endl;
    return 0;
}
*/

/*
Description: Project 9.b  postfixValue.cpp
*/
