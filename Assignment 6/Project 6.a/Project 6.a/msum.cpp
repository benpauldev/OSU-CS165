

#include <iostream>

using namespace std;

const int size = 6;

double summer(double[], int);

int main()
{
    
    
    double array[size] = {10.5,20.5,15.2,25.2,5.75,5.0};

    cout<<summer(array,size);
    
    return 0;
}
