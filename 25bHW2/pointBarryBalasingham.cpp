/**
* Program Name: pointBarryBalasingham.cpp
* Discussion:   File #6
*                 Implementation File
*               Note!
*                   1. You are NOT ALLOWED to add any member
*                      data to the class.
* Written By:   Barry Balasingham
* Updated on:   2023/04/08
*/

// Header/Include Files
#include <iostream>
#include "pointBarryBalasingham.h"
using namespace std;

PointBarryBalasingham::PointBarryBalasingham() : 
    xPtr { new FractionBarryBalasingham() }, 
    yPtr { new FractionBarryBalasingham() } {
}

PointBarryBalasingham::PointBarryBalasingham(int xNum, int xDenom, int yNum, int yDenom) : 
    xPtr { new FractionBarryBalasingham(xNum, xDenom) },
    yPtr { new FractionBarryBalasingham(yNum, yDenom) } {
        
}

PointBarryBalasingham::PointBarryBalasingham(const FractionBarryBalasingham& x, const FractionBarryBalasingham& y) : 
    xPtr { new FractionBarryBalasingham(x) },
    yPtr { new FractionBarryBalasingham(y) } {
}

PointBarryBalasingham::PointBarryBalasingham(const PointBarryBalasingham& point) : 
    xPtr { new FractionBarryBalasingham(*point.xPtr) },
    yPtr { new FractionBarryBalasingham(*point.yPtr) } {
}

PointBarryBalasingham::~PointBarryBalasingham() {
    delete xPtr;
    delete yPtr;

    xPtr = nullptr;
    yPtr = nullptr;
}

FractionBarryBalasingham* PointBarryBalasingham::getXBB() {
    return xPtr;
}

FractionBarryBalasingham* PointBarryBalasingham::getYBB() {
    return yPtr;
}