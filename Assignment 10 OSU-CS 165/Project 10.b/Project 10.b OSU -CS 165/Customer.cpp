
/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 10.b  Customer.cpp
 
 */

#include "Customer.hpp"
#include <string>


using namespace std;

Customer::Customer(string customerName, string accountnum, bool premium)
{
    name = customerName;
    accountID = accountnum;
    premiumMember = premium;
}

string Customer:: getAccountID()
{
    return accountID;
}

vector<string> Customer::getCart()
{
    return cart;
}

bool Customer::isPremiumMember()
{
    return premiumMember;
}

void Customer::addProductToCart(string product)
{
    cart.push_back(product);
}

void Customer::emptyCart()
{
    cart.clear();
}

/*
 
 Description: Project 10.b  Customer.cpp
 */
