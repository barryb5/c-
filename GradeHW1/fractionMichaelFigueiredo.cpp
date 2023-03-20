/**
 * Program Name: fractionMichaelFigueiredo.cpp
 * Discussion:   File #2 -- Implementation File
 *               class FractionMichaelFigueiredo;
 * Written By:   Michael Figueiredo
 * Date:         2023/02/16
 */

#include <iostream> 
#include "fractionMichaelFigueiredo.h"
using namespace std;


FractionMichaelFigueiredo::FractionMichaelFigueiredo() : num{ 0 }, denom{ 1 } {

}

FractionMichaelFigueiredo::FractionMichaelFigueiredo(int n, int d) :
    num{ n / gcdMF(n, d) }, denom{ d / gcdMF(n, d) } {
    cout << "\n  Calling FractionMichaelFigueiredo(int, int)!"
        << endl;
}

FractionMichaelFigueiredo::FractionMichaelFigueiredo(
    const FractionMichaelFigueiredo& frRef) :
    num{ frRef.num }, denom{ frRef.denom } {
}

FractionMichaelFigueiredo::~FractionMichaelFigueiredo() {
     cout << "\n  Calling ~FractionMichaelFigueiredo()!" << endl;
}

int FractionMichaelFigueiredo::gcdMF(int arg1, int arg2) {
    int gcd = 1;
    int sign = (arg2 < 0) ? -1 : 1;

     cout << "\n  While ::gcdMF() is running!" << endl;

    arg1 = (arg1 < 0) ? -arg1 : arg1;
    arg2 = (arg2 < 0) ? -arg2 : arg2;

    for (int i = 2; i <= arg1 && i <= arg2; i++)
        if (arg1 % i == 0 && arg2 % i == 0)
            gcd = i;

    return sign * gcd;
}

int FractionMichaelFigueiredo::getDenomMF() const {

    return denom;
}

void FractionMichaelFigueiredo::setNumMF(int n) {
    int gcf;

    cout << "\n  While ::setNumMF() is running!" << endl;

    gcf = gcdMF(n, denom);

    num = n / gcf;
    denom /= gcf;
}

int FractionMichaelFigueiredo::getNumMF() const {

    return num;
}

void FractionMichaelFigueiredo::setDenomMF(int d) {
    int gcf;

    cout << "\n  While ::setDenomMF() is running!" << endl;

    gcf = gcdMF(num, d);

    num /= gcf;
    denom = d / gcf;
}

void FractionMichaelFigueiredo::updateMF(int n, int d) {
    int gcf = gcdMF(n, d);

    cout << "\n  While ::updateMF() is running!" << endl;

    num = n / gcf;
    denom = d / gcf;
}

void FractionMichaelFigueiredo::printMF() const {
    cout << "\n  While ::printMF() is running!" << endl;

    cout << "\n    Address : " << this
        << "\n      num : " << num
        << "\n      denom : " << denom << endl;
}

int FractionMichaelFigueiredo::isPalindromeMF() const {
    int flag{ false };

    int digitMF;
    int revMF = 0;
    int denomDigitMF = 0;
    int revDenomMF = 0;
    int isTrueMF = 1;
    int isFalseMF = 0;
    int n = 0;
    int d = 0;

    n = num;
    d = denom;

    do {
        digitMF = n % 10;
        revMF = (revMF * 10) + digitMF;
        n = n / 10;

    } while (n != 0);

    do {
        denomDigitMF = d % 10;
        revDenomMF = (revDenomMF * 10) + denomDigitMF;
        d = d / 10;
    } while (d != 0);

    if ((num == revMF) && (denom == revDenomMF))
    {

        return isTrueMF;
    }
    else
    {

        return isFalseMF;
    }

    return flag;
}

