/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#ifndef RECTANGLERAMY_H
#define RECTANGLERAMY_H

#include <iostream>
#include "FractionRamY.h"
#include "PointRamY.h"
using namespace std;

class RectangleRamY {
public:
    RectangleRamY();
    RectangleRamY(const PointRamY&);
    RectangleRamY(const PointRamY&,const PointRamY&);
    RectangleRamY(const RectangleRamY&);
    ~RectangleRamY();
    
    void setUR(const PointRamY&);
    PointRamY getUR(void) const;
    void setLL(const PointRamY&);
    PointRamY getLL(void) const;
    
    FractionRamY rectangleArea(void);
    FractionRamY rectangleVolume( void);
    
private:
    PointRamY upperRpt;
    PointRamY lowerLpt;
};

#endif