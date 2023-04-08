/**
* Program Name: pointBarryBalasingham.cpp
* Discussion:   File #6
*                 Implementation File
*               Note!
*                   1. You are NOT ALLOWED to add any member
*                      data to the class.
* Written By:   Barry Balasingham
* Updated on:   2023/03/07
*/

// Header/Include Files
#include <iostream>
#include "pointBarryBalasingham.h"
using namespace std;

PointBarryBalasingham::PointBarryBalasingham() : 
    xPtr { new FractionBarryBalasingham() }, 
    yPtr { new FractionBarryBalasingham() } {
    cout << "\n  Calling PointBarryBalasingham()!" << endl;
}

PointBarryBalasingham::PointBarryBalasingham(int xNum, int xDenom, int yNum, int yDenom) : 
    xPtr { new FractionBarryBalasingham(xNum, yNum) },
    yPtr { new FractionBarryBalasingham(yNum, yDenom) } {
    cout << "\n  Calling PointBarryBalasingham()!" << endl;
}

PointBarryBalasingham::PointBarryBalasingham(FractionBarryBalasingham& x, FractionBarryBalasingham& y) : 
    xPtr { new FractionBarryBalasingham(x) },
    yPtr { new FractionBarryBalasingham(y) } {
    cout << "\n  Calling PointBarryBalasingham()!" << endl;
}

PointBarryBalasingham::PointBarryBalasingham(PointBarryBalasingham& point) : 
    xPtr { new FractionBarryBalasingham(*point.getXBB()->getNumBB(), *point.getXBB()->getDenomBB())  },
    yPtr { new FractionBarryBalasingham(*point.getYBB()->getNumBB(), *point.getYBB()->getDenomBB()) } {
    cout << "\n  Calling PointBarryBalasingham()!" << endl;
}

PointBarryBalasingham::~PointBarryBalasingham() {
    delete xPtr;
    delete yPtr;

    xPtr = nullptr;
    yPtr = nullptr;

    cout << "\n  Calling ~PointBarryBalasingham()!" << endl;
}

FractionBarryBalasingham* PointBarryBalasingham::getXBB() {
    return xPtr;
}

FractionBarryBalasingham* PointBarryBalasingham::getYBB() {
    return yPtr;
}