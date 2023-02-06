/** 
 * Program Name: cis25bSpring2023BarryBalasinghamHw1.cpp 
 * Discussion:   Application with Fraction 
 * Written By:   Barry Balasingham 
 * First Grader: A Student Name 
 * Updated on:   2023/01/28 
 */ 
 
// Header/Include Files 
#include <iostream>  
#include "fractionBarryBalasingham.h" 
#include "fractionUtilityBarryBalasingham.h" 
#include "finalExamUtilityBarryBalasingham.h" 
using namespace std; 
 
// Application Driver 
int main() { 
     
    displayClassInfoBB(); 
 
    runMenuFinalExamBB(); 
 
    return 0; 
} 
 
/** PROGRAM_OUTPUT 
 CIS 25B - Fun C++ Programming
Laney College
Barry Balasingham

HomeworkInformation Information --
  Assignment:               HW1
  Implemented by:           Barry Balasingham
  Required Submission Date: 2023/2/10
  Actual Submission Date: 2023/2/5

We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuBB()!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionBB()!

      While createFractionBB() is running!

      Enter an int for num: 11

      Enter a non-zero int for denom: 13511

  While ::gcdBB() is running!

  While ::gcdBB() is running!

  Calling FractionBarryBalasingham(int, int)!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printBB()!


  While ::printBB() is running!

    Address : 0x559c9d6236d0
      num : 11
      denom : 13511

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuBB()!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionBB()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionBB()!

      While createFractionBB() is running!

      The information of the current Fraction -

  While ::printBB() is running!

    Address : 0x559c9d6236d0
      num : 11
      denom : 13511

      Enter an int for num: 3

      Enter a non-zero int for denom: 19091

  While ::gcdBB() is running!

  While ::updateBB() is running!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionBB()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printBB()!


  While ::printBB() is running!

    Address : 0x559c9d6236d0
      num : 3
      denom : 19091

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

  Calling isPalindromeBB()!

  The Fraction at 0x559c9d6236d0 is a Palindrome!

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoBB()!

  While ::getNumBB() is running!

  While ::getDenomBB() is running!

    The Fraction at 0x559c9d6236d0 is a Palindrome.

    There is/are 1 uncommon even digit(s).

    The uncommon even digit of
      0 is found in the Denominator of denom

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuBB()!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 1

    To call createFractionBB()!

    Update or return!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 232

    Wrong Option!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 2

    To call updateFractionBB()!

      While createFractionBB() is running!

      The information of the current Fraction -

  While ::printBB() is running!

    Address : 0x559c9d6236d0
      num : 3
      denom : 19091

      Enter an int for num: 232

      Enter a non-zero int for denom: 19091

  While ::gcdBB() is running!

  While ::updateBB() is running!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 1 Fraction            *
  * 2. Updating the existing Fraction *
  * 3. Returning                      *
  *************************************
  Enter an option: 3

    Returning to previous menu ...

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  Calling printBB()!


  While ::printBB() is running!

    Address : 0x559c9d6236d0
      num : 232
      denom : 19091

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

  Calling isPalindromeBB()!

  The Fraction at 0x559c9d6236d0 is a Palindrome!

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3

  Calling displayPalindromeInfoBB()!

  While ::getNumBB() is running!

  While ::getDenomBB() is running!

    The Fraction at 0x559c9d6236d0 is a Palindrome.

    There is/are 2 uncommon even digit(s).

    The uncommon even digit of
      0 is found in the Denominator of denom
      2 is found in the Numerator of num

****************************************
*            MENU - Final Exam A       *
* 1. Initializing (1 Fraction object)  *
* 2. Calling member isPalindromeBB()   *
* 3. Calling displayPalindromeInfoBB() *
* 4. Caling member printBB()           *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 5

  Clean Up!

  Calling ~FractionBarryBalasingham()!

  Have a nice session!
*/ 
 
/** Logic_Code_Output_Issues 
No Comments! 
*/ 