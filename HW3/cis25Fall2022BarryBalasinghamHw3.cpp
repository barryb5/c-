/**
 * Program Name:    cis25Fall2022BarryBalasinghamHw3.cpp
 * Discussion:      Homework 3
 * Written By:      Barry Balasingham
 * Email:           bbalasingham@gmail.com
 * Submitted Date:  2022/10/22
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
bool runMenuHw3BarryBalasingham(void);
void displayDigitInfoBarryBalasingham(void);

// Application Driver
int main() {
    displayCodingStatementBarryBalasingham();
    displayClassInfoHw2BarryBalasingham();

    while (runMenuHw3BarryBalasingham())
    {
        
    }

    return 0;
}

// Function Definitions
void displayCodingStatementBarryBalasingham() {
    cout << "We write code to manipulate data, which are provided by the"
        "\nuser, to produce the required outcome in the most efficient way!"

        "\n\nCIS 25 - C++ Programming"
        "\nLaney College"
        "\nBarry Balasingham" << endl;
}

void displayClassInfoHw2BarryBalasingham() {
    cout << "\nInformation --"
        "\n  Assignment:                   HW #3 Exercise #1"
        "\n  Implemented by:               Barry Balasingham"
        "\n  Required Submission Date:     2022/10/22"
        "\n  Actual Submission Date:       2022/10/22"
        "\n" << endl;
}

bool runMenuHw3BarryBalasingham() {
    cout << "\n*************************************************"
        "\n*              MENU - HW #3                     *"
        "\n* (1) Calling displayDigitInfoBarryBalasingham()*"
        "\n* (2) Quit                                      *"
        "\n*************************************************"
        "\nEnter an integer for option + ENTER: ";

    int choice;
    cin >> choice;
    
    if (choice == 1) {
        displayDigitInfoBarryBalasingham();
    } else if (choice == 2) {
        cout << "Have Fun!" << endl;
        return false;
    } else {
        cout << "\nWrong Option!\n";
    }
    cout << flush;
    return true;
}

void displayDigitInfoBarryBalasingham() {
    cout << "\nEnter an integer: ";
    
    int input;
    cin >> input;

    cout << "Calling displayDigitInfoBarryBalasingham() with an argument of"
        << "\n  " << input
        << "\n\n  While displayDigitInfoYourName() is running - ";

    if (input) {
        cout << "\n\n  " << input << " is " 
            << (input > 0 ? "positive" : "negative")
            << " and "
            << (input % 2 == 0 ? "even!" : "odd!");

        int length = 0;
        int numbersAndQuantities[10] = {0};
        int temp = (input < 0) ? -input : input;
        int numEven = {0};
        int numOdd = {0};

        while (temp > 0) {
            if (temp % 2 == 0) {
                numEven++;
            } else {
                numOdd++;
            }
            ++length;
            numbersAndQuantities[temp % 10]++;
            temp /= 10;
        }
        
        int mostEvenOccurances[2] = {0, 0};
        int mostOddOccurances[2] = {0, 0};
        bool evenOpener = true;
        bool oddOpener = true;

        cout << "\n  " << input << " has " << length << " digits(s).";

        for (int i = 0; i < 5; i++) {
            int temp = i*2;
            if (numbersAndQuantities[temp] != 0) {
                if (evenOpener) {
                    cout << "\n\n  There is/are " 
                        << numEven
                        << " even digit(s) of";
                    evenOpener = false;
                }
                if (numbersAndQuantities[temp] >= mostEvenOccurances[1]) {
                    mostEvenOccurances[0] = temp;
                    mostEvenOccurances[1] = numbersAndQuantities[temp];
                }

                cout << "\n    " 
                    << temp
                    << " seen "
                    << numbersAndQuantities[temp]
                    << " time(s)";
            }
        }

        for (int i = 0; i < 5; i++) {
            int temp = i*2 + 1;
            if (numbersAndQuantities[temp] != 0) {
                if (oddOpener) {
                    cout << "\n\n  There is/are " 
                        << numEven
                        << " even digit(s) of";
                    oddOpener = false;
                }
                if (numbersAndQuantities[temp] >= mostOddOccurances[1]) {
                    mostOddOccurances[0] = temp;
                    mostOddOccurances[1] = numbersAndQuantities[temp];
                }

                cout << "\n    " 
                    << temp
                    << " seen "
                    << numbersAndQuantities[temp]
                    << " time(s)";
            }
        }
        cout << "\n\n  The largest even digit with largest occurrence is "
            << "\n     " << mostEvenOccurances[0]
            << " seen "
            << mostEvenOccurances[1]
            << " time(s)";

        cout << "\n\n  The largest odd digit with largest occurrence is"
            << "\n     " << mostOddOccurances[0]
            << " seen "
            << mostOddOccurances[1]
            << " time(s)"
            << "\n";
    } else {

        cout << "\n    " << input << " is given!" << endl;
    }
    cout << flush;
}

/**
 * PROGRAM_OUTPUT
We write code to manipulate data, which are provided by the
user, to produce the required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Barry Balasingham

Information --
  Assignment:                   HW #3 Exercise #1
  Implemented by:               Barry Balasingham
  Required Submission Date:     2022/10/22
  Actual Submission Date:       2022/10/22


*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 6

Wrong Option!

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: -1

Wrong Option!

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 1

Enter an integer: -29
Calling displayDigitInfoBarryBalasingham() with an argument of
  -29

  While displayDigitInfoYourName() is running - 

  -29 is negative and odd!
  -29 has 2 digits(s).

  There is/are 1 even digit(s) of
    2 seen 1 time(s)

  There is/are 1 even digit(s) of
    9 seen 1 time(s)

  The largest even digit with largest occurrence is 
     2 seen 1 time(s)

  The largest odd digit with largest occurrence is
     9 seen 1 time(s)

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 1

Enter an integer: -294257
Calling displayDigitInfoBarryBalasingham() with an argument of
  -294257

  While displayDigitInfoYourName() is running - 

  -294257 is negative and odd!
  -294257 has 6 digits(s).

  There is/are 3 even digit(s) of
    2 seen 2 time(s)
    4 seen 1 time(s)

  There is/are 3 even digit(s) of
    5 seen 1 time(s)
    7 seen 1 time(s)
    9 seen 1 time(s)

  The largest even digit with largest occurrence is 
     2 seen 2 time(s)

  The largest odd digit with largest occurrence is
     9 seen 1 time(s)

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 1

Enter an integer: 552944428
Calling displayDigitInfoBarryBalasingham() with an argument of
  552944428

  While displayDigitInfoYourName() is running - 

  552944428 is positive and even!
  552944428 has 9 digits(s).

  There is/are 6 even digit(s) of
    2 seen 2 time(s)
    4 seen 3 time(s)
    8 seen 1 time(s)

  There is/are 6 even digit(s) of
    5 seen 2 time(s)
    9 seen 1 time(s)

  The largest even digit with largest occurrence is 
     4 seen 3 time(s)

  The largest odd digit with largest occurrence is
     5 seen 2 time(s)

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 1

Enter an integer: 0
Calling displayDigitInfoBarryBalasingham() with an argument of
  0

  While displayDigitInfoYourName() is running - 
    0 is given!

*************************************************
*              MENU - HW #3                     *
* (1) Calling displayDigitInfoBarryBalasingham()*
* (2) Quit                                      *
*************************************************
Enter an integer for option + ENTER: 2
Have Fun!
*/

/** 
 * Logic_Code_Output_Issues
 * No Comments!
 */