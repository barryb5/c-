/**
* Program Name: fractionUtilityFirstLast.h
* Discussion:   File #3
*                   Specification File or Header/Include File
*                   Supportive Functions
* Written By:   Barry Balasingham
* Updated on:   2023/03/07
*/

#ifndef FRACTIONUTILITYBARRYBALASINGHAM_H
#define FRACTIONUTILITYBARRYBALASINGHAM_H

// Header/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
using namespace std;

// Function Prototypes

// Required Functions

string fractionEqualBB(FractionBarryBalasingham*, FractionBarryBalasingham*);
bool isPositiveBB(FractionBarryBalasingham*);
FractionBarryBalasingham addFractionBB(FractionBarryBalasingham*, FractionBarryBalasingham*);
FractionBarryBalasingham subtractFractionBB(FractionBarryBalasingham*, FractionBarryBalasingham*);
FractionBarryBalasingham multiplyFractionBB(FractionBarryBalasingham*, FractionBarryBalasingham*);
bool smallerFractionBB(FractionBarryBalasingham*, FractionBarryBalasingham*);
bool largerFractionBB(FractionBarryBalasingham*, FractionBarryBalasingham*);

// Other functions are allowed here!
// You will have to update the names of member functions properly.

#endif
