
/*
Author: Benjamin Fondell

Date: 1/19/2017

 Description: Project 2.b  This program writes a file. Then asks the user to open the file. If opened the program reads and sums the value before saving the sum to a file named "sum.txt". If not opened the program displays the message, "could not access file."
 
*/

#include <iostream>

#include <string>
#include <fstream>



using namespace std;

int main()

{
    
    
    
    ofstream outputFile;
    outputFile.open("numbers.txt");
    
    outputFile << "12 \n";
    outputFile << "16 \n";
    outputFile << "18 \n";
    outputFile << "20 \n";
    outputFile << "22 \n";
    outputFile << "24 \n";
 
    outputFile.close();
    
    string fileName;
    ifstream inputFile;
    int numValues;
    double value;
    
    double total = 0;
    
    cout<<"Open file.: " << endl;
    cin>> fileName;
    
    if (fileName == "numbers.txt")
    {
    
        inputFile.open(fileName);
        
        while(inputFile >> value)
        {
            numValues++;
            cout << value << endl;
            total += value;
        }
            
        
        inputFile.close();
    
        cout<<"Sum :"<<total <<endl;
        
        ofstream outputFile;
        outputFile.open("sum.text");
    
        outputFile << total;
        
        outputFile.close();
    }
    else
    {
        cout << "could not access file." << endl;
    }
    
    
    return 0;
    
    

}

/*  
 
 Description: This program writes a file. Then asks the user to open the file. If opened the program reads and sums the value before saving the sum to a file named "sum.txt". If not opened the program displays the message, "could not access file."
 
 */

