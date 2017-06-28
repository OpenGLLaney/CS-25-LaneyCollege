
/** 
 * Program name: cis25Spring2016RamYadavMT1BonusP1.cpp
 * Discussion:   MT1 Problem 1 Confirmation
 * Written By:   Ram Yadav
 * Due Date:     Emailed by 11:45pm 2016/03/18
 *               SUBJECT Line: cis25Spring2016RamYadavMT1BonusP1
 *               Attachment: cis25Spring2016RamYadavMT1BonusP1.cpp
 */

#include <iostream>
using namespace std;

// function prototype
int* extractUncommonEvenDigitRamYadav(int[], int);

//Application Driver
int main() {
    
    int size;
    int* arry = new int[size];
    int* result;
    
    cout <<"Enter the size please " << endl;
    cin >> size;
    
    for ( int i = 0; i < size; i++) {
        cout <<"Enter the # " << i + 1 << endl;
        cin >> *(arry + i);
    }
    
    result = extractUncommonEvenDigitRamYadav(arry, size);
    
    cout<<"Total digit is/are " << result[0] << endl;
    
    for (int i = 1; i < result[0] + 1; i++) {
        cout<<"The even digits is/are: " << result[i] << endl;
    }
    
}

//Function Definitions
int* extractUncommonEvenDigitRamYadav(int input[], int size) {
    int** ptrPtr = nullptr;                   //program runs but the logic while sorting the evenUncommon
    int number;                               // digit is wrong, so it gives the wrong result (:
    int* digitArry = new int[10];             // but i am pretty sure i got the right even uncommon digit
    int count = 0;
    int index = 0;
    int flag = 1;
    int digit;
    
    ptrPtr = new int*[size];
    
    for (int i = 0; i < size; i++) {
        number = (input[i] < 0) ? -input[i] : input[i];
        
        *(ptrPtr + i) = new int[10];
        
        for (int j = 0; j < 10; j++) {
            *(*(ptrPtr + i) + j) = 0;
        }
        
        do {
            (*(*(ptrPtr + i) + number %10))++;
            number /= 10;
        } while (number != 0);
    }
    
    for (int j = 0; j < 10; j++) {
        *(digitArry + j) = 0;
    }
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 10; j++) {
            if (*(*(ptrPtr + i) + j) != 0) {
                digitArry[j]++;
            }
        }
    }
    
    for (int j = 0; j < 10; j++) {
        if (*(digitArry + j) == 1) {
            if (j %2 == 0) {
                count++;
            }
        }
    }
    
    int* uncommonDigit = new int[count + 1];
    
    uncommonDigit[index++] = count;
    
    for (int j = 0; j < 10; j++) {
        if (*(digitArry + j) == 1) {
            if ( j %2 == 0) {
                uncommonDigit[index++] = j;
            }
        }
    }
    
    int* sortedEvenArry = new int[count + 1];
    
    sortedEvenArry[index++] = count;
    
    // From here to down i would like to sort the arry of evenUncommonDigit arry, but i figured out logic is bad, Sorry (:
    if (flag) {
        digit = uncommonDigit[1];
        flag = 0;
    }
    
    for (int j = 2; j < uncommonDigit[0] + 1; j++) {
        if (digit< uncommonDigit[j]) {
            digit = uncommonDigit[1];
            sortedEvenArry[index++] = digit;
        }
    }
    
    for (int i = 0; i < size; i++) {
        delete[] *(ptrPtr + i);
    }
    delete[] ptrPtr;
    ptrPtr = nullptr;
    delete[] digitArry;
    delete[] uncommonDigit;
    
    return sortedEvenArry;
}

/* PROGRAM OUTPUT
 //SORRY, I JUST USED THE SIMPLE FORMAT TO CHECK THE OUTPUT
 
 Enter the size please
 2
 Enter the # 1
 22334
 Enter the # 2
 33455
 Total digit is/are 0
 */


















