


/*
 Program Name: Cis25Spring2016Ram.cpp
 Discussion:   Lab 1 Exercise - 1
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
    cout << "Enter an Integer: ";
    cin >> integer;
    cout << "\nThe least occurred digit (LOD) in " << integer << " is " << getLeastOccurredDigit(integer) << endl;
    return 0;
}

// Function difinition

int getLeastOccurredDigit(int number)
{
    int digitArry[10] = {0};
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

/* PORGRAM OUTPUT
 Enter an Integer: -324234234
 
 The least occurred digit (LOD) in -324234234 is 2 
 
**/

/* COMMENT- Lotic and Comment
 
 NO COMMENT!
 
 **/
