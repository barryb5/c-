/**
 * Program Name: FractionBarryBalasingham.h
 * Discussion:   File #1 -- Declaration/Specification file
 *                 class FractionBarryBalasingham;
 *               Note!
 *                   1. You must provide all function definitions
 *                      for the member functions below.
 *                   2. You are NOT ALLOWED to add any member data
 *                      and member functions to the class.
 * Written By:   Barry Balasingham
 * Updated on:   2022/12/15
 */

#ifndef FRACTIONBARRYBALASINGHAM_H
#define FRACTIONBARRYBALASINGHAM_H

// Header/Include Files
#include <iostream>
using namespace std;

class FractionBarryBalasingham {
 public:
    FractionBarryBalasingham(int, int);
    FractionBarryBalasingham();
    FractionBarryBalasingham(const FractionBarryBalasingham&);

    ~FractionBarryBalasingham();

    // Member Functions --
    //   Besides the member functions given below,
    //   no other member functions are allowed !

    int getNumBB(void) const;
    void setNumBB(int);

    int getDenomBB(void) const;
    void setDenomBB(int);

    void updateBB(int, int);
    int isPalindromeBB(void) const;

    void printBB(void) const;

 private:
    int num;
    int denom;

    int gcdBB(int, int);
};

// No addtional member data and functions are allowed in the
// above classes!

// You will have to update the names of member functions properly.

#endif
