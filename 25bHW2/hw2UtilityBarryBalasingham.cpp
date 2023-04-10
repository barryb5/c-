/**
* Program Name: hw2UtilityBarryBalasingham.cpp
* Discussion:   File #10
*                 Implementation File
*               Note!
*                   1. You are NOT ALLOWED to add any member
*                      data to the class.
* Written By:   Barry Balasingham
* Updated on:   2023/03/07
*/

// Header/Include Files
#include <iostream>
#include "hw2UtilityBarryBalasingham.h"
using namespace std;

void displayClassInfoBB() {
    cout << "CIS 25B - Fun C++ Programming"
        << "\nLaney College"
        << "\nBarry Balasingham"
        << "\n\nHomeworkInformation Information --"
        << "\n  Assignment:               HW #2"
        << "\n  Implemented by:           Barry Balasingham"
        << "\n  Required Submission Date: 2023/03/25"
        << "\n  Actual Submission Date: ____/__/__"
        << "\n\nWe write code to manipulate data, which are"
        << "\nprovided by the user(s), to produce the"
        << "\nrequired outcome in the most efficient way!"
        << endl;
}

void runMenuBB() {
    int optionBB;
    PointBarryBalasingham* pPtr1BB { nullptr };
    PointBarryBalasingham* pPtr2BB { nullptr };

    do {
        cout << "\n****************************************"
            "\n* MENU - HW #2                         *"
            "\n* 1. Calling initSubMenuHw2BB()        *"
            "\n* 2. Point Operators                   *"
            "\n* 3. Displaying Palindrome Info        *"
            "\n* 4. Displaying selected Point(s)      *"
            "\n* 5. Quit                              *"
            "\n****************************************"
            "\nSelect an option (use integer value only): ";
        cin >> optionBB;

        switch(optionBB) {
            case 1:
                cout << "\n  Calling initSubMenuBB()!" << endl;
                initSubMenuBB(pPtr1BB, pPtr2BB);
                break;
            case 2:
                if (nullptr == pPtr1BB || nullptr == pPtr2BB) {
                    cout << "\n    Inappropriate option as there are no Points!" << endl;
                } else {
                    pointOperatorsMenu(pPtr1BB, pPtr2BB);
                }
                break;
            case 3:
                if (nullptr == pPtr1BB || nullptr == pPtr2BB) {
                    cout << "\n    Inappropriate option as there are no Points!" << endl;
                } else {
                    isPlaindromeBB(pPtr1BB, pPtr2BB);
                }
                break;
            case 4:
                if (nullptr == pPtr1BB || nullptr == pPtr2BB) {
                    cout << "\n    Inappropriate option as there are no Points!" << endl;
                } else {
                    displayPointMenuBB(pPtr1BB, pPtr2BB);
                }
                break;
            case 5:
                cout << "\n  Removing all dynamic allocations"
                    << "\n\n    Removing Point #1 through delete --"
                    << "\n\n      " << pPtr1BB
                    << "\n        For x-coordinate as Fraction: ";
                pPtr1BB->getXBB()->printBB();
                cout << "\n        For y-coordinate as Fraction: ";
                pPtr1BB->getYBB()->printBB();
                
                delete pPtr1BB;
                pPtr1BB = nullptr;

                cout << "\n\n    Removing Point #2 through delete --"
                    << "\n\n      " << pPtr1BB
                    << "\n        For x-coordinate as Fraction: ";
                pPtr2BB->getXBB()->printBB();
                cout << "\n        For y-coordinate as Fraction: ";
                pPtr2BB->getYBB()->printBB();

                delete pPtr2BB;
                pPtr2BB = nullptr;
                cout << "\n  Have a nice session!" << endl;
                break;
            default:
                cout << "\n  Wrong Option!" << endl;
                break;
        }

    } while (optionBB != 5);

}

void initSubMenuBB(PointBarryBalasingham*& pPtrRef1BB, PointBarryBalasingham*& pPtrRef2BB) {
    int optionBB;

    do {
        cout << "\n  *************************************"
            "\n  *    Sub-Menu -- initSubMenuBB()    *"
            "\n  * 1. Creating 2 Points              *"
            "\n  * 2. Updating Existing Points       *"
            "\n  * 3. Displaying selected Point(s)   *"
            "\n  * 4. Returning                      *"
            "\n  *************************************"
            "\n  Enter an option: ";
        cin >> optionBB;
        switch (optionBB) {
            case 1:
                if (pPtrRef1BB != nullptr || pPtrRef2BB != nullptr) {
                    cout << "\n    Update or return!" << endl;
                } else {
                    createPointBB(pPtrRef1BB, pPtrRef2BB);
                }
                break;
            case 2:
                if (pPtrRef1BB == nullptr || pPtrRef2BB == nullptr) {
                    cout << "\n    There are no points to update!" << endl;
                } else {
                    updatePointBB(pPtrRef1BB, pPtrRef2BB);
                }
                break;
            case 3:
                if (pPtrRef1BB == nullptr || pPtrRef2BB == nullptr) {
                    cout << "\n    There are no points to display!" << endl;
                } else {
                    displayPointBB(pPtrRef1BB, 1);
                    displayPointBB(pPtrRef2BB, 2);
                }
                break;
            case 4:
                cout << "\n    Returning to previous menu ..."
                    << endl;
                break;
            default:
                cout << "\n    Wrong Option!" << endl;
                break;
        }
    } while (optionBB != 4);
}

void displayPointMenuBB(PointBarryBalasingham* pPtrRef1BB, PointBarryBalasingham* pPtrRef2BB) {
    int optionBB;

    do {
        cout << "\n    *****************************"
            "\n    *    Menu for displayPoint() *"
            "\n    * 1. Displaying Point #1     *"
            "\n    * 2. Displaying Point #1     *"
            "\n    * 3. Returning               *"
            "\n    *****************************"
            "\n  Enter an option: ";
        cin >> optionBB;

        switch (optionBB) {
        case 1:
            displayPointBB(pPtrRef1BB, 1);
            break;
        case 2:
            displayPointBB(pPtrRef2BB, 2);
            break;
        case 3:
            isPlaindromeBB(pPtrRef1BB, pPtrRef2BB);
            break;        
        default:
            break;
        }
    } while (optionBB != 3);
}

void pointOperatorsMenu(PointBarryBalasingham* pPtrRef1BB, PointBarryBalasingham* pPtrRef2BB) {
    int optionBB;

    do {
        cout << "\n    *************************************"
            "\n    * Menu for performPointOperation()  *"
            "\n    * 1. Alignment: Horizontal/Vertical *"
            "\n    * 2. Displaying Quadrant            *"
            "\n    * 3. Displaying midpoint            *"
            "\n    * 4. Displaying area of rectangle   *"
            "\n    * 5. Returning                      *"
            "\n    *************************************"
            "\n  Enter an option: ";
        cin >> optionBB;

        switch (optionBB) {
        case 1:
            alignmentBB(pPtrRef1BB, pPtrRef2BB);
            break;
        case 2:
            cout << "\n      Quadrant Confirmation:"
                <<"\n\n        Point 1 is in Quadrant ";
            quadrantBB(pPtrRef1BB);
            cout <<"        Point 2 is in Quadrant ";
            quadrantBB(pPtrRef2BB);
            break;
        case 3:
            midpointBB(pPtrRef1BB, pPtrRef2BB);
            break;
        case 4:
            areaOfRectangleBB(pPtrRef1BB, pPtrRef2BB);
            break;
        case 5:
            cout << "\n      Returning to previous menu!" << endl;
            break;
        default:
            break;
        }
    } while (optionBB != 5);
}
// Your function definitions here