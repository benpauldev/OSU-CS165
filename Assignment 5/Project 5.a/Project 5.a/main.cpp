
#include <iostream>
#include <string>




using namespace std;

void stringSort(string [], int);
bool stringCompare(const string,const string);



int main()
{
string arr[] = {"Zebra", "Zebra", "Zeppelelin", "zebra", "Zebra"};

stringSort(arr,5);
 
    int i=0;
    for(i=0;i<5;i++)
    cout<<i+1<<"."<<arr[i]<<"\t";


return 0;

}
