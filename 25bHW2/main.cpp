#include <iostream>

#include "fractionBarryBalasingham.h"
#include "pointBarryBalasingham.h"
#include "pointUtilityBarryBalasingham.h"
#include "fractionUtilityBarryBalasingham.h"


int main(int argc, char* argv[]) {

    std::cout << "Hello world" << std::endl;

    FractionBarryBalasingham f0(1,1);
    FractionBarryBalasingham f1(11,1);

    // addFractionBB(&f0, &f1).printBB();

    PointBarryBalasingham p0(50, 5, 4, -1);
    p0.getXBB()->printBB();
    p0.getYBB()->printBB();   

    // PointBarryBalasingham p1(5, -5, 12, 2);
    // p1.getXBB()->printBB();
    // p1.getYBB()->printBB();

    // isPlaindromeBB(&p0, &p1);


    // quadrantBB(&p0);
    // quadrantBB(&p1);

    // midpointBB(&p0, &p1);

    // areaOfRectangleBB(&p0, &p1).printBB();
}