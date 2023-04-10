/**
* Program Name: fractionFirstLast.cpp
* Discussion:   File #2 -- Implementation File
*                 class FractionFirstLast;
* Written By:   Barry Balasingham
* Updated on:   2023/01/28
*/

// Header/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
using namespace std;

// Function Definitions

FractionBarryBalasingham::FractionBarryBalasingham() : num { 0 }, denom { 1 } {
    // cout << "\n  Calling FractionBarryBalasingham()!" << endl;
}

FractionBarryBalasingham::FractionBarryBalasingham(int n, int d) :
    num{ n / gcdBB(n, d) }, denom{ d / gcdBB(n, d) } {
}

FractionBarryBalasingham::FractionBarryBalasingham(
    const FractionBarryBalasingham& frRef) :
    num{ frRef.num }, denom{ frRef.denom } {
    // cout << "\n  Calling "
    //     "FractionBarryBalasingham(const FractionBarryBalasingham&)!"
    //     << endl;
}

FractionBarryBalasingham::~FractionBarryBalasingham() {
    // cout << "\n  Calling ~FractionBarryBalasingham()!" << endl;
}

int FractionBarryBalasingham::gcdBB(int arg1BB, int arg2BB) {
    int gcdBB = 1;
    int signBB = (arg1BB < 0) ? -1 : 1;

    arg1BB = (arg1BB < 0) ? -arg1BB : arg1BB;
    arg2BB = (arg2BB < 0) ? -arg2BB : arg2BB;

    for (int i = 2; i <= arg1BB && i <= arg2BB; i++)
        if (arg1BB % i == 0 && arg2BB % i == 0)
            gcdBB = i;

    return signBB * gcdBB;
}

int FractionBarryBalasingham::getDenomBB() const {
    return denom;
}

void FractionBarryBalasingham::setNumBB(int n) {
    int gcfBB;

    gcfBB = gcdBB(n, denom);

    num = n / gcfBB;
    denom /= gcfBB;
}

int FractionBarryBalasingham::getNumBB() const {
    return num;
}

void FractionBarryBalasingham::setDenomBB(int d) {
    int gcfBB;
    gcfBB = gcdBB(num, d);

    num /= gcfBB;
    denom = d / gcfBB;
}

void FractionBarryBalasingham::updateBB(int n, int d) {
    int gcfBB = gcdBB(n, d);

    num = n / gcfBB;
    denom = d / gcfBB;
}

void FractionBarryBalasingham::printBB() const {
    // cout << "\n  While ::printBB() is running!" << endl;

    cout << "\n          Address : " << this
        << "\n            num : " << num
        << "\n            denom : " << denom << flush;
}

int FractionBarryBalasingham::isPalindromeBB() const {
    int flagBB{ false };
    int tempNumBB { (num > 0) ? num : -1*num };
    int tempDenomBB { (denom > 0) ? denom : -1*denom };
    int numLengthBB { 0 };
    int denomLengthBB { 0 };
    int numArrBB[10] { };
    int denomArrBB[10] { };
    bool numPalindromeBB = true;
    bool denomPalindromeBB = true;

    while (tempNumBB > 0) {
        numArrBB[numLengthBB] = tempNumBB % 10;
        numLengthBB++;
        tempNumBB /= 10;
    }

    while (tempDenomBB > 0) {
        denomArrBB[denomLengthBB] = tempDenomBB % 10;
        denomLengthBB++;
        tempDenomBB /= 10;
    }

    for (size_t i = 0; i < numLengthBB / 2; i++) {
        if (numArrBB[i] != numArrBB[numLengthBB - (i + 1)]) {
            numPalindromeBB = false;
        }
    }

    for (size_t i = 0; i < denomLengthBB / 2; i++) {
        if (denomArrBB[i] != denomArrBB[denomLengthBB - (i + 1)]) {
            denomPalindromeBB = false;
        }
    }

    return (numPalindromeBB && denomPalindromeBB);
}
