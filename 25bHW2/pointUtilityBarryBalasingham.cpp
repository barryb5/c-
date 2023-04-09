/**
* Program Name: pointUtilityBarryBalasingham.cpp
* Discussion:   File #8
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
#include "pointUtilityBarryBalasingham.h"

using namespace std;

// Your function definitions here

void createPointBB(PointBarryBalasingham*& pPtrRef1BB, PointBarryBalasingham*& pPtrRef2BB) {
    int xNumBB;
    int xDenomBB;
    int yNumBB;
    int yDenomBB;

    cout << "\n    Creating Point #1!"
        << "\n      For x-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    cout << "      For y-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> yNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> yDenomBB;
    } while (!yDenomBB);

    pPtrRef1BB = new PointBarryBalasingham(xNumBB, xDenomBB, yNumBB, yDenomBB);
    cout << "\n" << pPtrRef1BB->getXBB()->getNumBB() << "/"<< pPtrRef1BB->getXBB()->getDenomBB();

    cout << "\n    Creating Point #2!"
        << "\n      For x-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    cout << "      For y-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> yNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> yDenomBB;
    } while (!yDenomBB);

    pPtrRef2BB = new PointBarryBalasingham(xNumBB, xDenomBB, yNumBB, yDenomBB);

    return;
}

void updatePointBB(PointBarryBalasingham*& pPtrRef1BB, PointBarryBalasingham*& pPtrRef2BB) {
    int xNumBB;
    int xDenomBB;
    int yNumBB;
    int yDenomBB;

    cout << "\n    Updating Point #1!"
        << "\n      For x-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    cout << "      For y-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    pPtrRef1BB->getXBB()->updateBB(xNumBB, xDenomBB);
    pPtrRef1BB->getYBB()->updateBB(yNumBB, yDenomBB);

    cout << "\n    Updating Point #2!"
        << "\n      For x-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    cout << "      For y-coordinate as Fraction"
        << "\n         Enter an int for num: ";
    cin >> xNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> xDenomBB;
    } while (!xDenomBB);

    pPtrRef2BB->getXBB()->updateBB(xNumBB, xDenomBB);
    pPtrRef2BB->getYBB()->updateBB(yNumBB, yDenomBB);
    return;
}

void displayPointBB(PointBarryBalasingham*& pPtrRefBB, int point) {
    cout << "\n    Displaying Point #" << point << "!"
        << "\n\n      Address: " << pPtrRefBB
        << "\n        For x-coordinate as Fraction:";
        pPtrRefBB->getXBB()->printBB();
        pPtrRefBB->getYBB()->printBB();

    // cout << "\n" << pPtrRefBB->getXBB()->getNumBB() << "/"<< pPtrRefBB->getXBB()->getDenomBB();

}