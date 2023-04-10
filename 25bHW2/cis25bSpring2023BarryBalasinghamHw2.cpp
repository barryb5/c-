/** 
 * Program Name: cis25bSpring2023BarryBalasinghamHw2.cpp 
 * Discussion:   Application with Fraction 
 * Written By:   Barry Balasingham 
 * First Grader: Your Classmate Name 
 * Updated on:   2023/03/07 
 */ 
 
// Header/Include Files 
#include <iostream>  
#include "fractionBarryBalasingham.h" 
#include "fractionUtilityBarryBalasingham.h"
#include "pointBarryBalasingham.h"
#include "pointUtilityBarryBalasingham.h"
#include "hw2UtilityBarryBalasingham.h" 
using namespace std; 
 
// Application Driver 
int main() { 
    
    displayClassInfoBB(); 

    runMenuBB(); 

    return 0; 
}

/** PROGRAM_OUTPUT
CIS 25B - Fun C++ Programming
Laney College
Barry Balasingham

HomeworkInformation Information --
  Assignment:               HW #2
  Implemented by:           Barry Balasingham
  Required Submission Date: 2023/03/25
  Actual Submission Date: ____/__/__

We write code to manipulate data, which are
provided by the user(s), to produce the
required outcome in the most efficient way!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

    Inappropriate option as there are no Points!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3

    Inappropriate option as there are no Points!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

    Inappropriate option as there are no Points!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 1

  Calling initSubMenuBB()!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 2 Points              *
  * 2. Updating Existing Points       *
  * 3. Displaying selected Point(s)   *
  * 4. Returning                      *
  *************************************
  Enter an option: 2

    There are no points to update!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 2 Points              *
  * 2. Updating Existing Points       *
  * 3. Displaying selected Point(s)   *
  * 4. Returning                      *
  *************************************
  Enter an option: 3

    There are no points to display!

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 2 Points              *
  * 2. Updating Existing Points       *
  * 3. Displaying selected Point(s)   *
  * 4. Returning                      *
  *************************************
  Enter an option: 1

    Creating Point #1!
      For x-coordinate as Fraction
         Enter an int for num: 50
         Enter an int for denom: 5
      For y-coordinate as Fraction
         Enter an int for num: 4
         Enter an int for denom: -1

    Creating Point #2!
      For x-coordinate as Fraction
         Enter an int for num: 5
         Enter an int for denom: -5
      For y-coordinate as Fraction
         Enter an int for num: 12
         Enter an int for denom: 2

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 2 Points              *
  * 2. Updating Existing Points       *
  * 3. Displaying selected Point(s)   *
  * 4. Returning                      *
  *************************************
  Enter an option: 3

    Displaying Point #1-

      Address: 0x55c47f7fe6d0
        For x-coordinate as Fraction:
          Address : 0x55c47f7fe6f0
            Num : 10
            Denom : 1
        For y-coordinate as Fraction:
          Address : 0x55c47f7fe710
            Num : 4
            Denom : -1

    Displaying Point #2-

      Address: 0x55c47f7fe730
        For x-coordinate as Fraction:
          Address : 0x55c47f7fe750
            Num : 1
            Denom : -1
        For y-coordinate as Fraction:
          Address : 0x55c47f7fe770
            Num : 6
            Denom : 1

  *************************************
  *    Sub-Menu -- initSubMenuBB()    *
  * 1. Creating 2 Points              *
  * 2. Updating Existing Points       *
  * 3. Displaying selected Point(s)   *
  * 4. Returning                      *
  *************************************
  Enter an option: 4

    Returning to previous menu!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 4

  *****************************
  *    Menu for displayPoint() *
  * 1. Displaying Point #1     *
  * 2. Displaying Point #1     *
  * 3. Returning               *
  *****************************
  Enter an option: 1

    Displaying Point #1-

      Address: 0x55c47f7fe6d0
        For x-coordinate as Fraction:
          Address : 0x55c47f7fe6f0
            Num : 10
            Denom : 1
        For y-coordinate as Fraction:
          Address : 0x55c47f7fe710
            Num : 4
            Denom : -1

  *****************************
  *    Menu for displayPoint() *
  * 1. Displaying Point #1     *
  * 2. Displaying Point #1     *
  * 3. Returning               *
  *****************************
  Enter an option: 2

    Displaying Point #2-

      Address: 0x55c47f7fe730
        For x-coordinate as Fraction:
          Address : 0x55c47f7fe750
            Num : 1
            Denom : -1
        For y-coordinate as Fraction:
          Address : 0x55c47f7fe770
            Num : 6
            Denom : 1

  *****************************
  *    Menu for displayPoint() *
  * 1. Displaying Point #1     *
  * 2. Displaying Point #1     *
  * 3. Returning               *
  *****************************
  Enter an option: 3

    Returning to previous menu!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 3


  Displaying all Palindrome Fraction(s)-

    From Point #1:

      Fraction from y-coordinate
          Address : 0x55c47f7fe710
            Num : 4
            Denom : -1

    From Point #2:
      Fraction from x-coordinate
          Address : 0x55c47f7fe750
            Num : 1
            Denom : -1

      Fraction from y-coordinate
          Address : 0x55c47f7fe770
            Num : 6
            Denom : 1

    The largest Palindrome Fraction:
          Address : 0x55c47f7fe770
            Num : 6
            Denom : 1

    The smallest Palindrome Fraction:
          Address : 0x55c47f7fe710
            Num : 4
            Denom : -1

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 2

  *************************************
  * Menu for performPointOperation()  *
  * 1. Alignment: Horizontal/Vertical *
  * 2. Displaying Quadrant            *
  * 3. Displaying midpoint            *
  * 4. Displaying area of rectangle   *
  * 5. Returning                      *
  *************************************
  Enter an option: 1

      Alighnment Confirmation:

        Horizontal Alignment: No
        Vertical Alignment: No

  *************************************
  * Menu for performPointOperation()  *
  * 1. Alignment: Horizontal/Vertical *
  * 2. Displaying Quadrant            *
  * 3. Displaying midpoint            *
  * 4. Displaying area of rectangle   *
  * 5. Returning                      *
  *************************************
  Enter an option: 2

      Quadrant Confirmation:

        Point 1 is in Quadrant IV
        Point 2 is in Quadrant II

  *************************************
  * Menu for performPointOperation()  *
  * 1. Alignment: Horizontal/Vertical *
  * 2. Displaying Quadrant            *
  * 3. Displaying midpoint            *
  * 4. Displaying area of rectangle   *
  * 5. Returning                      *
  *************************************
  Enter an option: 3

      Midpoint Confirmation:

        Fraction From x-coordinate
          Address : 0x7ffdd0237178
            Num : 9
            Denom : 2

        Fraction From y-coordinate
          Address : 0x7ffdd0237178
            NNum : 1
            Denom : 1

  *************************************
  * Menu for performPointOperation()  *
  * 1. Alignment: Horizontal/Vertical *
  * 2. Displaying Quadrant            *
  * 3. Displaying midpoint            *
  * 4. Displaying area of rectangle   *
  * 5. Returning                      *
  *************************************
  Enter an option: 4

      Area Confirmation:
        Fraction Area:
          Num: 110
          Denom: 1

  *************************************
  * Menu for performPointOperation()  *
  * 1. Alignment: Horizontal/Vertical *
  * 2. Displaying Quadrant            *
  * 3. Displaying midpoint            *
  * 4. Displaying area of rectangle   *
  * 5. Returning                      *
  *************************************
  Enter an option: 5

      Returning to previous menu!

****************************************
* MENU - HW #2                         *
* 1. Calling initSubMenuHw2BB()        *
* 2. Point Operators                   *
* 3. Displaying Palindrome Info        *
* 4. Displaying selected Point(s)      *
* 5. Quit                              *
****************************************
Select an option (use integer value only): 5

  Removing all dynamic allocations

    Removing Point #1 through delete --

      0x55c47f7fe6d0
        For x-coordinate as Fraction: 
          Address : 0x55c47f7fe6f0
            Num : 10
            Denom : 1
        For y-coordinate as Fraction: 
          Address : 0x55c47f7fe710
            Num : 4
            Denom : -1

    Removing Point #2 through delete --

      0x55c47f7fe730
        For x-coordinate as Fraction: 
          Address : 0x55c47f7fe750
            Num : 1
            Denom : -1
        For y-coordinate as Fraction: 
          Address : 0x55c47f7fe770
            Num : 6
            Denom : 1

  Have a nice session!
*/

/** Logic_Code_Output_Issues
No Comments!
*/
