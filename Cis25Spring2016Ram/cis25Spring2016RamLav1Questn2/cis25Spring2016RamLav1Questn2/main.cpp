/*
 Program Name: Cis25Spring2016Ram.cpp
 Discussion:   Lab 1 Exercise- 1
 Written By:   Ram Yadav
 Date:         2016/02/08
 
 */

#include <iostream>
using namespace std;

// Function prototype

int getLeastOccurredDigit(int);



int main()
{
    int integer;
    for (int i = 1; i <= 6; i++)
    {
        cout << "\n\nPreparing to call #" << i << endl;
        cout << "\nCalling getLeastOccuredDigit() --" << endl;;
        cout << "\nEnter an Integer: "<< endl;
        cin >> integer;
        cout << "\nA LOD in " << integer<< " is " << getLeastOccurredDigit(integer) << endl;
    }
    return 0;
}

// Function definitions

int getLeastOccurredDigit(int number)
{
    int digitArry[10] = { 0 };
    int temp = (number < 0) ? -number : number;
    do
    {
        digitArry[(temp % 10)]++;
        temp /= 10;
    } while (temp != 0);
    
    int MaxFreq = (sizeof(int)*CHAR_BIT+2)/3;
    
    int small = MaxFreq, sub=0;
    
    for(int i = 1; i < 10; i++)
    {
        if(small > digitArry[i] && digitArry[i] !=0)
        {
            sub = i;
            small = digitArry[i];
        }
    }
    return sub;
}
/* PROGRAM OUTPUT
 
 Preparing to call #1
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer:
 -45588524
 
 A LOD in -45588524 is 2
 
 
 Preparing to call #2
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer:
 213
 
 A LOD in 213 is 1
 
 
 Preparing to call #3
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer:
 42351654
 
 A LOD in 42351654 is 1
 
 
 Preparing to call #4
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer:
 -555
 
 A LOD in -555 is 5
 
 
 Preparing to call #5
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer:
 6111666
 
 A LOD in 6111666 is 1
 
 
 Preparing to call #6
 
 Calling getLeastOccuredDigit() --
 
 Enter an Integer: 
 0
 
 A LOD in 0 is 0
 **/

/* COMMENT - Logic & Comment
 
 NO COMMENT!
 
 **/
