/**
 * Program Name: finalExamUtilityBarryBalasingham.cpp
 * Discussion:   Specification File
 * Written By:   Barry Balasingham 
 * Update on:   2022/12/15
 */
// Header/Include Files
#include <iostream>
#include "fractionBarryBalasingham.h"
#include "fractionUtilityBarryBalasingham.h"
#include "finalExamUtilityBarryBalasingham.h"
using namespace std;

// Function Definitions
void displayClassInfoBB() {
    cout << "CIS 25 - C++ Programming"
        << "\nLaney College"
        << "\nBarry Balasingham"
        << "\n\nFinal Exam Information --"
        << "\n  Implemented by: Barry Balasingham"
        << "\n  Submitted Date: 2022/12/14 by 10:00pm"
        << "\n\nWe write code to manipulate data, which are"
        << "\nprovided by the user, to produce the"
        << "\nrequired outcome in the most efficient way!"
        << endl;
}

void runMenuFinalExamBB() {
    int optionBB;
    FractionBarryBalasingham* frPtrBB{ nullptr };

    do {
        cout << "\n****************************************"
            "\n*            MENU - Final Exam A       *"
            "\n* 1. Initializing (1 Fraction object)  *"
            "\n* 2. Calling member isPalindromeBB()   *"
            "\n* 3. Calling displayPalindromeInfoBB() *"
            "\n* 4. Caling member printBB()           *"
            "\n* 5. Quit                              *"
            "\n****************************************"
            "\nSelect an option (use integer value only): ";
        cin >> optionBB;
        switch (optionBB) {
        case 1:
            cout << "\n  Calling initSubMenuBB()!" << endl;
            initSubMenuBB(frPtrBB);
            break;
        case 2:
            cout << "\n  Calling isPalindromeBB()!" << endl;
            // Your Code/Work Here
            if (nullptr != frPtrBB && frPtrBB->isPalindromeBB()) {
                cout << "\n  The Fraction at "
                    << frPtrBB
                    << " is a Palindrome!" << endl;
            } else {
                cout << "\n  The Fraction at "
                    << frPtrBB
                    << " is not a Palindrome!" << endl;
            }

            break;
        case 3:
            cout << "\n  Calling displayPalindromeInfoBB()!"
                << endl;
            // Your Code/Work Here
            displayPalindromeInfoBB(frPtrBB);
            break;
        case 4:
            cout << "\n  Calling printBB()!\n" << endl;
            frPtrBB->printBB();
            // Your Code/Work Here
            break;
        case 5:
            cout << "\n  Clean Up!" << endl;
            delete frPtrBB;
            frPtrBB = nullptr;
            cout << "\n  Have a nice Holiday Season!" << endl;
            break;
        default:
            cout << "\n  Wrong Option!" << endl;
        }
    } while (optionBB != 5);
}

void initSubMenuBB(FractionBarryBalasingham*& frPtrRefBB) {
    int optionBB;

    do {
        cout << "\n  *************************************"
            "\n  *    Sub-Menu -- initSubMenuBB()    *"
            "\n  * 1. Creating 1 Fraction            *"
            "\n  * 2. Updating the existing Fraction *"
            "\n  * 3. Returning                      *"
            "\n  *************************************"
            "\n  Enter an option: ";
        cin >> optionBB;
        switch (optionBB) {
        case 1:
            cout << "\n    To call createFractionBB()!"
                << endl;
            if (frPtrRefBB) {
                cout << "\n    Update or return!" << endl;
            } else {
                createFractionBB(frPtrRefBB);
            }
            break;
        case 2:
            cout << "\n    To call updateFractionBB()!"
                << endl;
            if (frPtrRefBB) {
                updateFractionBB(frPtrRefBB);
            } else {
                cout << "\n    Create or return!" << endl;
            }
            break;
        case 3:
            cout << "\n    Returning to previous menu ..."
                << endl;
            break;
        default:
            cout << "\n    Wrong Option!" << endl;
            break;
        }
    } while (optionBB != 3);
}

void displayPalindromeInfoBB(const FractionBarryBalasingham* frPtrBB) {
    int tempNum { frPtrBB->getNumBB() };
    int tempDenom { frPtrBB->getDenomBB() };
    int numEvens[5] { 0 };
    int denomEvens[5] { 0 };
    int total { 0 };

    if (frPtrBB != nullptr && frPtrBB->isPalindromeBB()) {
        cout << "\n    The Fraction at "
            << frPtrBB
            << " is a Palindrome."
            << "\n\n    There is/are ";

        do {
            if ((tempNum % 10) % 2 == 0) {
                numEvens[tempNum % 10]++;
                if (numEvens[tempNum % 10] == 1) {
                    total++;
                }
            }
            tempNum = tempNum / 10;
        }
        while (tempNum > 0);

        while (tempDenom > 0) {
            if ((tempDenom % 10) % 2 == 0) {
                denomEvens[tempDenom % 10]++;
                if (denomEvens[tempDenom % 10] == 1) {
                    total++;
                }
            }
            tempDenom = tempDenom / 10;
        }

        cout << total
            << " uncommon even digit(s)."
            << "\n\n    The uncommon even digit of";

        for (size_t i = 0; i < 5; i++) {
            if (denomEvens[i] > 0) {
                cout << "\n      "
                    << i
                    << " is found in the Denominator of denom";
            }

            if (numEvens[i] > 0) {
                cout << "\n      "
                    << i
                    << " is found in the Numerator of num";
            }
        }
        cout << endl;
    } else {
        cout << "\n  The Fraction at "
                    << frPtrBB
                    << " is not a Palindrome!" << endl;
    }
}
