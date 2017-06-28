/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#include "PointRamY.h"

PointRamY::PointRamY() : x(FractionRamY()), y(FractionRamY()) {

}

PointRamY::PointRamY(const PointRamY& pfr) {
    x = pfr.x;
    y = pfr.y;
}

PointRamY::PointRamY(const FractionRamY& fr) {
    x = FractionRamY(fr.getNum(), 1);
    y = FractionRamY(fr.getDenom(), 1);
}

PointRamY::PointRamY(const FractionRamY& lft, const FractionRamY& rfr) {
    x = lft;
    y = rfr;
}

PointRamY::~PointRamY() {
    
}

void PointRamY::setXfr(const FractionRamY& setX) {
    x = setX;
}

FractionRamY PointRamY::getXfr () const {
    return x;
}

void PointRamY::setYfr(const FractionRamY& setY) {
    y = setY;
}

FractionRamY PointRamY::getYfr() const {
    return y;
}

ostream& operator<<(ostream& out, const PointRamY& point) {
    out << "\n(x, y) = " << point.x << " , " << point.y;
    return out;
}

istream& operator>>(istream& in, PointRamY& point) {
    cout << "\nEnter x:";
    in >> point.x;
    cout << "\nEnter y:";
    in >> point.y;
    return in;
}
















