
#include "ValSet.hpp"
#include <iostream>
#include "ValSet.cpp"
#include <vector>


int main()
{
   
    
    ValSet<char> mySet;
    mySet.add('A');
    mySet.add('j');
    mySet.add('&');
    mySet.add('j');
    mySet.add('#');
    
    int size = mySet.size();
    ValSet<char> mySet2 = mySet;
    bool check1 = mySet2.contains('&');
    bool check2 = mySet2.contains('j');
   
    cout<<size<<endl;
    cout<<check1<<endl;
    cout<<check2<<endl;
    mySet.getAsVector();
    
   
    
   
    

    

    
    
    
    
    return 0;
}
