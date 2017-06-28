/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
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
    
    FractionRamY operator=(const FractionRamY&);
    FractionRamY operator+(const FractionRamY&);
    FractionRamY operator-(const FractionRamY&);
    FractionRamY operator*(const FractionRamY&);
    FractionRamY operator/(const FractionRamY&);
    
    FractionRamY operator-(void);
    
    bool operator==(const FractionRamY&);
    bool operator>(const FractionRamY&);
    bool operator<(const FractionRamY&);
    bool operator<(const int);
    
    friend istream& operator>>(istream&, FractionRamY&);
    friend ostream& operator<<(ostream&, const FractionRamY&);
    
private:
    int num;
    int denom;
};

#endif
