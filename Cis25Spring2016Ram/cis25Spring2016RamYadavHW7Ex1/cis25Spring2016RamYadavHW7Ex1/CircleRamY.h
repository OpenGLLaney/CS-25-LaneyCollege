/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#ifndef CIRCLERAMY_H
#define CIRCLERAMY_H

#include <iostream>
#include "FractionRamY.h"
#include "PointRamY.h"
#include "RectangleRamY.h"
using namespace std;

class CircleRamY {
public:
    CircleRamY();
    CircleRamY(const CircleRamY&);
    CircleRamY(const PointRamY&);
    CircleRamY(const PointRamY&, const FractionRamY&);
    ~CircleRamY();
    
    void setRadius(const FractionRamY& );
    FractionRamY getRadius(void) const;
    void setCenter(const PointRamY&);
    PointRamY getCenter(void) const;
    
    FractionRamY circleArea();
    FractionRamY circleVolume();
    
private:
    PointRamY center;
    FractionRamY radius;
    
};

#endif