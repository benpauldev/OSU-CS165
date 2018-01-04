
/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 10.b  Store.cpp
 
 */

#include <iostream>
#include "Store.hpp"
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

void Store::addProduct(Product* ppointer)
{
    inventory.push_back(ppointer);
}

void Store:: addMember(Customer* cpointer)
{
    members.push_back(cpointer);
}

Product* Store::getProductFromID(string ID)
{
    for (int i = 0; i < inventory.size(); i++)
    {
        
        if (inventory[i]->getIdCode() == ID)
        {
            return inventory[i];
        }
    }
    return NULL;
}

Customer* Store::getMemberFromID(string accountid)
{
    for (int i = 0; i < members.size(); i++)
    {
        
        if (members[i]->getAccountID() == accountid)
        {
            return members[i];
        }
    }
    return NULL;
}

void Store::productSearch(string search)
{
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"--------Search--------"<<endl<<endl;
    
    for (int x = 0; x < search.size()-1; x++)
    {
        search.at(x) = tolower(search.at(x));
    }
    
    for (int i = 0; i < inventory.size(); i++)
    {
        for (int j = 0; j < inventory[i]->getTitle().size()-1; j++)
        {
            inventory[i]->getTitle().at(j) = tolower(inventory[i]->getTitle().at(j));
        }
        
        for (int k = 0; k < inventory[i]->getDescription().size()-1; k++)
        {
            inventory[i]->getDescription().at(k) = tolower(inventory[i]->getDescription().at(k));
        }
        
       
        if (inventory[i]->getTitle().find(search) != string::npos || inventory[i]->getDescription().find(search) != string::npos)
        {
            cout<<inventory[i]->getTitle()<<endl;
            cout<<"ID code: "<<inventory[i]->getIdCode()<<endl;
            cout<<"Price: $"<<inventory[i]->getPrice()<<endl;
            cout<<inventory[i]->getDescription()<<endl;
            cout<<endl;
            
        }
    }
}

void Store::addProductToMemberCart(string product, string customer)
{
    if (getProductFromID(product) == NULL)
    {
        cout<<"Product #"<<product<<" not found."<<endl;
    }
    if (getMemberFromID(customer) == NULL)
    {
        cout<<"Member #"<<customer<<" not found."<<endl;
    }
    if (getMemberFromID(customer) != NULL && getProductFromID(product) != NULL &&
        getProductFromID(product)->getQuantityAvailable() >= 1)
    {
        getMemberFromID(customer)->addProductToCart(product);
    }
    else cout<<"Sorry, product #"<<product<<" is currently out of stock."<<endl<<endl;
}

void Store::checkOutMember(string member)
{
    cout<<fixed<<showpoint<<setprecision(2);
    
    cout<<"--------Checkout--------"<<endl<<endl;
    
    if (getMemberFromID(member) == NULL)
    {
        cout<<"Member #"<<member<<" not found."<<endl;
    }
    else
    {
        double  subtotal = 0.0,
                shippingcost = 0.0,
                finaltotal = 0.0;
        
        vector<string> temp = getMemberFromID(member)->getCart();
        
        for (int i = 0; i < temp.size() ; i++ )
        {
            
            if(getProductFromID(temp [i])->getQuantityAvailable() > 0)
            {
            cout<<getProductFromID(temp[i])->getTitle()<<endl;
            cout<<"Price: "<<getProductFromID(temp[i])->getPrice()<<endl;
            cout<<endl;
            }
            else
            {
                cout<<"Sorry, product #"<<getProductFromID(temp [i])->getIdCode()<<", "<<getProductFromID(temp [i])->getTitle()<<" is no longer available."<<endl<<endl;
            }
        }
        
        if (temp.size() > 0)
        {
            for (int i = 1; i < temp.size(); i++)
            {
            
                subtotal = getProductFromID(temp [i])->getPrice() + getProductFromID(temp [i-1])->getPrice();
            
            getProductFromID(temp[i])->decreaseQuantity();
            getProductFromID(temp[i-1])->decreaseQuantity();
                
            }
            cout<<"Subtotal: "<<subtotal<<endl;
        
        
            if (getMemberFromID(member)->isPremiumMember())
            {
                cout<<"Shipping Cost: $"<<shippingcost<<endl;
            }
            else
            {
                shippingcost = (subtotal/100)*7;
                cout<<"Shipping Cost: $"<<shippingcost<<endl;
            }
            
            finaltotal = subtotal + shippingcost;
            
            cout<<"Total: $"<<finaltotal<<endl;
            cout<<endl;
        }
        else cout<<"There are no items in the cart."<<endl<<endl;
  
    }
}

/*
  Description: Project 10.b  Store.cpp
 */

