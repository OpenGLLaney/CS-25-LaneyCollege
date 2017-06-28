/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#include "RectangleRamY.h"

RectangleRamY::RectangleRamY() : upperRpt(PointRamY()), lowerLpt(PointRamY()) {

}

RectangleRamY::RectangleRamY(const PointRamY& lpt) {
    upperRpt = PointRamY(0,0);
    lowerLpt = lpt;
}

RectangleRamY::RectangleRamY(const PointRamY& rpt,const PointRamY& lpt) {
    upperRpt = rpt;
    lowerLpt = lpt;
}

RectangleRamY::RectangleRamY(const RectangleRamY& arg) {
    upperRpt = arg.upperRpt;
    lowerLpt = arg.lowerLpt;
}

RectangleRamY::~RectangleRamY() {
    
}

void RectangleRamY::setUR(const PointRamY& pt) {
    upperRpt = pt;
}

PointRamY RectangleRamY::getUR() const {
    return upperRpt;
}

void RectangleRamY::setLL(const PointRamY& lPt) {
    lowerLpt = lPt;
}

PointRamY RectangleRamY::getLL() const {
    return lowerLpt;
}

FractionRamY RectangleRamY:: rectangleArea(){
    FractionRamY changeX, changeY, result;
    
    changeX = upperRpt.getXfr() - lowerLpt.getXfr();
    if (changeX < 0)
        changeX = -changeX;
    changeY = upperRpt.getYfr() - lowerLpt.getYfr();
    if (changeY < 0)
        changeY = - changeY;
    
    result = changeX * changeY;
    
    return result;
}

FractionRamY RectangleRamY::rectangleVolume() {
    return FractionRamY(0);
}
