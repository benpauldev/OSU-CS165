#include <iostream>
#include <vector>
#include <string>

#include "StringList.hpp"
using namespace std;

int main() {
    
    StringList list;
    
    list.add("Tom");
    list.add("Dick");
    list.add("Harry");
    
    vector<string> vect;
    
    vect = list.getAsVector();
    
    for (int count = 0; count < vect.size(); count++)
    {
        cout<<vect[count]<<endl;
    }
    
    return 0;
  
}
