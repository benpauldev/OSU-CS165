
/*
 
 Author: Benjamin Fondell
 
 Date: 3/5/2017
 
 Description: Project 9.a  StringList.hpp
 
 */
#ifndef StringList_hpp
#define StringList_hpp

#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class StringList
{
protected:
    
    struct ListNode
    {
        string value;
        ListNode *next;
        
        ListNode( string value1, ListNode *next1 = NULL)
        {
            value = value1;
            next = next1;
        }
        
        ListNode *head;
        
    };
   
    ListNode *head;
    
public:
    
    StringList();
    ~ StringList();
    StringList(const StringList &);
    void add(string);
    int positionOf (string);
    bool setNodeVal (int, string);
    vector <string> getAsVector();
    
};

#endif 

/*
 Description: Project 9.a  StringList.hpp
*/
