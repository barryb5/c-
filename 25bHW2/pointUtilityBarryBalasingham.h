/**
* Program Name: pointUtilityBarryBalasingham.h
* Discussion:   File #7
*                 Suportive functions for class Point
*               Note!
*                   1. You are NOT ALLOWED to add any member
*                      data to the class.
* Written By:   BarryBalasingham
* Updated on:   2023/03/07
*/
#ifndef POINTUTILITYBARRYBALASINGHAM_H
#define POINTUTILITYBARRYBALASINGHAM_H
// Header/Include Files
#include <iostream>
#include "pointBarryBalasingham.h"
using namespace std;

void createPointBB(PointBarryBalasingham*&, PointBarryBalasingham*&);
void updatePointBB(PointBarryBalasingham*&, PointBarryBalasingham*&);

void displayPointBB(PointBarryBalasingham*, int);
void alignmentBB(PointBarryBalasingham*, PointBarryBalasingham*);
void quadrantBB(PointBarryBalasingham*);
void midpointBB(PointBarryBalasingham*, PointBarryBalasingham*);
void isPlaindromeBB(PointBarryBalasingham*, PointBarryBalasingham*);

FractionBarryBalasingham areaOfRectangleBB(PointBarryBalasingham*, PointBarryBalasingham*);
#endif