//
//  main.cpp
//  Project 3.c
//
//  Created by Benjamin Fondell on 1/25/17.
//  Copyright © 2017 Benjamin Fondell. All rights reserved.
//

#include <iostream>
#include "LineSegment.hpp"
#include "Point.hpp"
#include <cmath>

using namespace std;

int main()
{
    Point P1(4.3, 7.52);
    Point P2(-17.0, 1.5);
    LineSegment lsl(P1, P2);
    double length = lsl.length();
    double slope = lsl.slope();
    
    
    cout<<length<<endl;
    cout<<slope<<endl;
    
    
    
}
