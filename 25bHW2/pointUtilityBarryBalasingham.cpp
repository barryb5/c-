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
#include "fractionUtilityBarryBalasingham.h"

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
    cin >> yNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> yDenomBB;
    } while (!yDenomBB);

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
    cin >> yNumBB;

    do {
        cout << "         Enter an int for denom: ";
        cin >> yDenomBB;
    } while (!yDenomBB);

    pPtrRef2BB->getXBB()->updateBB(xNumBB, xDenomBB);
    pPtrRef2BB->getYBB()->updateBB(yNumBB, yDenomBB);
    return;
}

void displayPointBB(PointBarryBalasingham* pPtrBB, int point) {
    cout << "\n    Displaying Point #" << point << "!"
        << "\n\n      Address: " << pPtrBB
        << "\n        For x-coordinate as Fraction:";
    pPtrBB->getXBB()->printBB();
    cout << "\n        For y-coordinate as Fraction:";
    pPtrBB->getYBB()->printBB();
    cout << endl;
}

void alignmentBB(PointBarryBalasingham* pPtr1BB, PointBarryBalasingham* pPtr2BB) {
    FractionBarryBalasingham* y1BB = pPtr1BB->getYBB();
    FractionBarryBalasingham* y2BB = pPtr2BB->getYBB();
    FractionBarryBalasingham* x1BB = pPtr1BB->getYBB();
    FractionBarryBalasingham* x2BB = pPtr2BB->getYBB();
    
    cout << "\n      Alighnment Confirmation:"
        <<"\n\n        Horizontal Alignment: "
        << fractionEqualBB(y1BB, y2BB)
        <<"\n        Vertical Alignment: "
        << fractionEqualBB(x1BB, x2BB)
        << endl;
}

void quadrantBB(PointBarryBalasingham* pPtrRefBB) {
    FractionBarryBalasingham* yBB = pPtrRefBB->getYBB();
    FractionBarryBalasingham* xBB = pPtrRefBB->getXBB();

    if (isPositiveBB(yBB)) {
        if (isPositiveBB(xBB)) {
            cout << "I" << endl;
        } else {
            cout << "II" << endl;
        }
    } else {
        if (isPositiveBB(xBB)) {
            cout << "IV" << endl;
        } else {
            cout << "III" << endl;
        }
    }        
}

void midpointBB(PointBarryBalasingham* pPtr1BB, PointBarryBalasingham* pPtr2BB) {
    FractionBarryBalasingham* y1BB = pPtr1BB->getYBB();
    FractionBarryBalasingham* y2BB = pPtr2BB->getYBB();
    FractionBarryBalasingham* x1BB = pPtr1BB->getYBB();
    FractionBarryBalasingham* x2BB = pPtr2BB->getYBB();
    cout << "\n      Midpoint Confirmation:"
        << "\n\n        Fraction From x-coordinate";
    
    FractionBarryBalasingham midpointBB = addFractionBB(x1BB, x2BB);
    midpointBB.setDenomBB(midpointBB.getDenomBB() * 2);
    midpointBB.printBB();

    cout << "\n\n        Fraction From y-coordinate";

    midpointBB = addFractionBB(y1BB, y2BB);
    midpointBB.setDenomBB(midpointBB.getDenomBB() * 2);
    midpointBB.printBB();
    cout << endl;
}

void areaOfRectangleBB(PointBarryBalasingham* pPtr1BB, PointBarryBalasingham* pPtr2BB) {

    FractionBarryBalasingham lengthBB = subtractFractionBB(pPtr1BB->getXBB(), pPtr2BB->getXBB()); 
    FractionBarryBalasingham heightBB = subtractFractionBB(pPtr1BB->getXBB(), pPtr2BB->getXBB()); 

    FractionBarryBalasingham areaBB = multiplyFractionBB(&lengthBB, &heightBB);
    
    cout << "\n      Area Confirmation:"
        << "\n        Fraction Area:"
        << "\n          Num: "
        << areaBB.getNumBB()
        << "\n          Denom: "
        << areaBB.getDenomBB();
}

void isPlaindromeBB(PointBarryBalasingham* pPtr1BB, PointBarryBalasingham* pPtr2BB) {
    FractionBarryBalasingham* smallestBB = nullptr;
    FractionBarryBalasingham* largestBB = nullptr;

    if (pPtr1BB->getXBB()->isPalindromeBB()) {
        pPtr1BB->getXBB()->printBB();

        if (smallestBB == nullptr) {
            smallestBB = pPtr1BB->getXBB();
        }
        if (largestBB == nullptr) {
            largestBB = pPtr1BB->getXBB();
        }
    }
    if (pPtr1BB->getYBB()->isPalindromeBB()) {
        pPtr1BB->getYBB()->printBB();

        if (smallestBB == nullptr) {
            smallestBB = pPtr1BB->getYBB();
        } else if (!smallerFractionBB(smallestBB, pPtr1BB->getYBB())){
            smallestBB = pPtr1BB->getYBB();
        }

        if (largestBB == nullptr) {
            largestBB = pPtr1BB->getYBB();
        } else if (!largerFractionBB(largestBB, pPtr1BB->getYBB())) {
            largestBB = pPtr1BB->getYBB();
        }
    }
    if (pPtr2BB->getXBB()->isPalindromeBB()) {
        pPtr2BB->getXBB()->printBB();

        if (smallestBB == nullptr) {
            smallestBB = pPtr2BB->getXBB();
        } else if (!smallerFractionBB(smallestBB, pPtr2BB->getXBB())){
            smallestBB = pPtr2BB->getXBB();
        }

        if (largestBB == nullptr) {
            largestBB = pPtr2BB->getXBB();
        } else if (!largerFractionBB(largestBB, pPtr2BB->getXBB())) {
            largestBB = pPtr2BB->getXBB();
        }

    }
    if (pPtr2BB->getYBB()->isPalindromeBB()) {
        pPtr2BB->getYBB()->printBB();

        if (smallestBB == nullptr) {
            smallestBB = pPtr2BB->getYBB();
        } else if (!smallerFractionBB(smallestBB, pPtr2BB->getYBB())){
            smallestBB = pPtr2BB->getYBB();
        }

        if (largestBB == nullptr) {
            largestBB = pPtr2BB->getYBB();
        } else if (!largerFractionBB(largestBB, pPtr2BB->getYBB())) {
            largestBB = pPtr2BB->getYBB();
        }
    }

    if (nullptr != largestBB) {
        cout << "\nThe largest Palindrome Fraction:";
        largestBB->printBB();
    }

    if (nullptr != smallestBB) {
        cout << "\nThe smallest Palindrome Fraction:";
        smallestBB->printBB();
    }

}
