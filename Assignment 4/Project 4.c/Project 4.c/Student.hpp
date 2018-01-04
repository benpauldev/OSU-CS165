

/*
 
 Author: Benjamin Fondell
 
 Date: 1/31/2017
 
 Description: Project 4.c  Student.hpp
 
 */
#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

using namespace std;


class Student
{
    
private:
    string name;
    double score;
    
public:
   
    Student(string studentName, double studentScore);
    
    string getName();
    double getScore();
};
    
#endif // STUDENT_HPP

/*
 Description: Project 4.c  Student.hpp

*/
