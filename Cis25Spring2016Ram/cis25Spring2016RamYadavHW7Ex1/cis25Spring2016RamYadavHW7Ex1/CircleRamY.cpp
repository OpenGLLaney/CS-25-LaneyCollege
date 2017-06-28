/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#include "CircleRamY.h"

CircleRamY::CircleRamY() : center(0,0), radius(0) {
    
}

CircleRamY::CircleRamY(const CircleRamY& arg) {
    center = arg.center;
    radius = arg.radius;
}

CircleRamY::CircleRamY(const PointRamY& ctr) {
    center = ctr;
    radius = 0;
}

CircleRamY::CircleRamY(const PointRamY& pt, const FractionRamY& fr) {
    center = pt;
    FractionRamY temp = fr;
    while (temp.getNum() < 0) {
        cout << "Fraction can't be Negative Value, Re-Enter again: " << endl;
        cin >> temp;
    }
    
    radius = temp;
}

CircleRamY::~CircleRamY() {
    
}

void CircleRamY::setRadius(const FractionRamY& red) {
    radius = red;
}

FractionRamY CircleRamY::getRadius()const {
    return radius;
}

void CircleRamY::setCenter(const PointRamY& pnt) {
    center = pnt;
}

PointRamY CircleRamY::getCenter() const {
    return center;
}

FractionRamY CircleRamY::circleArea() {
    int n, d;
    
    n = 4 * 22 * radius.getNum() * radius.getNum();
    d = 7 * radius.getDenom() * radius.getDenom();
    
   return FractionRamY(n,d);
}

FractionRamY CircleRamY::circleVolume() {
    return FractionRamY(0);
}
