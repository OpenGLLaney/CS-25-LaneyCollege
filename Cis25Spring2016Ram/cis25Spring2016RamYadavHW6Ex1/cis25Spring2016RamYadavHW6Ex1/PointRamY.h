/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
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
    
    void moveByX(const FractionRamY&);
    void moveByY(const FractionRamY&);
    void moveBy(const FractionRamY&, const FractionRamY&);
    void moveBy(int);
    
    void flipByX(void);
    void flipByY(void);
    void flipThroughOrigin(void);
    
    void updateXY(const FractionRamY&, const FractionRamY&);
    void updateX(const FractionRamY&);
    void updateY(const FractionRamY&);
    
    void pointPrint() const;
    void displayPoint(PointRamY&);
    
    friend ostream& operator<<(ostream&, const PointRamY&);
    friend istream& operator>>(istream&, const PointRamY&);

private:
    FractionRamY x;
    FractionRamY y;
};

#endif