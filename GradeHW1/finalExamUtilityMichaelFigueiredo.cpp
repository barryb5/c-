/**
 * Program Name: finalExamUtilityMichaelFigueiredo.cpp
 * Discussion:   Specification File
 * Written By:   Michael Figueiredo
 * Date:         2023/02/16
 */

#include <iostream> 
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
#include "finalExamUtilityMichaelFigueiredo.h"
using namespace std;


void displayClassInfoMF() {

    cout <<
        "\nCIS 25B - Fun C++ Programming"
        "\nLaney College"
        "\nMichael Figueiredo\n"
        "\nHomework Information - - "
        "\n  Assignement:                HW #1"
        "\n  Implemented by:             MichaelFigueiredo"
        "\n  Required Submission Date:   2023/02/10"
        "\n  Actual Submission Date:     2023/02/16"
        "\n"
        "\nWe write code to manipulate data, which are\n"
        "provided by the user,to produce the\n"
        "required outcome in the most efficient way!" << endl;
}

void runMenuFinalExamMF() {
    int optionMF;
    FractionMichaelFigueiredo* frPtrMF{ nullptr };

    do {
        cout << "\n********************************************"
                "\n*            MENU - Final Exam A           *"
                "\n* 1. Initializing (1 Fraction object)      *"
                "\n* 2. Calling member isPalindromeMF()       *"
                "\n* 3. Calling displayPalindromeInfoMF()     *"
                "\n* 4. Caling member printMF()               *"
                "\n* 5. Quit                                  *"
                "\n********************************************"
                "\nSelect an option (use integer value only): ";
        cin >> optionMF;

        switch (optionMF) {
        case 1:
            cout << "\n  Calling initSubMenuMF()!" << endl;

            initSubMenuMF(frPtrMF);

            break;
        case 2:
            cout << "\n  Calling isPalindromeMF()!" << endl;

            if (frPtrMF != nullptr) {

                if ((frPtrMF)->isPalindromeMF() == 1) {
                    cout << "\n  The Fraction at " << frPtrMF << " is a Palindrome!" << endl;

                }
                else {
                    cout << "\n The number is NOT a Palindrome!" << endl;
                }
            }
            break;
        case 3:
            cout << "\n  Calling displayPalindromeInfoMF()!" << endl;

            if (frPtrMF != nullptr) {

                if ((frPtrMF)->isPalindromeMF() == 1) {
                    cout << "\n    The Fraction at " << frPtrMF << " is a Palindrome.\n" << endl;

                }
                else {
                    cout << "\n   The number is NOT a Palindrome." << endl;
                }

                displayPalindromeInfoMF(frPtrMF);
            }
            break;
        case 4:
            cout << "\n  Calling printMF()!" << endl;

            frPtrMF->printMF();

            break;
        case 5:
            cout << "\n  Clean Up!" << endl;

            delete frPtrMF;
            frPtrMF = nullptr;

            cout << "\n  Have a nice session!" << endl;

            break;
        default:
            cout << "\n  Wrong Option!" << endl;
        }
    } while (optionMF != 5);
}

void initSubMenuMF(FractionMichaelFigueiredo*& frPtrRefMF) {
    int optionMF;

    do {
        cout << "\n  *************************************"
                "\n  *    Sub-Menu -- initSubMenuMF()    *"
                "\n  * 1. Creating 1 Fraction            *"
                "\n  * 2. Updating the existing Fraction *"
                "\n  * 3. Returning                      *"
                "\n  *************************************"
                "\n  Enter an option: ";
        cin >> optionMF;

        switch (optionMF) {
        case 1:
            cout << "\n    To call createFractionMF()!"
                << endl;

            if (frPtrRefMF) {
                cout << "\n    Update or return!" << endl;
            }
            else {
                createFractionMF(frPtrRefMF);
            }

            break;
        case 2:
            cout << "\n    To call updateFractionMF()!"
                << endl;

            if (frPtrRefMF) {
                updateFractionMF(frPtrRefMF);
            }
            else {
                cout << "\n    Create or return!" << endl;
            }

            break;
        case 3:
            cout << "\n    Returning to previous menu ..."
                << endl;

            break;
        default:  cout << "\n    Wrong Option!" << endl;
        }
    } while (optionMF != 3);
}

void displayPalindromeInfoMF(const FractionMichaelFigueiredo* frPtrMF) {

    int evenCountNumMF = 0;
    int evenCountDenomMF = 0;
    int digitCountAryNumMF[10] = { 0 };
    int digitCountAryDenomMF[10] = { 0 };
    int frPtrNumMF = frPtrMF->getNumMF();
    int numLengthMF = frPtrMF->getNumMF();
    int denomLengthMF = frPtrMF->getDenomMF();
    int frPtrDenomMF = frPtrMF->getDenomMF();
    int numParMF = 0;
    int denomParMF = 0;
    bool seenEvenDigit[10] = { false };

    if (frPtrMF->isPalindromeMF()) {

        while (numLengthMF != 0) {
            numLengthMF /= 10;
            numParMF++;
        }

        for (int i = 0; i < numParMF; i++) {
            int currentDigit = frPtrNumMF % 10;
            digitCountAryNumMF[currentDigit]++;
            if (currentDigit % 2 == 0 && !seenEvenDigit[currentDigit]) {
                evenCountNumMF++;
                seenEvenDigit[currentDigit] = true;
                    }
             
                    frPtrNumMF /= 10;
                }
        
        while (denomLengthMF != 0) {
            denomLengthMF /= 10;
            denomParMF++;
        }

        for (int i = 0; i < denomParMF; i++) {
            int currentDigit = frPtrDenomMF % 10;
            digitCountAryDenomMF[currentDigit]++;
            if (currentDigit % 2 == 0 && !seenEvenDigit[currentDigit]) {
                evenCountDenomMF++;
                seenEvenDigit[currentDigit] = true;
            }
            frPtrDenomMF /= 10;
        }
            
        cout << "    There is/are " << evenCountDenomMF + evenCountNumMF << " uncommon even digit(s).\n" << endl;

        cout << "    The uncommon even digit of" << endl;
        for (int i = 0; i <= 9; i++) {
            if (digitCountAryDenomMF[i] > 0 && i % 2 == 0) {
                cout << "      " << i << " is found " << digitCountAryDenomMF[i] << " time(s) in the Denominator of denom" << endl;
            }
        }

        for (int i = 0; i <= 9; i++) {
            if (digitCountAryNumMF[i] > 0 && i % 2 == 0) {
                cout << "      " << i << " is found "  << digitCountAryNumMF[i] << " time(s) in the Numerator of num" << endl;
            }
        }
    }

    else {
        cout << "Fraction is not a Palindrome!" << endl;
    }
}