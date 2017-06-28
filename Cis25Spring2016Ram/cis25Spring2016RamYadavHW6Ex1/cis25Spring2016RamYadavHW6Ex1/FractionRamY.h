/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
 */

#ifndef FRACTIONRAMY_H
#define FRACTIONRAMY_H
#include <iostream>
using namespace std;

class FractionRamY {
public:
    FractionRamY();
    FractionRamY(int);
    FractionRamY(int n, int d);
    FractionRamY(const FractionRamY&);
    ~FractionRamY();
    
    void setNum(int);
    int getNum() const;
    void setDenom(int);
    int getDenom() const;
    void FractionPrint() const;
    int gcdBF(int, int);
    
    FractionRamY add(const FractionRamY&);
    FractionRamY subtract(const FractionRamY&);
    FractionRamY multiply(const FractionRamY&);
    FractionRamY divide(const FractionRamY&);
    
    FractionRamY operator=(const FractionRamY&);
    FractionRamY operator+(const FractionRamY&);
    FractionRamY operator-(const FractionRamY&);
    FractionRamY operator*(const FractionRamY&);
    FractionRamY operator/(const FractionRamY&);
    FractionRamY operator-(void);
    
    friend istream& operator>>(istream&, FractionRamY&);
    friend ostream& operator<<(ostream&, const FractionRamY&);
    
private:
    int num;
    int denom;
};

#endif