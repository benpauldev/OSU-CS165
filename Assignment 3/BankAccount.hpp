
/*
 
 Author: Benjamin Fondell
 
 Date: 1/25/2017
 
 Description: Project 3.b  BankAccount.hpp (interface file)
 
 */

#include <string>
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

using namespace std;


class BankAccount
{
    private:
    
        string customerName,
               customerID;
        double customerBalance;
    
    public:
    
        BankAccount (string name, string ID, double balance)
        {
            customerName = name;
            customerID = ID;
            customerBalance = balance;
            
        }
    
        string  getCustomerName();
        string  getCustomerID();
        double  getCustomerBalance();
    
        void    withdraw(double);
        void    deposit(double);
};

#endif 

/*
 
 Description: Project 3.b  BankAccount.hpp (interface file)
 
 */
