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

void createFractionBB(FractionBarryBalasingham*& frPtrRefBB) {
    int numBB;
    int denomBB;

    cout << "\n      While createFractionBB() is running!"
        << endl;

    cout << "\n      Enter an int for num: ";
    cin >> numBB;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomBB;
    } while (!denomBB);

    frPtrRefBB = new FractionBarryBalasingham{ numBB, denomBB };
}

void updateFractionBB(FractionBarryBalasingham*& frPtrRefBB) {
    int numBB;
    int denomBB;

    cout << "\n      While createFractionBB() is running!"
        << endl;

    cout << "\n      The information of the current Fraction -"
        << endl;
    frPtrRefBB->printBB();

    cout << "\n      Enter an int for num: ";
        cin >> numBB;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomBB;
    } while (!denomBB);

    frPtrRefBB->updateBB(numBB, denomBB);
}
