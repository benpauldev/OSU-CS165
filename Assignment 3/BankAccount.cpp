
/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.b  BankAccount.hpp (Implement file)
 
 */

#include "BankAccount.hpp"
#include <string>

using namespace std;

string BankAccount::getCustomerName()
{

    return customerName ;
    
}

string BankAccount::getCustomerID()
{
    
    return customerID ;
    
}

double BankAccount::getCustomerBalance()
{
    
    return customerBalance ;
    
}

void BankAccount::withdraw(double amount)
{
    customerBalance -= amount;
}

void BankAccount::deposit(double amount)
{
    customerBalance += amount;
}

/*
 
 Description: Project 3.b  BankAccount.hpp (implement file)
 
 */
