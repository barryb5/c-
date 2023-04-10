/**
* Program Name: fractionUtilityBarryBalasingham.cpp
* Discussion:   File #4
*                 Implementation File
*                 Supportive Functions
* Written By:   Barry Balasingham
* Updated on:   2023/04/08
*/

// Hear/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
#include "fractionUtilityBarryBalasingham.h"
using namespace std;

// Function Definitions

string fractionEqualBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    if (frPtr1BB->getNumBB() == frPtr2BB->getNumBB() && frPtr1BB->getDenomBB() == frPtr2BB->getDenomBB()) {
        return "Yes";
    }
    return "No";
}

bool isPositiveBB(FractionBarryBalasingham* frPtrRefBB) {
    if ((frPtrRefBB->getNumBB() > 0 && frPtrRefBB->getDenomBB() < 0) 
        || (frPtrRefBB->getNumBB() < 0 && frPtrRefBB->getDenomBB() > 0)) {
        return false;
    }
    return true;
}

FractionBarryBalasingham addFractionBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    int denomBB = frPtr1BB->getDenomBB() * frPtr2BB->getDenomBB();
    int numBB = (frPtr1BB->getNumBB() * frPtr2BB->getDenomBB()) + (frPtr2BB->getNumBB() * frPtr1BB->getDenomBB());

    return FractionBarryBalasingham(numBB, denomBB);
}

FractionBarryBalasingham subtractFractionBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    int denomBB = frPtr1BB->getDenomBB() * frPtr2BB->getDenomBB();
    int numBB = (frPtr1BB->getNumBB() * frPtr2BB->getDenomBB()) - (frPtr2BB->getNumBB() * frPtr1BB->getDenomBB());

    return FractionBarryBalasingham(numBB, denomBB);
}

FractionBarryBalasingham multiplyFractionBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    int numBB = frPtr1BB->getNumBB() * frPtr2BB->getNumBB();
    int denomBB = (frPtr1BB->getDenomBB() * frPtr2BB->getDenomBB());

    return FractionBarryBalasingham(numBB, denomBB);
}

bool smallerFractionBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {

    bool pos1BB = isPositiveBB(frPtr1BB);
    bool pos2BB = isPositiveBB(frPtr2BB);

    bool smallerBB = false;
    if ((pos1BB && pos2BB) || (!pos1BB && !pos2BB))
        smallerBB = (frPtr1BB->getNumBB() * frPtr2BB->getDenomBB()) < (frPtr2BB->getNumBB() * frPtr1BB->getDenomBB());
    else if (pos1BB && !pos2BB)
        smallerBB = false;
    else if (!pos1BB && pos2BB)
        smallerBB = true;

    return smallerBB;
}

bool largerFractionBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    bool pos1BB = isPositiveBB(frPtr1BB);
    bool pos2BB = isPositiveBB(frPtr2BB);

    bool largerBB = false;
    if ((pos1BB && pos2BB) || (!pos1BB && !pos2BB))
        largerBB = (frPtr1BB->getNumBB() * frPtr2BB->getDenomBB()) > (frPtr2BB->getNumBB() * frPtr1BB->getDenomBB());
    else if (pos1BB && !pos2BB)
        largerBB = true;
    else if (!pos1BB && pos2BB)
        largerBB = false;

    return largerBB;
}

