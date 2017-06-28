
#include <iostream>
#include <string>
#include "FractionRamY.h"
using namespace std;

int main() {
    FractionRamY ry(4, 5);
    cout << ry.area()<< endl;
    FractionRamY ry1;
    cout<<ry1.area()<< endl;
    
    ry.setAge(4);
    ry.displayAge();
    
    Vector vec;
    cout<< vec.getX() << endl;
    cout << vec.getY()<< endl;
    
    vec.setX(40);
    vec.setY(50);
    cout<< vec.getX() << endl;
    cout << vec.getY()<< endl;
    
    Vector vec2(30, 40);
    cout<< vec2.getX() << endl;
    cout << vec2.getY()<< endl;
    
}