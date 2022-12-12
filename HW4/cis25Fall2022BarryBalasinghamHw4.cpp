/**
 * Program Name:    cis25Fall2022BarryBalasinghamHw4.cpp
 * Discussion:      Homework 4 Exercise #1
 * Written By:      Barry Balasingham
 * Email:           bbalasingham@gmail.com
 * Submitted Date:  2022/12/11
 * Graded By:       
 * Grader's Email:  
 * Return Date:     
 */

// Header/Include Files
#include <iostream>
#include "include/fraction.h"
#include "include/utility.h"
using namespace std;

// Application Driver
int main() {
    displayCodingStatementBarryBalasingham();

    displayClassInfoHw4BarryBalasingham();
    
    runMenuHw4();
}

/**
 * PROGRAM_OUTPUT
We write code to manipulate data, which are provided by the
user, to produce the required outcome in the most efficient way!

CIS 25 - C++ Programming
Laney College
Barry Balasingham

Information --
  Assignment:                   HW #4 Exercise #1
  Implemented by:               Barry Balasingham
  Required Submission Date:     2022/10/11
  Actual Submission Date:       2022/10/11


****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 6

      WRONG OPTION!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 2

  Palindrome Option -

    The current Fraction is not a Palindrome!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 1

  INITIALIZING Option -
    Calling runMenuInit()!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 2

      Not a proper option as there is no Fraction!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 5

      WRONG OPTION!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 1


      Creating 1 NEW Fraction object --
        Calling create()!
          Enter num: 5

          Enter denom: -959


       One Fraction has just been created/built!
    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 1

      Please update or return!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 3

      Returning to previous menu!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 4

  PRINTING Option -- 
    Address : 0x55cafab106d0
      num : 5
      denom : -959

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 2

  Palindrome Option -

    The current Fraction is a Palindrome!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 3

  displayCommonPalindromeDigit() Option -
    There is/are 1 common digit(s) of
      5

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 1

  INITIALIZING Option -
    Calling runMenuInit()!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 1

      Please update or return!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 2


      Creating 1 NEW Fraction object --
        Calling update()!
          Enter num: 156810000

          Enter denom: 49914173

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 3

      Returning to previous menu!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 4

  PRINTING Option -- 
    Address : 0x55cafab106d0
      num : 156810000
      denom : 49914173

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 2

  Palindrome Option -

    The current Fraction is not a Palindrome!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 3

  displayCommonPalindromeDigit() Option -
    The current Fraction is not a Palindrome!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 1

  INITIALIZING Option -
    Calling runMenuInit()!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 1

      Please update or return!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 2

      Creating 1 NEW Fraction object --
        Calling update()!
          Enter num: 1551

          Enter denom: 5491945

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    **************************
    Select an option (integer only): 3

      Returning to previous menu!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 4

  PRINTING Option -- 
    Address : 0x55cafab106d0
      num : 1551
      denom : 5491945

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 2

  Palindrome Option -

    The current Fraction is a Palindrome!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 3

  displayCommonPalindromeDigit() Option -
    There is/are 2 common digit(s) of
      1
      5

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 55

      WRONG OPTION!

****************************************************
*                    MENU - HW #4                  *
*  1. Setting Up Fraction                          *
*  2. isPalindromeBarryBalasingham()               *
*  3. Using displayCommonPalindromeDigitBarryBalasingham()*
*  4. Printing Current Fraction                    *
*  5. Quit                                         *
****************************************************
Select an option (use integer value only): 5

  The Fraction at
    Address : 0x55cafab106d0
      num : 1551
      denom : 5491945

  is now removed!

  Having fun ...!
 */

/** 
 * Logic_Code_Output_Issues
 * No Comments!
 */