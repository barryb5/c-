/**
 * Program Name:   fraction.cpp
 * Discussion:     Application with Fraction
 * Written By:     Your Name 
 * Date:           2022/10/27
 */
// Hear/Include Files
#include <iostream> 
#include "../Include/fraction-4.h"
using namespace std;

// Function Definitions

Fraction::Fraction() {
    num = 7;
    denom = 3;
}

Fraction::Fraction(int n, int d) {
    num = n;
    denom = d;
}

int const Fraction::getNum() const {
    return num;
}

void Fraction::setNum(int n) {
    num = n;
}

int const Fraction::getDenom() const {
    return denom;
}

void Fraction::setDenom(int d) {
    denom = d;
}

int Fraction::isPalindrome() const {
    return 0;
}

void Fraction::print() const {
    cout << 
        "\n  PRINTING Option -- "
        "\n    Address : "
        << this
        << "\n      num : "
        << num
        << "\n      denom : "
        << denom
        << endl;
}