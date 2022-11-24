/**
 * Program Name:   fraction.cpp
 * Discussion:     Application with Fraction
 * Written By:     Your Name 
 * Date:           2022/10/27
 */
// Hear/Include Files
#include <iostream> 
#include "../include/fraction.h"
using namespace std;

// Function Definitions

Fraction::Fraction() {
    num = 0;
    denom = 0;
    cout << "----------Default Constructor " << this->num <<  "/" << this->denom << endl;
}

Fraction::Fraction(const Fraction& f) 
: num(f.num)
, denom(f.denom) {
    cout << "--------Copy Constructor " << this->num <<  "/" << this->denom << endl;
}


Fraction::Fraction(int n, int d)
: num(n)
, denom(d) {

    cout << "---------Param Constructor " << this->num <<  "/" << this->denom << endl;
}

Fraction::~Fraction() {
    cout << "---------Destuctor " << this->num <<  "/" << this->denom << endl;
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


bool Fraction::isPalindromeHelper(const std::string& str) const {

    cout << "----" << str << endl;
    const char* numArr = str.c_str();
    size_t sz = str.length();

    size_t i = 0;
    while (i < sz/2) {
        if (numArr[i] == numArr[sz-1-i])
            ++i;
        else 
            return false;
    }
    return true;
}


bool Fraction::isPalindrome() const {

    if (denom == 0) {
        return false;
    }

    if ( isPalindromeHelper(std::to_string(num)) 
        && isPalindromeHelper(std::to_string(denom)))
        return true;
    return false;
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