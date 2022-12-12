/**
 * Program Name:   utility.cpp
 * Discussion:     Application with Fraction
 * Written By:     Barry Balasingham 
 * Date:           2022/12/__
 */

// Hear/Include Files
#include <iostream> 
#include "../include/fraction.h"
#include "../include/utility.h"
using namespace std;

// Function Definitions
void runMenuHw4() {
    bool run = true;
    int input;
    Fraction* ptrFraction{ nullptr };

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

        cin >> input;

        switch (input) {
            case 1:
                if (nullptr != ptrFraction)
                    delete ptrFraction;

                cout <<
                    "\n  INITIALIZING Option -"
                    "\n    Calling runMenuInit()!\n";

                initSubMenu(ptrFraction);
                break;
            case 2:
                cout << "\n  Palindrome Option -\n";

                if (nullptr != ptrFraction && ptrFraction->isPalindrome()) {
                    cout << "\n    The current Fraction is a Palindrome!";
                } else {
                    cout << "\n    The current Fraction is not a Palindrome!";
                }
                cout << endl;
                break;
            case 3:
                ptrFraction->displayCommonPalindromeDigitBarryBalasingham();
                break;
            case 4:
                cout << "\n  PRINTING Option -- ";
                ptrFraction->print();
                break;
            case 5:
                cout << "\n  The Fraction at";

                ptrFraction->print();

                if (nullptr != ptrFraction)
                    delete ptrFraction;
                
                cout << "\n  is now removed!";

                cout <<
                    "\n\n  Having fun ...!"
                << endl;
                delete ptrFraction;
                run = false;
                break;
            default:
                cout << "\n      WRONG OPTION!" << endl;
                break;
        }
    } while (run);
}

void initSubMenu(Fraction*& refPtrFraction) {
    bool run = true;
    do {
        cout <<
            "\n    **************************"
            "\n    * SubMENU - INITIALIZING *"
            "\n    *  1. Creating           *"
            "\n    *  2. Updating           *"
            "\n    *  3. Returning          *"
            "\n    **************************"\
            "\n    Select an option (integer only): ";
        
        int input;
        cin >> input;

        switch (input) {
            case 1:
                if (nullptr == refPtrFraction) {
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
                    refPtrFraction = new Fraction(num, denom);

                    cout <<
                        "\n\n       One Fraction has just been created/built!";
                } else {
                    cout << 
                        "\n      Please update or return!\n";
                }

                break;
            case 2:
                if (refPtrFraction != nullptr) {
                    cout << 
                        "\n      Creating 1 NEW Fraction object --"
                        "\n        Calling update()!"
                        "\n          Enter num: ";
                    
                    int num;
                    cin >> num;

                    cout <<
                        "\n          Enter denom: ";
                    
                    int denom;
                    cin >> denom;

                    refPtrFraction->setNum(num);
                    refPtrFraction->setDenom(denom);
                } else {
                    cout <<
                        "\n      Not a proper option as there is no Fraction!\n";
                }
                break;
            case 3:
                cout <<
                    "\n      Returning to previous menu!\n";
                run = false;
                break;
            default:
                cout <<
                    "\n      WRONG OPTION!\n";
                break;
        }
    } while (run);
}

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
        "\n  Required Submission Date:     2022/10/11"
        "\n  Actual Submission Date:       2022/10/11"
        "\n" << endl;
}