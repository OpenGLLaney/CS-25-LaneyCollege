/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
 */

#include "FractionRamY.h"

FractionRamY::FractionRamY() : num(0), denom(1) {
    cout << "Calling FractionRamY()..." << endl;
}

FractionRamY::FractionRamY(int value) : num(value), denom(1) {
    cout << "Calling FractionRamY(int)..." << endl;
}

FractionRamY::FractionRamY(int n, int d) {
    int gcd;
    cout << "Calling FractionRamY(int, int)..." << endl;
    if (d == 0) {
        do {
            cout <<"Enter a NON - ZERO value for denom: " << endl;
            cin >> d;
        } while (d == 0);
    }
    
    gcd = gcdBF(n, d);
    num = ((d < 0) ? -n : n) / gcd;
    denom = ((d < 0) ? -d : d) / gcd;
}

FractionRamY::FractionRamY(const FractionRamY& arg) {
    cout << "Calling FractionRamY(const FractionRamY&)..." << endl;
    num = arg.num/gcdBF(arg.num, arg.denom);
    denom = arg.denom/gcdBF(arg.num, arg.denom);
}

FractionRamY::~FractionRamY(){
    cout << "Calling ~FractionRamY()..." << endl;
}

void FractionRamY::setNum(int n) {
    num = n;
}

int FractionRamY::getNum() const {
    return num;
}

void FractionRamY::setDenom(int d) {
    num = (d < 0) ? - num : num;
    denom = (d < 0) ? -d: d;
}

int FractionRamY::getDenom() const {
    return denom;
}

int FractionRamY::gcdBF(int n, int d) {
    int gcd = 1;
    
    if (n < 0)
        n = -n;
    
    if (d < 0)
        d = -d;
    
    for (int i = 2; i <= n && i <= d; i++) {
        if (n % i == 0 && d % i == 0)
            gcd = i;
    }
    return gcd;
}

void FractionRamY::FractionPrint() const {
    if (num == 0)
        cout << num << endl;
    else
        cout << num << " / " << denom << endl;
}

FractionRamY FractionRamY::add(const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom + denom * fr.num;
    d = denom * fr.denom;
    return FractionRamY (n,d);
}

FractionRamY FractionRamY::subtract(const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom - denom *fr.num;
    d = denom * fr.denom;
    return FractionRamY(n,d);
}

FractionRamY FractionRamY::multiply(const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr. num;
    d = denom * fr. denom;
    return FractionRamY(n, d);
}

FractionRamY FractionRamY::divide(const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom;
    d = denom * fr. num;
    return FractionRamY(n,d);
}

FractionRamY FractionRamY::operator= (const FractionRamY& fr) {
    int n, d;
    
    n = fr.num;
    d = fr.denom;
    num = n;
    denom = d;
    return FractionRamY (n,d);
}

FractionRamY FractionRamY::operator+ (const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom + denom * fr.num;
    d = denom * fr.denom;
    return FractionRamY (n, d);
}

FractionRamY FractionRamY::operator- (const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom - denom *fr.num;
    d = denom * fr.denom;
    return FractionRamY(n,d);
}

FractionRamY FractionRamY::operator* (const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr. num;
    d = denom * fr. denom;
    return FractionRamY(n, d);
}

FractionRamY FractionRamY::operator/ (const FractionRamY& fr) {
    int n;
    int d;
    n = num * fr.denom;
    d = denom * fr. num;
    return FractionRamY(n,d);
}

FractionRamY FractionRamY::operator- () {
    num = -num;
    return FractionRamY(num, denom);
}

istream& operator>>(istream& in, FractionRamY& fraction) {
    
    int gcd;
    
    cout << "\nEnter the numerator: ";
    in >> fraction.num;
    cout << "Enter the denominator: ";
    in >> fraction.denom;
    
    while (fraction.denom == 0) {
        cout << " Denom can't be 0, please enter again: " ;
        in >> fraction.denom;
        
    }
    
    gcd = fraction.gcdBF(fraction.num, fraction.denom);
    
    fraction.num /= gcd;
    fraction.denom/= gcd;
    
    cout << endl;
    return in;
}

ostream& operator<<(ostream& out, const FractionRamY& fraction) {
    if (fraction.num == 0) {
        return out << fraction.num;
    } else {
        return out << fraction.num << " / " << fraction.denom;
    }
}




