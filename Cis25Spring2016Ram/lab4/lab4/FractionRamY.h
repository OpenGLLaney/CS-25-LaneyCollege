#ifndef FRACTIONRAMY_H
#define FRACTIONRAMY_H

class FractionRamY {
    int height, weight;
private:
    int age;

public:
    FractionRamY(int, int);
    FractionRamY();
    int area() {
        return height * weight;
    }
    
    void setAge(int value);
    void displayAge();
   // ~FractionRamY();
};

class Vector {
private:
    double x;
    double y;
    
public:
    Vector();
    Vector(float x, float y);
    //~Vector();
    
    float getX();
    float getY();
    
    void setX(float x);
    void setY(float y);
    
    
};

#endif