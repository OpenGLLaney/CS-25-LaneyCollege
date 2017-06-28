/*
 Program Name: cis25Spring2016RamLab3Ex1.cpp
 Discussion:   Lab -3 Exercise - 1
 Written By:   Ram Yadav
 Date:         2016/02/25
 
 */



#include <iostream>

using namespace std;

// Function prototype
void displayExercise(void);
void menu01Ram(void);
int* extractUncommonDigitRam( int[], int);

int main()
{
    displayExercise();
    menu01Ram();
    return 0;
}

// Function Definition

void displayExercise()
{
    cout << "\nCis 25 - C++ Programming"
    "\nLaney College"
    "\nRam Yadav"
    "\n\nAssignment Information - - "
    "\nAssignment Number:  Lab - 03,"
    "\n                    Coding Assignment - - Exercise # 1"
    "\nWritten By:         Ram Yadav"
    "\nSubmitted Date:     2016-02-25" << endl;
    
}

void menu01Ram()
{
    int option;
    int size;
    int* ary;
    int* result;
    do
    {
        cout <<"\n*****************************************"
        "\n*                 Menu                *"
        "\n* 1. Calling extraUncommonDigitRam()  *"
        "\n* 2. Quit                             *"
        "\n***************************************"
        "\nSelect an option ( 1 or 2): ";
        cin >> option;
        
        cout<< endl;
        
        switch (option)
        {
            case 1:
                
                cout << "How many integers? ";
                cin >> size;
                
                cout<< endl;
                
                ary = new int[size];
                
                for ( int i = 0; i < size; i++)
                    
                {
                    cout << "\tEnter integer # " << i + 1 << ", ";
                    cin >> *(ary + i);
                }
                
                result = extractUncommonDigitRam( ary, size);
                
                cout << " result " << extractUncommonDigitRam( ary, size) << endl;
                
                cout << endl;
                cout << "The original arry, "<< endl;
                
                for ( int i = 0; i < size; i++)
                {
                    cout <<"\t"<< *(ary + i) << endl;
                }
                
                cout << "\nCalling extractUncommonDigitRam() - " << endl;
                
                if ( result[0] == 0)
                {
                    cout << "\nThe uncommon digits, There is/ are no uncommon digit(s)" << endl;
                    
                }
                
                else
                {
                    cout << "\nThe uncommon digits, There is/ are: " << result[0] <<  " uncommon digit(s)" << endl;
                    
                    for (int i = 1; i < result[0] + 1; i++)
                        cout << result[i] << endl;
                }
                
                delete [] result;
                delete [] ary;
                break;
                
            case 2:
                cout <<"Fun Exercise. . . "<< endl;
                
                break;
                
            default:
                cout <<" WRONG OPTION!" << endl;
                
                break;
        }
        
    }while (option != 2);
    
}

int* extractUncommonDigitRam(int input[], int size)
{
    
    
    int count = 0;
    int temp;
    int** ptrPtr = nullptr;
    int* tempPtr = new int[10];
    int* result;
    
    ptrPtr = new int* [size];
    for (int i = 0; i < size; i++)
    {
        temp = input[i];
        
        if (temp < 0)
            temp = -temp;
        
        *(ptrPtr + i) = new int[10];
        for (int j =  0; j < 10; j++)
            *(*(ptrPtr + i) + j) = 0;
        do
        {
            (*(*(ptrPtr + i) + (temp %10)))++;
            temp /= 10;
            
        } while (temp != 0);
        
    }
    
    for (int j = 0; j < 10; j++)
    {
        *(tempPtr + j) = 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (*(*(ptrPtr + i) + j) != 0)
            {
                (*(tempPtr + j))++;
            }
        }
    }
    
    
    for ( int j = 0; j < 10; j++)
    {
        if ((*(tempPtr + j)) == 1)
        {
            count++;
        }
    }
    
    result = new int[count + 1];
    
    temp = 0;
    result[temp++] = count;
    
    
    
    for ( int j = 0; j < 10; j++)
    {
        if ((*(tempPtr + j)) == 1)
        {
            if ( j %2 == 0)
                result[temp++] = j;
            
        }
    }
    
    for ( int j = 0; j < 10; j++)
    {
        if ((*(tempPtr + j)) == 1)
        {
            if ( j %2 == 1)
                result[temp++] = j;
        }
    }
    
    
    for (int i = 0; i < size; i++)
    {
        delete[] * (ptrPtr + i);
        *(ptrPtr + i) = 0;
    }
    
    delete[] ptrPtr;
    ptrPtr = 0;
    
    delete[] tempPtr;
    
    
    return result;
}

