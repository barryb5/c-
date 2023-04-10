/**
* Program Name: fractionUtilityBarryBalasingham.cpp
* Discussion:   File #4
*                 Implementation File
*                 Supportive Functions
* Written By:   Barry Balasingham
* Updated on:   2023/03/07
*/

// Hear/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
#include "fractionUtilityBarryBalasingham.h"
using namespace std;

// Function Definitions

int fractionEqualBB(FractionBarryBalasingham* frPtr1BB, FractionBarryBalasingham* frPtr2BB) {
    if (frPtr1BB->getNumBB() == frPtr2BB->getNumBB() && frPtr1BB->getDenomBB() == frPtr2BB->getDenomBB()) {
        return 1;
    }
    return 0;
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