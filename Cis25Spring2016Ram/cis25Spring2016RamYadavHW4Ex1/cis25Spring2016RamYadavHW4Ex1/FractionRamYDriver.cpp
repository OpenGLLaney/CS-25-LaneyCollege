
//Driver file
/**
 * Program Name: FractionRamYDriver.cpp
 * Discussion:   Declaration File --
 */

#include <iostream>
#include "FractionRamY.h"
#include "FractionRamYUtility.h"

using namespace std;

int main() {
    menuHw4();
    return 0;
}

/*
 PROGRAM OUTPUT
 
 
 
 CIS 25 - c++ Programming
 Laney College
 Ram Yadav
 
 Assignment Infomation - -
	Assignment Number: Homework 04,
 Exercise #1
	Written by:        Ram Yadav
	Due Date:          04/19/2016
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 6
 
	Printing option - -
 Not a proper call as no Fractions are available!
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Adding option - -
 Not a proper call as no Fractions are available!
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 1
 
	Initializing option - -
 
 
 **********************************
 *              MENU              *
 *    1. Build Fraction           *
 *    2. Update BOTH Fraction     *
 *    3. Update LEFT Fraction     *
 *    4. Update RIGHT Fraction    *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 2
 
	You didn't build the function!
 
 
 **********************************
 *              MENU              *
 *    1. Build Fraction           *
 *    2. Update BOTH Fraction     *
 *    3. Update LEFT Fraction     *
 *    4. Update RIGHT Fraction    *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 1
 Building Fraction...
 
	Fist Fraction
 Enter a Numerator -5
 Enter a denominator 9
 Calling FractionRamY(int, int)...
 
	Second Fraction
 Enter a Numerator 7
 Enter a denominator 11
 Calling FractionRamY(int, int)...
 
 
 **********************************
 *              MENU              *
 *    1. Build Fraction           *
 *    2. Update BOTH Fraction     *
 *    3. Update LEFT Fraction     *
 *    4. Update RIGHT Fraction    *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 5
 Returing to Main MENU..
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 6
 
	Printing option - -
 
 *******************************************
 *              PRINTING MENU              *
 *	(lefttOp, rightOp, result)            *
 *	1. print() - Member                   *
 *	2. print() - Stand Alone              *
 *	3. ostream << - Stand Alone           *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, or 3) : 1
 
	Calling print() - Member
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 
 *******************************************
 *              PRINTING MENU              *
 *	(lefttOp, rightOp, result)            *
 *	1. print() - Member                   *
 *	2. print() - Stand Alone              *
 *	3. ostream << - Stand Alone           *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, or 3) : 2
 
	Calling print() - Stand Alone
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 
 *******************************************
 *              PRINTING MENU              *
 *	(lefttOp, rightOp, result)            *
 *	1. print() - Member                   *
 *	2. print() - Stand Alone              *
 *	3. ostream << - Stand Alone           *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, or 3) : 3
 
	Calling ostream << - Stand Alone
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 
 *******************************************
 *              PRINTING MENU              *
 *	(lefttOp, rightOp, result)            *
 *	1. print() - Member                   *
 *	2. print() - Stand Alone              *
 *	3. ostream << - Stand Alone           *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, or 3) : 4
 
	Returing to Previous MENU
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Adding option - -
 
 *******************************************
 *              ADDING MENU                *
 *                                         *
 *	1. add() - Member                     *
 *	2. add() - Stand Alone                *
 *	3. operator+() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 WRONG OPTOIN..
 
 *******************************************
 *              ADDING MENU                *
 *                                         *
 *	1. add() - Member                     *
 *	2. add() - Stand Alone                *
 *	3. operator+() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling add() - Member
 Calling FractionRamY(int, int)...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = 8 / 99
 
 
 *******************************************
 *              ADDING MENU                *
 *                                         *
 *	1. add() - Member                     *
 *	2. add() - Stand Alone                *
 *	3. operator+() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling add() - Stand Alone
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = 8 / 99
 
 
 *******************************************
 *              ADDING MENU                *
 *                                         *
 *	1. add() - Member                     *
 *	2. add() - Stand Alone                *
 *	3. operator+() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling operator +() - Member
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = 8 / 99
 
 
 *******************************************
 *              ADDING MENU                *
 *                                         *
 *	1. add() - Member                     *
 *	2. add() - Stand Alone                *
 *	3. operator+() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 
	Returing to Previous MENU
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 3
 
	Subtracting option - -
 
 *******************************************
 *              SUBTRACTING MENU           *
 *                                         *
 *	1. subtract() - Member                *
 *	2. subtract() - Stand Alone           *
 *	3. operator-() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 WRONG OPTOIN..
 
 *******************************************
 *              SUBTRACTING MENU           *
 *                                         *
 *	1. subtract() - Member                *
 *	2. subtract() - Stand Alone           *
 *	3. operator-() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling subtract() - Member
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = -118 / 99
 
 
 *******************************************
 *              SUBTRACTING MENU           *
 *                                         *
 *	1. subtract() - Member                *
 *	2. subtract() - Stand Alone           *
 *	3. operator-() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling subtract() - Stand Alone
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = -118 / 99
 
 
 *******************************************
 *              SUBTRACTING MENU           *
 *                                         *
 *	1. subtract() - Member                *
 *	2. subtract() - Stand Alone           *
 *	3. operator-() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling operator -() - Member
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Fraction #1 = -5 / 9
 Fraction #2 = 7 / 11
 Result = -118 / 99
 
 
 *******************************************
 *              SUBTRACTING MENU           *
 *                                         *
 *	1. subtract() - Member                *
 *	2. subtract() - Stand Alone           *
 *	3. operator-() - Member               *
 *	4. Return to Previous MENU            *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 
	Returing to Previous MENU
 
 ************************************
 *             MENU                 *
 *                                  *
 *	1. Initializing                *
 *	2. Adding                      *
 *	3. Subtracting                 *
 *	4. Multiplying                 *
 *	5. Dividing                    *
 *	6. Printing                    *
 *	7. Quit                        *
 ************************************
 Select an option (use integer value only) : 7
 
	HAVING FUN...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 */

/*
 COMMENTS AND LOGIC
 The right side stars, when i printed out in the compiler it is straight, but it doesnt looks straight after i paste it.
 */



















