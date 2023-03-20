/**
 * Program Name: cis25bSpring2023MichaelFigueiredoHw1.cpp
 * Discussion:   Application with Fraction
 * Written By:   Michael Figueiredo
 * Date:         2023/02/16
 */

 // Header/Include Files
#include <iostream> 
#include "fractionMichaelFigueiredo.h"
#include "fractionUtilityMichaelFigueiredo.h"
#include "finalExamUtilityMichaelFigueiredo.h"

using namespace std;

// Application Driver
int main() {

    displayClassInfoMF();

    runMenuFinalExamMF();

    return 0;
}

/** PROGRAM_OUTPUT


CIS 25B - Fun C++ Programming
Laney College
Michael Figueiredo

Homework Information - -
  Assignement:                HW #1
  Implemented by:             MichaelFigueiredo
  Required Submission Date:   2023/02/10
  Actual Submission Date:     2023/02/16

We write code to manipulate data, which are
provided by the user,to produce the
required outcome in the most efficient way!

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

      While createFractionMF() is running!

      Enter an int for num: 11

      Enter a non-zero int for denom: 13511

  While ::gcdMF() is running!

  While ::gcdMF() is running!

  Calling FractionMichaelFigueiredo(int, int)!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 4

  Calling printMF()!

  While ::printMF() is running!

    Address : 00000255730FD570
      num : 11
      denom : 13511

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionMF()!

      While createFractionMF() is running!

      The information of the current Fraction -

  While ::printMF() is running!

    Address : 00000255730FD570
      num : 11
      denom : 13511

      Enter an int for num: 3

      Enter a non-zero int for denom: 19091

  While ::gcdMF() is running!

  While ::updateMF() is running!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 4

  Calling printMF()!

  While ::printMF() is running!

    Address : 00000255730FD570
      num : 3
      denom : 19091

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 2

  Calling isPalindromeMF()!

  The Fraction at 00000255730FD570 is a Palindrome!

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoMF()!

    The Fraction at 00000255730FD570 is a Palindrome.

    There is/are 1 uncommon even digit(s).

    The uncommon even digit of
      0 is found 1 time(s) in the Denominator of denom

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 1

  Calling initSubMenuMF()!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionMF()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 232

    Wrong Option!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionMF()!

      While createFractionMF() is running!

      The information of the current Fraction -

  While ::printMF() is running!

    Address : 00000255730FD570
      num : 3
      denom : 19091

      Enter an int for num: 232

      Enter a non-zero int for denom: 19091

  While ::gcdMF() is running!

  While ::updateMF() is running!

  *************************************
  *    Sub-Menu -- initSubMenuMF()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 4

  Calling printMF()!

  While ::printMF() is running!

    Address : 00000255730FD570
      num : 232
      denom : 19091

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 2

  Calling isPalindromeMF()!

  The Fraction at 00000255730FD570 is a Palindrome!

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoMF()!

    The Fraction at 00000255730FD570 is a Palindrome.

    There is/are 2 uncommon even digit(s).

    The uncommon even digit of
      0 is found 1 time(s) in the Denominator of denom
      2 is found 2 time(s) in the Numerator of num

********************************************
*            MENU - Final Exam A           *
* 1. Initializing (1 Fraction object)      *
* 2. Calling member isPalindromeMF()       *
* 3. Calling displayPalindromeInfoMF()     *
* 4. Caling member printMF()               *
* 5. Quit                                  *
********************************************
Select an option (use integer value only): 5

  Clean Up!

  Calling ~FractionMichaelFigueiredo()!

  Have a nice session!

*/


/** Logic_Code_Output_Issues

NONE.

*/
