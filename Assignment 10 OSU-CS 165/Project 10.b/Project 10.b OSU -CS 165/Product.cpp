
/*
 
 Author: Benjamin Fondell
 
 Date: 3/16/2017
 
 Description: Project 10.b  Product.cpp
 
 */
#include "Product.hpp"
#include<string>
#include<iostream>

using namespace std;

Product::Product(string code, string item, string descrip, double cost, int quantity)
{
    idCode = code;
    title = item;
    description = descrip;
    price = cost;
    quantityAvailable = quantity;
}

string Product::getIdCode()
{
    return idCode;
}

string Product::getTitle()
{
    return title;
}

string Product::getDescription()
{
    return description;
}

double Product::getPrice()
{
    if (quantityAvailable == 0)
    {
        return  0;
    }
    return price;
}

int Product::getQuantityAvailable()
{
    return quantityAvailable;
}

void Product::decreaseQuantity()
{
    quantityAvailable--;
    
    if (quantityAvailable<0)
    {
        quantityAvailable = 0;
    }
    
}

/*
 Description: Project 10.b  Product.cpp
 */
