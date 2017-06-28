
/*
 Program Name: Cis25Spring2016RamLab2Ex1.cpp
 Discussion:   Lab 2 Exercise- 1
 Written By:   Ram Yadav
 Date:         2016/02/11
 
 */

# include <iostream>

using namespace std;

// Function prototype

void displayExercise(void);
void getMenu(void);
int getLeastOccured(int);
int getMostOccured(int);


int main()
{
    displayExercise();
    getMenu();
    
    return 0;
    
}

// Display name

void displayExercise(void)
{
    cout << "\nCis 25 - C++ Programming"
    "\nLaney College"
    "\nRam Yadav"
    "\n\nAssignment Information - - "
    "\nAssignment Number:  Lab - 02"
    "\n                    Coding Assignment - - Exercise # 1"
    "\nWritten By:         Ram Yadav"
    "\nSubmitted Date:     2016-02-11" << endl;
   
}
// Display Function

void getMenu(void)
 {
 int option;
 do
 {
 cout << "\n****************************************"
     "\n*              Menu                    *"
     "\n* 1. Calling getMostOccuredDigit()     *"
     "\n* 2. Calling getLeastOccuredDigit()    *"
     "\n* 3. Quit:                             *"
     "\n****************************************"
     "\nEnter your option (1 , 2 , 3): " << endl;
     
     
 cin>> option;
 
 switch (option)
 {
 case 1:
         int integers;
         cout << " Enter an Integer: " << endl;
         cin >> integers;
         cout << "Calling getMostOccuredDigit() - - " << endl;
         getMostOccured(integers);
         
         break;
 
 case 2:
         int integer;
         cout <<"Enter an Integer: " << endl;
         cin >> integer;
         cout <<"Calling GetLeastOccuredDigit() - - " << endl;
         getLeastOccured(integer);
        
         break;
 
 case 3:
 cout << "Working Good! " << endl;
 break;
 
 default:
 cout << "WRONG OPRION! " << endl;
 }
 } while (option !=3);
 
 
 
 }
 




// Get Least Occued function

int getLeastOccured(int number)
{
    int smallestArry = 0;
    int digit = 0;
    int arrySwitch = 0;
    
    int digitArry[10] = {0};
    int temp = (number < 0) ? - number : number;
    
        
    do
    {
        digitArry[ temp % 10]++;
        temp /= 10;
        
    } while (temp !=0);
    
    for ( int i = 0; i < 10; i++)
    {
        if ( digitArry[i] != 0)
        {
            if ( !arrySwitch)
            {
                smallestArry = digitArry[i];
                digit = i;
                arrySwitch = 1;
            } else
            {
                if (smallestArry > digitArry[i])
                {
                    smallestArry = digitArry[i];
                    digit = i;
                    
                }
            }
            
        }
        
        
    }
    cout << "The digit occured least in " << number<< " is " << digit << endl;
    return smallestArry;
    
    
}

// Get Most Occured Function

int getMostOccured(int number)
{
    int smallestArry = 0;
    int digit = 0;
    int arrySwitch = 0;
    
    int digitArry[10] = {0};
    int temp = (number < 0) ? - number : number;
    
    
    do
    {
        digitArry[ temp % 10]++;
        temp /= 10;
        
    } while (temp !=0);
    
    for ( int i = 0; i < 10; i++)
    {
        if ( digitArry[i] != 0)
        {
            if ( !arrySwitch)
            {
                smallestArry = digitArry[i];
                digit = i;
                arrySwitch = 1;
            } else
            {
                if (smallestArry < digitArry[i])
                {
                    smallestArry = digitArry[i];
                    digit = i;
                    
                }
            }
            
        }
        
        
    }
    cout << "The digit occured most in " << number<< " is " << digit << endl;
    return smallestArry;
    
    
}

/* PROGRAM OUTPUT
 
 Cis 25 - C++ Programming
 Laney College
 Ram Yadav
 
 Assignment Information - -
 Assignment Number:  Lab - 02
 Coding Assignment - - Exercise # 1
 Written By:         Ram Yadav
 Submitted Date:     2016-02-11
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 4
 WRONG OPRION!
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 1
 Enter an Integer:
 123444034
 Calling getMostOccuredDigit() - -
 The digit occured most in 123444034 is 4
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 1
 Enter an Integer:
 -390345505
 Calling getMostOccuredDigit() - -
 The digit occured most in -390345505 is 5
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 1
 Enter an Integer:
 39034550
 Calling getMostOccuredDigit() - -
 The digit occured most in 39034550 is 0
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 2
 Enter an Integer:
 -45588524
 Calling GetLeastOccuredDigit() - -
 The digit occured least in -45588524 is 2
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 2
 Enter an Integer:
 42351654
 Calling GetLeastOccuredDigit() - -
 The digit occured least in 42351654 is 1
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3):
 2
 Enter an Integer:
 -555
 Calling GetLeastOccuredDigit() - -
 The digit occured least in -555 is 5
 
 ****************************************
 *              Menu                    *
 * 1. Calling getMostOccuredDigit()     *
 * 2. Calling getLeastOccuredDigit()    *
 * 3. Quit:                             *
 ****************************************
 Enter your option (1 , 2 , 3): 
 3
 Working Good! 
 Program ended with exit code: 0
 **/

/* COMMENT AND LOGIC
 No Comment!!
 **/

/*
 
 **/

