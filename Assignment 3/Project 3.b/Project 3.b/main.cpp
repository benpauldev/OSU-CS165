//
//  main.cpp
//  Project 3.b
//
//  Created by Benjamin Fondell on 1/25/17.
//  Copyright © 2017 Benjamin Fondell. All rights reserved.
//
#include "BankAccount.hpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    BankAccount account1("Harry Potter", "k4637", 803.78);
    cout<< account1.getCustomerName();
       cout<< account1.getCustomerID();
    
    account1.withdraw(400.78);
    cout<<account1.getCustomerBalance();
    
    
    return 0;
}
