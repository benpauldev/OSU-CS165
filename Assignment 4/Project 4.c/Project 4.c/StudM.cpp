# include <iostream>
#include <cmath>
#include <iomanip>
#include "Student.hpp"

using namespace std;

double stdDev(Student *stud[], int size);

int main()
{
    Student *o1 = new Student("Alice",75.52);
    Student *o2 = new Student("bob",87.29);
    Student *o3 = new Student("john",95.70);
    Student *o4 = new Student("henry",71.32);
    
    Student *stud[] = {o1,o2,o3,o4};
    
    double varSD = stdDev(stud, 4);
    
    cout<<setprecision(3)<<"Standard deviation: "<<varSD<<endl;
    
    cin.get();cin.get();
    
    return 0;
}


