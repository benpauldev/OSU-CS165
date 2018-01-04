
/*
 
 Author: Benjamin Fondell
 
 Date: 3/5/2017
 
 Description: Project 9.a  StringList.cpp
 
 */

#include "StringList.hpp"
#include <string>
#include <vector>
#include <iostream>

using namespace std;


StringList :: StringList()
{
     head = NULL;
}

StringList :: StringList(const StringList& obj)
{
    head = NULL;
    
    ListNode *lptr = obj.head;
    
    while (lptr != NULL)
    {
        add(lptr->value);
        lptr = lptr->next;
    }
}

StringList :: ~StringList()
{
    ListNode *lptr = head;
    
    while (lptr != NULL)
    {
        ListNode *garbage = lptr;
        lptr = lptr->next;
        delete garbage;
    }
}

void StringList :: add(string parameter)
{
    if (head == NULL)
    {
        head = new ListNode(parameter);
    }
    else
    {
        ListNode *lptr = head;
        while (lptr->next != NULL)
        {
            lptr = lptr->next;
        }
        lptr->next = new ListNode(parameter);
    }
}

int StringList :: positionOf(string parameter)
{
    ListNode *position = head;
    int place = 0;
    
    while (position != NULL)
    {
        if (position->value == parameter)
        {
            return place;
        }
        else
        {
            position = position->next;
            place++;
        }
    }
    
    return -1;
}


bool StringList :: setNodeVal(int at, string parameter)
{
    ListNode *position = head;
    int place = 0;
    
    while (position != NULL)
    {
        if (place == at)
        {
            position->value = parameter;
            return true;
        }
       
        place++;
        position = position->next;
    
    }
    
    return false;
}

vector<string> StringList :: getAsVector()
{
   
    vector<string> stringvector;
    StringList obj;
    ListNode *position = head;
    
    while (position != NULL)
    {
        stringvector.push_back(position->value);
        position = position->next;
    }
    
    return stringvector;
}

/*
 Description: Project 9.a  StringList.cpp
*/


















