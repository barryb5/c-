/** 
 * Program Name: finalExamUtilityBarryBalasingham.cpp 
 * Discussion:   Specification File 
 * Written By:   Barry Balasingham  
 * Update on:    2023/01/28 
 */ 
 
// Hear/Include Files 
#include <iostream>  
#include "fractionBarryBalasingham.h" 
#include "fractionUtilityBarryBalasingham.h" 
#include "finalExamUtilityBarryBalasingham.h" 
using namespace std; 
 
void displayClassInfoBB() {
    cout << "CIS 25B - Fun C++ Programming"
        << "\nLaney College"
        << "\nBarry Balasingham"
        << "\n\nHomeworkInformation Information --"
        << "\n  Assignment:               HW1"
        << "\n  Implemented by:           Barry Balasingham"
        << "\n  Required Submission Date: 2023/2/10"
        << "\n  Actual Submission Date: 2023/2/5"
        << "\n\nWe write code to manipulate data, which are"
        << "\nprovided by the user(s), to produce the"
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
            cout << "\n  Have a nice session!" << endl;
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
    int tempNumBB { frPtrBB->getNumBB() };
    int tempDenomBB { frPtrBB->getDenomBB() };
    int numEvensBB[5] { 0 };
    int denomEvensBB[5] { 0 };
    int totalBB { 0 };

    if (frPtrBB != nullptr && frPtrBB->isPalindromeBB()) {
        cout << "\n    The Fraction at "
            << frPtrBB
            << " is a Palindrome."
            << "\n\n    There is/are ";

        do {
            if ((tempNumBB % 10) % 2 == 0) {
                numEvensBB[tempNumBB % 10]++;
                if (numEvensBB[tempNumBB % 10] == 1) {
                    totalBB++;
                }
            }
            tempNumBB = tempNumBB / 10;
        }
        while (tempNumBB > 0);

        while (tempDenomBB > 0) {
            if ((tempDenomBB % 10) % 2 == 0) {
                denomEvensBB[tempDenomBB % 10]++;
                if (denomEvensBB[tempDenomBB % 10] == 1) {
                    totalBB++;
                }
            }
            tempDenomBB = tempDenomBB / 10;
        }

        cout << totalBB
            << " uncommon even digit(s)."
            << "\n\n    The uncommon even digit of";

        for (size_t i = 0; i < 5; i++) {
            if (denomEvensBB[i] > 0) {
                cout << "\n      "
                    << i
                    << " is found in the Denominator of denom";
            }

            if (numEvensBB[i] > 0) {
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


// Function Definitions 
//     - You will have to update the names of  
//       member functions properly. 
 
//     - You MUST provide function definitions for 
//       all member functions in File #1 above. 