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
}

Fraction::Fraction(const Fraction& f) 
: num(f.num)
, denom(f.denom) {
}


Fraction::Fraction(int n, int d)
: num(n/gcd(n, d))
, denom(d/gcd(n, d)) {
}

Fraction::~Fraction() {

}


int const Fraction::getNum() const {
    return num;
}

void Fraction::setNum(int n) {
    num = n/gcd(n, denom);
}

int const Fraction::getDenom() const {
    return denom;
}

void Fraction::setDenom(int d) {
    denom = d/gcd(num, d);
}


bool Fraction::isPalindromeHelper(const std::string& str) const {

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
    int tempN = (num > 0) ? num : -1*num;
    int tempD = (denom > 0) ? denom : -1*denom;

    if (denom == 0) {
        return false;
    }

    if ( isPalindromeHelper(std::to_string(tempN)) 
        && isPalindromeHelper(std::to_string(tempD)))
        return true;
    return false;
}        


void Fraction::print() const {
    cout << 
        "\n    Address : "
        << this
        << "\n      num : "
        << num
        << "\n      denom : "
        << denom
        << endl;
}

int Fraction::gcd(int n, int d) const {
    int gcd{ 1 };

    n = (n < 0) ? -n : n;
    d = (d < 0) ? -d : d;

    for (size_t i{ 2 }; i <= n && i <= d; ++i) {
        if (n % i == 0 && d % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

void Fraction::displayCommonPalindromeDigitBarryBalasingham() const {
    int tempN = (num > 0) ? num : -1*num;
    int tempD = (denom > 0) ? denom : -1*denom;
    int digitN[10] { 0 };
    int digitD[10] { 0 };
    int common[10] { 0 };
    int totalSimilar { 0 };

    cout << "\n  displayCommonPalindromeDigit() Option -";

    if (isPalindrome()) {        
        while (tempN > 0) {
            digitN[tempN % 10]++;

            tempN = tempN / 10;
        }
        while (tempD > 0) {
            digitD[tempD % 10]++;

            tempD = tempD / 10;
        }

        for (size_t i = 0; i < 10; ++i) {
            if (digitN[i] > 0 && digitD[i] > 0) {
                common[i]++;
                totalSimilar++;
            }
        }

        cout <<
            "\n    There is/are "
            << totalSimilar
            << " common digit(s) of";
        
        for (size_t i = 0; i < 10; i++) {
            if (common[i] > 0) {
                
                cout << 
                    "\n      "
                    << i;
            }
        }
        cout << endl;
    } else {
        cout << "\n    The current Fraction is not a Palindrome!" << endl;
    }

    return;
}