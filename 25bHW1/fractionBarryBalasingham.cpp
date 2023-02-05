/** 
 * Program Name: fractionBarryBalasingham.cpp 
 * Discussion:   File #2 -- Implementation File 
 *                 class FractionBarryBalasingham; 
 * Written By:   Barry Balasingham  
 * Updated on:   2023/01/28 
 */ 
 
// Header/Include Files 
#include <iostream>  
#include "fractionBarryBalasingham.h" 
using namespace std; 
 
// Function Definitions  
 
FractionBarryBalasingham::FractionBarryBalasingham() : num { nullptr }, denom { nullptr } {
    cout << "\n  Calling FractionBarryBalasingham()!" << endl;
}

FractionBarryBalasingham::FractionBarryBalasingham(int n, int d) :
    num{ n / gcdBB(n, d) }, denom{ d / gcdBB(n, d) } {
    cout << "\n  Calling FractionBarryBalasingham(int, int)!"
        << endl;
}

FractionBarryBalasingham::FractionBarryBalasingham(
    const FractionBarryBalasingham& frRef) :
    num{ frRef.num }, denom{ frRef.denom } {
    cout << "\n  Calling "
        "FractionBarryBalasingham(const FractionBarryBalasingham&)!"
        << endl;
}

FractionBarryBalasingham::~FractionBarryBalasingham() {
    cout << "\n  Calling ~FractionBarryBalasingham()!" << endl;
}

int FractionBarryBalasingham::gcdBB(int arg1, int arg2) {
    int gcd = 1;
    int sign = (arg2 < 0) ? -1 : 1;

    cout << "\n  While ::gcdBB() is running!" << endl;

    arg1 = (arg1 < 0) ? -arg1 : arg1;
    arg2 = (arg2 < 0) ? -arg2 : arg2;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return sign * gcd;
}

int FractionBarryBalasingham::getDenomBB() const {
    cout << "\n  While ::getDenomBB() is running!" << endl;

    return denom;
}

void FractionBarryBalasingham::setNumBB(int n) {
    int gcf;

    cout << "\n  While ::setNumBB() is running!" << endl;

    gcf = gcdBB(n, denom);

    num = n / gcf;
    denom /= gcf;
}

int FractionBarryBalasingham::getNumBB() const {
    cout << "\n  While ::getNumBB() is running!" << endl;

    return num;
}

void FractionBarryBalasingham::setDenomBB(int d) {
    int gcf;

    cout << "\n  While ::setDenomBB() is running!" << endl;

    gcf = gcdBB(num, d);

    num /= gcf;
    denom = d / gcf;
}

void FractionBarryBalasingham::updateBB(int n, int d) {
    int gcf = gcdBB(n, d);

    cout << "\n  While ::updateBB() is running!" << endl;

    num = n / gcf;
    denom = d / gcf;
}

void FractionBarryBalasingham::printBB() const {
    cout << "\n  While ::printBB() is running!" << endl;

    cout << "\n    Address : " << this
        << "\n      num : " << num
        << "\n      denom : " << denom << endl;
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

    while (tempNumBB % 10 > 0) {
        numArrBB[numLengthBB] = tempNumBB % 10;
        numLengthBB++;
        tempNumBB /= 10;
    }

    while (tempDenomBB % 10 > 0) {
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

    return (numPalindromeBB && denomPalindromeBB)
}

//     - You will have to update the names of  
//       member functions properly. 
 
//     - You MUST provide function definitions for 
//       all member functions in File #1 above. 
 