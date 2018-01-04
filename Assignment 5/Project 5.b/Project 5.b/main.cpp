#include<iostream>
#include "Box.hpp"
using namespace std;
//function prototype
void boxSort( Box box[], int size);
void print( Box box[], int size);

int main()
{
    
   
    const int size=6;
    
    Box box[size]={Box(1,7,10),Box(23,20,15),Box(15,4,2),Box(1,1,1),Box(100,16,10),Box(12,38,51)};
    
    boxSort(box, 6);
    
    for(int index=0;index<size;index++)
    {
        cout<<box[index].getVolume()<<endl;
    }
    
return 0;
}

