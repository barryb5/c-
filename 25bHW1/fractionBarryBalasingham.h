/**
 * Program Name: fractionBarryBalasingham.h
 * Discussion:   File #1 -- Declaration/Specification file
 *                 class FractionBarryBalasingham;
 *               Note!
 *                   1. You must provide all function definitions
 *                      for the member functions below.
 *                   2. You are NOT ALLOWED to add any member data 
 *                      and member functions to the class.
 * Written By:   Barry Balasingham
 * Updated on:   2022/01/15
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

#endif
