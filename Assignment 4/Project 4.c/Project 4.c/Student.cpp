


/*
 
 Author: Benjamin Fondell
 
 Date: 1/31/2017
 
 Description: Project 4.c  Student.cpp
 
 */

#include "Student.hpp"
#include <string>


using namespace std;

Student::Student(string studentName, double studentScore)
{
    name = studentName;
    score = studentScore;
}

string Student :: getName()
{
    return name;
}

double Student:: getScore()
{
    return score;
}
/*
 Description: Project 4.c  Student.cpp
*/
