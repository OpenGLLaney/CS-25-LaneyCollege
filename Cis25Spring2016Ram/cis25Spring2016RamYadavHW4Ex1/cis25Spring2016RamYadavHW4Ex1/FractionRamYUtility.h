// Header File
/**
 * Program Name: FractionRamYUtility.h
 * Discussion:   Declaration File --
                 FractionRamYUtility Stand Alone Function
 */
#ifndef FRACTIONRAMYUTILITY_H
#define FRACTIONRAMYUTILITY_H
#include <iostream>
#include "FractionRamY.h"
using namespace std;

FractionRamY add(const FractionRamY&,const FractionRamY&);
FractionRamY subtract(const FractionRamY&,const FractionRamY&);
FractionRamY multiply(const FractionRamY&,const FractionRamY&);
FractionRamY divide(const FractionRamY&,const FractionRamY&);
void FractionPrintSA(const FractionRamY&);

void displayInfo();
void init(FractionRamY**, FractionRamY**);
void menuHw4();
void addMenu(FractionRamY**, FractionRamY**, FractionRamY**);
void subtractingMendu(FractionRamY**, FractionRamY**, FractionRamY**);
void multiplyMenu(FractionRamY**, FractionRamY**, FractionRamY**);
void divideMenu(FractionRamY**, FractionRamY**, FractionRamY**);
void printMenu(FractionRamY*, FractionRamY*, FractionRamY*);





#endif