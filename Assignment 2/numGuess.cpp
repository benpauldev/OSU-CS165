/*
 Author: Benjamin Fondell
 
 Date: 1/19/2017
 
 Description: Project 2.c This program asks for a number and then has a player try to guess that number. It tells the player if they are high or low and how many guesses it took to get the right number.
 
 */


#include <iostream>
using namespace std;

int main()

{
    int guessNumber;
    int number;
    int guessCount = 0;
    
    
    cout << "Enter the number for the player to guess.\n";
    cin >> number;
    
    do
    {
        cout << "Enter your guess.\n";
        cin >> guessNumber;
        guessCount++;
        
        while (guessNumber < number)
        {
            cout << "Too low - Try again.\n";
            break;
        }
    
        while (guessNumber > number)
        {
            cout << "Too hign _ Try again.\n";
            break;
        }
    
    }while (guessNumber != number);
    
    cout << "You guessed it in " << guessCount <<" tries.\n";
    
    return 0;
}

/*
 
 Description: This program asks for a number and then has a player try to guess that number. It tells the player if they are high or low and how many guesses it took to get the right number.
 

 
*/

