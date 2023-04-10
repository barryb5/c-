/**
* Program Name: pointBarryBalasingham.h
* Discussion:   File #5
*                 Declaration/Specification file
*                 class Point;
*               Note!
*                   1. You are NOT ALLOWED to add any member
*                      data to the class.
* Written By:   Barry Balasingham
* Updated on:   2023/04/08
*/

#ifndef POINTBARRYBALASINGHAM_H
#define POINTBARRYBALASINGHAM_H

// Header/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
using namespace std;

// Class Specification
class PointBarryBalasingham {
public:
 PointBarryBalasingham(int, int, int, int);
 PointBarryBalasingham(const FractionBarryBalasingham&, const FractionBarryBalasingham&);
 PointBarryBalasingham(const PointBarryBalasingham&);
 PointBarryBalasingham();

 ~PointBarryBalasingham();
 // Member Functions

 FractionBarryBalasingham* getXBB();
 FractionBarryBalasingham* getYBB();
private:
 FractionBarryBalasingham* xPtr;
 FractionBarryBalasingham* yPtr;
};

#endif  