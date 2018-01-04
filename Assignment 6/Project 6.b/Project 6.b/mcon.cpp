
#include<iostream>
#include<string>
using namespace std;

int binToDec(string);
string decToBin(int);

int main()
{
    
    string s = "10101101101110111101111";
    
    cout<<binToDec(s)<<endl;
    
    cout<<decToBin(44510)<<endl;
    
    return 0;
    
}
