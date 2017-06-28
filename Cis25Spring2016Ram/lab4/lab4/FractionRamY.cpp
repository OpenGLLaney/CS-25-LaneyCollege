#include <iostream>
#include "FractionRamY.h"
using namespace std;

FractionRamY::FractionRamY(int x, int y) : weight(x), height(y) {
    
}
FractionRamY::FractionRamY() : weight(5), height(5) {
    
}

void FractionRamY:: setAge(int value) {
    age = value;
}

void FractionRamY:: displayAge() {
    cout << age << endl;
}

// Another class *********************************

Vector::Vector() : x(0.0), y(0.0) {
    
}

Vector::Vector(float value, float value1) : x(value), y(value1) {
    
}

float Vector::getX() {
    return x;
}

float Vector::getY() {
    return y;
}

void Vector::setX(float value) {
    x = value;
}

void Vector::setY(float value1) {
    y = value1;
}






