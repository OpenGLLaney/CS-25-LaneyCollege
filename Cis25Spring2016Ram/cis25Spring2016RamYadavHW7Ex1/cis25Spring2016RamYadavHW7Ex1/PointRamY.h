/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#ifndef POINTRAMY_H
#define POINTRAMY_H

#include "FractionRamY.h"
using namespace std;

class PointRamY {
public:
    PointRamY();
    PointRamY(const PointRamY& );
    PointRamY(const FractionRamY&);
    PointRamY(const FractionRamY&, const FractionRamY&);
    ~PointRamY();
    
    void setXfr(const FractionRamY&);
    FractionRamY getXfr(void) const;
    void setYfr(const FractionRamY&);
    FractionRamY getYfr(void) const;
    
    
    
    friend ostream& operator<<(ostream&, const PointRamY&);
    friend istream& operator>>(istream&, PointRamY&);
    
private:
    FractionRamY x;
    FractionRamY y;
};

#endif