/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#ifndef RAMYUTILITY_H
#define RAMYUTILITY_H
#include <iostream>
#include "FractionRamY.h"
#include "PointRamY.h"
#include "RectangleRamY.h"
#include "CircleRamY.h"
using namespace std;

void rectObjectBuild(RectangleRamY**, RectangleRamY**);
void rectangleMenu(RectangleRamY**, RectangleRamY**, FractionRamY**, FractionRamY**);
void circleObjectBuild(CircleRamY**, CircleRamY**);
void circleMenu(CircleRamY**, CircleRamY**, FractionRamY**, FractionRamY**);
void mixRecCir(RectangleRamY**, RectangleRamY**, CircleRamY**, CircleRamY**, FractionRamY**, FractionRamY**, FractionRamY**, FractionRamY**);
void menu();

#endif