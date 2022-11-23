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
#include "Include/fraction-4.h"
using namespace std;

// Function Prototypes
void displayCodingStatementBarryBalasingham(void);
void displayClassInfoHw4BarryBalasingham(void);
void runMenuHwNumberBarryBalasingham(void);

// Application Driver
int main() {
    displayCodingStatementBarryBalasingham();

    displayClassInfoHw4BarryBalasingham();
    
    runMenuHwNumberBarryBalasingham();
    
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

void runMenuHwNumberBarryBalasingham() {
    // do {

    // } while (/* condition */)
    // {
    //     /* code */
    // }

    Fraction f1 {3, 4};

    f1.print();
    
}