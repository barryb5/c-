/**
 * Program Name:    cis25Fall2022BarryBalasinghamHw4.cpp
 * Discussion:      Homework 4 Exercise #1
 * Written By:      Barry Balasingham
 * Email:           bbalasingham@gmail.com
 * Submitted Date:  2022/11/__
 * Graded By:       
 * Grader's Email:  
 * Return Date:     
 */

// Header/Include Files
#include <iostream>
#include "include/fraction.h"
using namespace std;

// Function Prototypes
void displayCodingStatementBarryBalasingham(void);
void displayClassInfoHw4BarryBalasingham(void);
void runMenuHw3BarryBalasingham(void);
Fraction* runMenuInit(void);

// Application Driver
int main() {
    displayCodingStatementBarryBalasingham();

    displayClassInfoHw4BarryBalasingham();
    
    runMenuHw3BarryBalasingham();
    
}

// Function Definitions
void displayCodingStatementBarryBalasingham() {
    cout << "We write code to manipulate data, which are provided by the"
        "\nuser, to produce the required outcome in the most efficient way!"

        "\n\nCIS 25 - C++ Programming"
        "\nLaney College"
        "\nBarry Balasingham" << endl;
}

void displayClassInfoHw4BarryBalasingham() {
    cout << "\nInformation --"
        "\n  Assignment:                   HW #4 Exercise #1"
        "\n  Implemented by:               Barry Balasingham"
        "\n  Required Submission Date:     2022/10/__"
        "\n  Actual Submission Date:       2022/10/__"
        "\n" << endl;
}

void runMenuHw3BarryBalasingham() {
    Fraction* ptrFraction = nullptr;
    bool run = true;
    do {
        cout << 
            "\n****************************************************"
            "\n*                    MENU - HW #4                  *"
            "\n*  1. Setting Up Fraction                          *"
            "\n*  2. isPalindromeBarryBalasingham()               *"
            "\n*  3. Using displayCommonPalindromeDigitBarryBalasingham()*"
            "\n*  4. Printing Current Fraction                    *"
            "\n*  5. Quit                                         *"
            "\n****************************************************"
            "\nSelect an option (use integer value only): "
            << flush;

        int input;
        cin >> input;

        if (input == 1) {

            if (nullptr != ptrFraction)
                delete ptrFraction;

            ptrFraction = runMenuInit();
        } else if (input == 2) {
            cout << "\n  Palindrome Option -\n";
            
            if (ptrFraction->isPalindrome()) {
                cout << "\n    The current Fraction is a Palindrome!";
            } else {
                cout << "\n    The current Fraction is not a Palindrome!";
            }
        } else if (input == 3) {
            
        } else if (input == 4) {
            ptrFraction->print();
        } else if (input == 5) {
            cout <<
                "\n  Having fun ...!"
            << endl;
            delete ptrFraction;
            run = false;
        } else {
            cout << "\n      WRONG OPTION!" << endl;
        }
        cout << flush;
    } while (run);   
}

Fraction* runMenuInit() {
    bool run = true;
    Fraction* f1 = nullptr;
    do {
        cout <<
            "\n  INITIALIZING Option -"
            "\n    Calling runMenuInit()!"
            "\n\n    **************************"
            "\n    * SubMENU - INITIALIZING *"
            "\n    *  1. Creating           *"
            "\n    *  2. Updating           *"
            "\n    *  3. Returning          *"
            "\n    **************************"\
            "\n    Select an option (integer only): ";
        
        int input;
        cin >> input;

        if (input == 1) {
            cout << 
                "\n\n      Creating 1 NEW Fraction object --"
                "\n        Calling create()!"
                "\n          Enter num: ";
            
            int num;
            cin >> num;

            cout <<
                "\n          Enter denom: ";
            
            int denom;
            cin >> denom;
            f1 = new Fraction(num, denom);

        } else if (input == 2) {
            if (f1 != nullptr) {
                cout << 
                    "\n\n      Creating 1 NEW Fraction object --"
                    "\n        Calling update()!"
                    "\n          Enter num: ";
                
                int num;
                cin >> num;

                cout <<
                    "\n          Enter denom: ";
                
                int denom;
                cin >> denom;

                f1->setNum(num);
                f1->setDenom(denom);
            } else {
                cout <<
                    "\n      Not a proper option as there is no Fraction!\n";
            }
        } else if (input == 3) {
            cout <<
                "\n      Returning to previous menu!\n";
            run = false;
            return f1;
        } else {
            cout <<
                "\n      WRONG OPTION!\n";
        }

        cout << flush;
    } while (run);

    return nullptr;    
}