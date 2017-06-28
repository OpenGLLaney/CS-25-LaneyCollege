
/**
 * Program name: cis25Spring2016RamYadavMT1BonusP2.cpp
 * Discussion:   MT1 Problem 2 Confirmation
 * Written By:   Ram Yadav
 * Due Date:     Emailed by 11:45pm 2016/03/18
 *               SUBJECT Line: cis25Spring2016RamYadavMT1BonusP2
 *               Attachment:   cis25Spring2016RamYadavMT1BonusP2.cpp
 */

#include <iostream>
using namespace std;

//Function Prototypes
int* extractLargestUncommonEvenDigitRamYadav(int[], int);
int* extractUncommonEvenDigitRamYadav(int[], int);

//Application Driver
int main() {
    
    return 0;
}

//Function Definitions
/*
I think this function is right.
I couldn't run this funciton becaue the answer of this function
is based on the result of the first function, and the result is wrong (:
*/
int* extractLargestUncommonEvenDigitRamYadav(int input[], int size) { 
    int* result = extractUncommonEvenDigitRamYadav(input, size);
    int num;
    int largDigit = result[1]; //declared variable that i didn't use,sorry (:
    int digitOccuranceArry[10] = {0};
    int* storeResult = nullptr;   
    int index = 0;
    int digit;
    int flag = 1;
    
    for (int i = 0; i < size; i++) {
        num = (input[i] < 0) ? - input[i] : input[i];
        
        do {
            digitOccuranceArry[num %10]++;
            num /= 10;
        } while (num != 0);
    }
    
    if (result[0]) {
        storeResult = new int[5];
        storeResult[index++] = result[0];
        storeResult[index++] = result[1];
        storeResult[index++] = digitOccuranceArry[result[1]];
        
    } else {
        storeResult = new int[1];
        storeResult[index++] = 0;
    }
    
    for (int i = 0; i < size; i++) {
        num = (*(input + i) < 0) ? -input[i] : input[i];
        
        do {
            digit = num %10;
            if (digit == result[1]) {
                if (flag) {
                    storeResult[index++] = i;
                    storeResult[index++] = *(input + i);
                    flag = 0;
                }
            }
        } while (num != 0);
    }                         //realized didn't delete dynamic memory, sorry (:
    
    return storeResult;
}



















