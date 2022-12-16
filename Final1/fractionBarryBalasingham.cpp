/**
 * Program Name: fractionBarryBalasingham.cpp
 * Discussion:   File #2 -- Implementation File
 *                 class FractionBarryBalasingham;
 * Written By:   Barry Balasingham 
 * Updated on:   2022/12/15
 */

// Header/Include Files
#include <iostream> 
#include "fractionBarryBalasingham.h"
using namespace std;

// Function Definitions

FractionBarryBalasingham::FractionBarryBalasingham() : num{ 0 }, denom{ 1 } {
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
    int flag{ false };
    int tempN = (num > 0) ? num : -1*num;
    int tempD = (denom > 0) ? denom : -1*denom;
    bool numPalindrome = true;
    bool denomPalindrome = true;

    // cout << "\n  While ::isPalindromeBB() is running!" << endl;

    // Insert here : Your Code from your HW #4
    const char* numArr = to_string(tempN).c_str();
    size_t sz = std::to_string(tempN).length();
    size_t i = 0;
    while (i < sz/2) {
        if (numArr[i] == numArr[sz-1-i]) {
            ++i;
        } else {
            numPalindrome = false;
        }
    }

    const char* denomArr = to_string(tempD).c_str();
    sz = std::to_string(tempD).length();

    i = 0;
    while (i < sz/2) {
        if (denomArr[i] == denomArr[sz-1-i])
            ++i;
        else
            denomPalindrome = false;
    }


    if (numPalindrome && denomPalindrome)
        return true;
    return false;
}

// No other member functions are allowed here!
