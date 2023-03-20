/**
 * Program Name: fractionUtilityFirstLast.cpp
 * Discussion:   Implementation File
 *               Supportive Functions
 * Written By:   Michael Figueiredo
 * Date:         2023/02/16
 */

#include <iostream> 
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
using namespace std;

void createFractionMF(FractionMichaelFigueiredo*& frPtrRefMF) {
    int numMF;
    int denomMF;

    cout << "\n      While createFractionMF() is running!"
        << endl;

    cout << "\n      Enter an int for num: ";
    cin >> numMF;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomMF;
    } while (!denomMF);

    frPtrRefMF = new FractionMichaelFigueiredo{ numMF, denomMF };
}

void updateFractionMF(FractionMichaelFigueiredo*& frPtrRefMF) {
    int numMF;
    int denomMF;

    cout << "\n      While createFractionMF() is running!"
        << endl;

    cout << "\n      The information of the current Fraction -"
        << endl;
    frPtrRefMF->printMF();

    cout << "\n      Enter an int for num: ";
    cin >> numMF;

    do {
        cout << "\n      Enter a non-zero int for denom: ";
        cin >> denomMF;
    } while (!denomMF);

    frPtrRefMF->updateMF(numMF, denomMF);
}