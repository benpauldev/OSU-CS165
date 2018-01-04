#include <iostream>
#include <iomanip>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PrefferedProject.hpp"

using namespace std;

int main()
{
    
    //cout<< fixed << showpoint <<setprecision(2);
    
    RegularProject customer(10, 200, 2000);
    PrefferedProject preffered(10, 200, 2000);
    
    cout<< "Your average fucker is going to pay "<<customer.billAmount()<<"for getting the chimney swept."<<endl;
    cout<< "If your a fancy person, you'll pay "<<preffered.billAmount()<<"."<<endl;
    
    
    
    return 0;
}
