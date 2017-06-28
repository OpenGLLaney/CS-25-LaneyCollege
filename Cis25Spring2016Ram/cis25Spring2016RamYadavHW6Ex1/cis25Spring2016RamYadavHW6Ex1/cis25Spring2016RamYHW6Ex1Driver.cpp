/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
 */

#include "PointRamYUtility.h"

int main() {
    menuHw6();
    return 0;
}

/* COMMENT AND LOGIC
 1. I assume that you want the points keep updating as we do the task and that's how i did it.
 2. Stars on the right side of the menu seems not lined up after i paste, but in the consule in my computer, its lined up
*/

/*
 PROGRAM OUTPUT
 #1st output
 
 CIS 25 - c++ Programming
 Laney College
 Ram Yadav
 
 Assignment Infomation - -
	Assignment Number: Homework 06,
                       Exercise #1
	Written by:        Ram Yadav
	Due Date:          04/28/2016
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Not a proper call as no Point is available!
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 1
 
	Initializing option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 1
 Building Point...
 
	First Function!
 
 Enter the numerator: 1
 Enter the denominator: 2
 
	Second Function!
 
 Enter the numerator: 2
 Enter the denominator: 1
 
 Calling FractionRamY()...
 Calling FractionRamY()...
 Calling PointRamY(const FractionRamY&, FractionRamY& )...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 
 You have created Point:
 (1 / 2, 2 / 1)
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 5
 Returing to Main MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 4
 
	Printing option - -
 Printing Point:
 
	The new Point is:
	(1 / 2, 2 / 1)
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling Moving By (frX, frY)
 
	Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 
	Enter fr Y
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(3 / 2, 3 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling Moving by fr
 
 Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(5 / 2, 3 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling Moving by fr
 
 Enter fr Y
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(5 / 2, 4 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 Calling Printing
 
	The new Point is:
	(5 / 2, 4 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 
	Returing to Previous MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 3
 
	Flipping option - -
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 1
 
	Calling Flip By X
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(5 / 2, -4 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 2
 Calling Flip By Y
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(-5 / 2, -4 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 3
 
	Calling Flip By Origin
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(5 / 2, 4 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 4
 
	The new Point is:
	(5 / 2, 4 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 5
 
	Returing to Previous MENU
 
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 5
 
	HAVING FUN... 
 Calling ~PointRamY()... 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 2nd Output
 
 CIS 25 - c++ Programming
 Laney College
 Ram Yadav
 
 Assignment Infomation - -
	Assignment Number: Homework 06,
                       Exercise #1
	Written by:        Ram Yadav
	Due Date:          04/28/2016
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Not a proper call as no Point is available!
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 1
 
	Initializing option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 1
 Building Point...
 
	First Function!
 
 Enter the numerator: 4
 Enter the denominator: 1
 
	Second Function!
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY()...
 Calling FractionRamY()...
 Calling PointRamY(const FractionRamY&, FractionRamY& )...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 
 You have created Point:
 (4 / 1, 1 / 1)
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 5
 Returing to Main MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 4
 
	Printing option - -
 Printing Point:
 
	The new Point is:
	(4 / 1, 1 / 1)
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling Moving By (frX, frY)
 
	Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 
	Enter fr Y
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(5 / 1, 2 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling Moving by fr
 
 Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(6 / 1, 2 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling Moving by fr
 
 Enter fr Y
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(6 / 1, 3 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 Calling Printing
 
	The new Point is:
	(6 / 1, 3 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 
	Returing to Previous MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 3
 
	Flipping option - -
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 1
 
	Calling Flip By X
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(6 / 1, -3 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 2
 Calling Flip By Y
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(-6 / 1, -3 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 3
 
	Calling Flip By Origin
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(6 / 1, 3 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 4
 
	The new Point is:
	(6 / 1, 3 / 1)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 5
 
	Returing to Previous MENU
 
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 5
 
	HAVING FUN... 
 Calling ~PointRamY()... 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 3rd Output
 
 CIS 25 - c++ Programming
 Laney College
 Ram Yadav
 
 Assignment Infomation - -
	Assignment Number: Homework 06,
                       Exercise #1
	Written by:        Ram Yadav
	Due Date:          04/28/2016
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Not a proper call as no Points are available!
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 1
 
	Initializing option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 1
 Building Point...
 
	First Function!
 
 Enter the numerator: -1
 Enter the denominator: 1
 
	Second Function!
 
 Enter the numerator: -1
 Enter the denominator: 2
 
 Calling FractionRamY()...
 Calling FractionRamY()...
 Calling PointRamY(const FractionRamY&, FractionRamY& )...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 
 You have created Point:
 (-1 / 1, -1 / 2)
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 5
 Returing to Main MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 4
 
	Printing option - -
 Printing Point:
 
	The new Point is:
	(-1 / 1, -1 / 2)
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling Moving By (frX, frY)
 
	Enter fr X
 
 Enter the numerator: 2
 Enter the denominator: 3
 
 
	Enter fr Y
 
 Enter the numerator: 2
 Enter the denominator: 3
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(-1 / 3, 1 / 6)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling Moving by fr
 
 Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(2 / 3, 1 / 6)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling Moving by fr
 
 Enter fr Y
 
 Enter the numerator: 2
 Enter the denominator: 2
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(2 / 3, 7 / 6)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 Calling Printing
 
	The new Point is:
	(2 / 3, 7 / 6)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 
	Returing to Previous MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 3
 
	Flipping option - -
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 1
 
	Calling Flip By X
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(2 / 3, -7 / 6)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 2
 Calling Flip By Y
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(-2 / 3, -7 / 6)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 3
 
	Calling Flip By Origin
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(2 / 3, 7 / 6)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 4
 
	The new Point is:
	(2 / 3, 7 / 6)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 5
 
	Returing to Previous MENU
 
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 5
 
	HAVING FUN... 
 Calling ~PointRamY()... 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...

 
 4th Output
 
 CIS 25 - c++ Programming
 Laney College
 Ram Yadav
 
 Assignment Infomation - -
	Assignment Number: Homework 06,
 Exercise #1
	Written by:        Ram Yadav
	Due Date:          04/28/2016
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Not a proper call as no Points are available!
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 1
 
	Initializing option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 1
 Building Point...
 
	First Function!
 
 Enter the numerator: 2
 Enter the denominator: 1
 
	Second Function!
 
 Enter the numerator: -2
 Enter the denominator: 1
 
 Calling FractionRamY()...
 Calling FractionRamY()...
 Calling PointRamY(const FractionRamY&, FractionRamY& )...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 
 You have created Point:
 (2 / 1, -2 / 1)
 
 
 **********************************
 *              MENU              *
 *    1. Build Point              *
 *    2. Update Point X           *
 *    3. Update Point Y           *
 *    4. Update Point X and Y     *
 *    5. Quit                     *
 **********************************
 Select an option (using integer only) : 5
 Returing to Main MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 4
 
	Printing option - -
 Printing Point:
 
	The new Point is:
	(2 / 1, -2 / 1)
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 2
 
	Moving option - -
 Calling FractionRamY()...
 Calling FractionRamY()...
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 1
 
	Calling Moving By (frX, frY)
 
	Enter fr X
 
 Enter the numerator: 3
 Enter the denominator: 3
 
 
	Enter fr Y
 
 Enter the numerator: 2
 Enter the denominator: 2
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(3 / 1, -1 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 2
 
	Calling Moving by fr
 
 Enter fr X
 
 Enter the numerator: 1
 Enter the denominator: 1
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(4 / 1, -1 / 1)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 3
 
	Calling Moving by fr
 
 Enter fr Y
 
 Enter the numerator: 4
 Enter the denominator: 4
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(4 / 1, 0)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 4
 Calling Printing
 
	The new Point is:
	(4 / 1, 0)
 
 *******************************************
 *              MENU MovingPoint           *
 *                                         *
 *	1. By (frX, frY)                      *
 *	2. By fr X                            *
 *	3. By fr Y                            *
 *	4. Printing                           *
 *	5. Returning                          *
 *******************************************
 Select an option (1, 2, 3 or 4) : 5
 
	Returing to Previous MENU
 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 3
 
	Flipping option - -
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 1
 
	Calling Flip By X
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(4 / 1, 0)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 2
 Calling Flip By Y
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(-4 / 1, 0)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 3
 
	Calling Flip By Origin
 
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 Calling FractionRamY(int, int)...
 Calling FractionRamY(int, int)...
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...
 
	The new Point is:
	(4 / 1, 0)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 4
 
	The new Point is:
	(4 / 1, 0)
 
 *******************************************
 *              MENU FlippingPoint         *
 *                                         *
 *	1. By X                               *
 *	2. BY Y                               *
 *	3. By Origin                          *
 *	4. Printing                           *
 *	5. Returning to Main MENU             *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 5
 
	Returing to Previous MENU
 
 
 ************************************
 *             MENU Point           *
 *                                  *
 *	1. Initializing                *
 *	2. Moving                      *
 *	3. Flipping                    *
 *	4. Printing                    *
 *	5. Quit                        *
 ************************************
 Select an option (use integer value only) : 5
 
	HAVING FUN... 
 Calling ~PointRamY()... 
 Calling ~FractionRamY()...
 Calling ~FractionRamY()...

 */