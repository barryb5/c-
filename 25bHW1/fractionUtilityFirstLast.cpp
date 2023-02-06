/** 
 * Program Name: fractionUtilityBarryBalasingham.cpp 
 * Discussion:   Implementation File 
 *                 Supportive Functions 
 * Written By:   Barry Balasingham 
 * Updated on:   2022/12/15 
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

//     - You will have to update the names of  
//       member functions properly. 
  
 
//     - You MUST provide function definitions for 
//       all member functions in File #1 above. 