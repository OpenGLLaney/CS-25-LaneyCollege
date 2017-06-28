/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
 */

#include "PointRamY.h"

PointRamY::PointRamY() : x(FractionRamY()), y(FractionRamY()) {
    cout << "Calling PointRamY()... " << endl;
}

PointRamY::PointRamY(const PointRamY& pfr) {
    cout << "Calling PointRamY(const PointRamY& )..." << endl;
    x = pfr.x;
    y = pfr.y;
}

PointRamY::PointRamY(const FractionRamY& fr) {
     cout << "Calling PointRamY(const FractionRamY& )..." << endl;
    x = FractionRamY(fr.getNum(), 1);
    y = FractionRamY(fr.getDenom(), 1);
    
}

PointRamY::PointRamY(const FractionRamY& lft, const FractionRamY& rfr) {
     cout << "Calling PointRamY(const FractionRamY&, FractionRamY& )..." << endl;
    x = lft;
    y = rfr;
    
}

PointRamY::~PointRamY() {
    cout << "Calling ~PointRamY()... " << endl;
}


void PointRamY::moveByX(const FractionRamY& fr) {
    x = x + fr;

}

void PointRamY::moveByY(const FractionRamY& fr) {
    y = y + fr;
}

void PointRamY::moveBy(const FractionRamY& lfr, const FractionRamY& rfr) {
    x = x + lfr;
    y = y + rfr;
}

void PointRamY::moveBy(int value) {
    x = x + value;
    y = y + value;
}

void PointRamY::flipByX() {
    y = -y;
}

void PointRamY::flipByY() {
    x = -x;
}

void PointRamY::flipThroughOrigin() {
    x = -x;
    y = -y;
}

void PointRamY::updateXY(const FractionRamY& lf, const FractionRamY& rf) {
    x = lf;
    y = rf;
}

void PointRamY::updateX(const FractionRamY& xFr) {
    x = xFr;
}

void PointRamY::updateY(const FractionRamY& yFr) {
    y = yFr;
}

void PointRamY::pointPrint() const {
    cout << "\n\tThe new Point is: ";
    cout << "\n\t(" << x << ", " << y << ")" << endl;
}

void PointRamY::displayPoint(PointRamY& pt) {
    cout << "(" << pt.x << ", " << pt.y << ")" << endl;
}

ostream& operator <<(ostream& out, const PointRamY& p) {
    out << "\n x: " << p.x << "\n y: " << p.y << endl;
    return out;
}

