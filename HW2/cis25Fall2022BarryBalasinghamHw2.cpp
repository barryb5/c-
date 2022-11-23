/**
 * Program Name:    cis25Fall2022BarryBalasinghamHw2.cpp
 * Discussion:      Homework 2
 * Written By:      Barry Balasingham
 * Email:           bbalasingham@gmail.com
 * Submitted Date:  2022/09/22
 * Graded By:       
 * Grader's Email:
 * Return Date:
 */

// Header/Include Files
#include <iostream>
using namespace std;

// Function Prototypes
void displayCodingStatementBarryBalasingham(void);
void displayClassInfoHw2BarryBalasingham(void);
void displayOddDigitInfoBarryBalasingham(void);

// Application Driver
int main() {
    displayCodingStatementBarryBalasingham();

    displayClassInfoHw2BarryBalasingham();

    displayOddDigitInfoBarryBalasingham();

    return 0;
}

// Function Definitions

void displayCodingStatementBarryBalasingham() {
    cout << "We write code to manipulate data, which are provided by the"
        "\nuser, to produce the required outcome in the most efficient"
        "\nway!"

        "\n\nCIS 25 - C++ Programming"
        "\nLaney College"
        "\nBarry Balasingham" << endl;
}

void displayClassInfoHw2BarryBalasingham() {
    cout << "Information --"
        "\n  Assignment:                   HW #2 Exercise #1"
        "\n  Implemented by:               Barry Balasingham"
        "\n  Required Submission Date:     2022/09/24"
        "\n  Actual Submission Date:       2022/09/22"
        "\n" << endl;
}

void displayOddDigitInfoBarryBalasingham() {
    cout << "While displayDigitInfoBarryBalasingham() is running - ";
    cout << "\n\n  Enter an integer: ";

    int input = 0;
    cin >> input;
    cout << "\n";

    if (input) {
        cout << "  " << input << " is " << (input > 0 ? "positive" : "negative");
        cout << " and ";
        cout << (input % 2 == 0 ? "even!" : "odd!");

        int length = 0;
        int temp = (input < 0) ? -input : input;
        while (temp > 0) {
            ++length;
            temp /= 10;
        }
        cout << "\n  " << input << " has " << length << " digits(s)." << endl;
    } else {
        cout << "  " << input << " is even!";
        cout << "\n  " << input << " has 1 digit(s)." << endl;
    }
}

/**
 * PROGRAM_OUTPUT
We write code to manipulate data, which are provided by the
user, to produce the required outcome in the most efficient
way!

CIS 25 - C++ Programming
Laney College
Barry Balasingham

Information --
  Assignment:                   HW #2 Exercise #1
  Implemented by:               Barry Balasingham
  Required Submission Date:     2022/09/24
  Actual Submission Date:       2022/09/__

While displayDigitInfoBarryBalasingham() is running - 

  Enter an integer: -001457

  -1457 is negative and odd!
  -1457 has 4 digits(s).
  */

/** 
 * Logic_Code_Output_Issues
 * No Comments!
 */