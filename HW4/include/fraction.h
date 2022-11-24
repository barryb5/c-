/**
 * Program Name:   fraction.h
 * Discussion:     Specification File or Header File or Include File
 *                   Fraction
 * Written By:     Barry Balasingham
 * Email:          bbalasingham@gmail.com
 * Submitted Date: 2022/11/__
 * Grader Email:
 * Return Date:
 */

#ifndef FRACTION_H
#define FRACTION_H

// Header/Include Files
#include <iostream>
using namespace std;

class Fraction {
public:
    Fraction();
    Fraction(const Fraction&);
    Fraction(int, int);

    ~Fraction();

    // Member Functions
    int const getNum(void) const;
    void setNum(int);

    int const getDenom(void) const;    
    void setDenom(int);

    void print(void) const;

    bool isPalindrome(void) const;
    void displayCommonPalindromeDigit(void) const;
private:
    int num;
    int denom;

    bool isPalindromeHelper(const std::string& str) const;
};

// Function Prototypes

void printFraction(Fraction);

#endif