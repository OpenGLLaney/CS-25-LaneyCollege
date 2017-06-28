/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#include "RamYUtility.h"


int main() {
    menu();
    return 0;
}


/*
 PROGRAM OUTPUT
 
 *******************************************
 *             MAIN MENU                   *
 *                                         *
 *	1. Rectangle Tasks                    *
 *	2. Circle Tasks                       *
 *	3. Mixed Rectangle & Circle Tasks     *
 *	4. Quit                               *
 ******************************************
 Enter your option (1, 2, 3 or 4): 1
 
 *******************************************
 *              RECTANGLE MENU             *
 *                                         *
 *	1. Create two Rectangle objects       *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Rectangle onjects        *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5): 1
 Calling Two Rectangle Objects
 *************************************
 *           BUILD RECTANGLE MENU    *
 *    1. Build the Rectangles        *
 *    2. Update First Rectangle      *
 *    3. Update Second Rectangle     *
 *    4. Update Both Rectangle       *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 1
 
	Building the Rectangles
 
 Building the First Rectangle
 
 Upper Right Point
 
 Enter x:
 Enter the numerator: 4
 Enter the denominator: 1
 
 
 Enter y:
 Enter the numerator: 1
 Enter the denominator: 1
 
 
 Lower Left Point
 
 Enter x:
 Enter the numerator: 1
 Enter the denominator: 2
 
 
 Enter y:
 Enter the numerator: 2
 Enter the denominator: 1
 
 
	Building the Second Rectangle
 Upper Right Point
 
 Enter x:
 Enter the numerator: 2
 Enter the denominator: 1
 
 
 Enter y:
 Enter the numerator: -2
 Enter the denominator: 1
 
 
 Lower Left Point
 
 Enter x:
 Enter the numerator: -1
 Enter the denominator: 1
 
 
 Enter y:
 Enter the numerator: -1
 Enter the denominator: 2
 
 *************************************
 *           BUILD RECTANGLE MENU    *
 *    1. Build the Rectangles        *
 *    2. Update First Rectangle      *
 *    3. Update Second Rectangle     *
 *    4. Update Both Rectangle       *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 5
 
 Quitting BUILD OBJECT MENU
 
 *******************************************
 *              RECTANGLE MENU             *
 *                                         *
 *	1. Create two Rectangle objects       *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Rectangle onjects        *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5): 2
 
 Since there is no Height, Both Rectangle volume will be 0
 
 *******************************************
 *              RECTANGLE MENU             *
 *                                         *
 *	1. Create two Rectangle objects       *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Rectangle onjects        *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5): 3
 
 Area of Rectangle #1 is less by -1
 
 *******************************************
 *              RECTANGLE MENU             *
 *                                         *
 *	1. Create two Rectangle objects       *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Rectangle onjects        *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5): 4
 
 First Rectangle Objects:
 
 Upper Right Point:
 (x, y) = (4 / 1) , (1 / 1)
 
 Lower Left Point:
 (x, y) = (1 / 2) , (2 / 1)
 
 Second Rectangle Objects:
 
 Upper Right Point:
 (x, y) = (2 / 1) , (-2 / 1)
 
 Lower Left Point:
 (x, y) = (-1 / 1) , (-1 / 2)
 
 *******************************************
 *              RECTANGLE MENU             *
 *                                         *
 *	1. Create two Rectangle objects       *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Rectangle onjects        *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5): 5
 Quitting the RECTANGLE MENU
 
 
 
 *******************************************
 *             MAIN MENU                   *
 *                                         *
 *	1. Rectangle Tasks                    *
 *	2. Circle Tasks                       *
 *	3. Mixed Rectangle & Circle Tasks     *
 *	4. Quit                               *
 ******************************************
 Enter your option (1, 2, 3 or 4): 2
 
 *******************************************
 *              CIRCLE MENU                *
 *                                         *
 *	1. Create two Circle objects          *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Circle objects           *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 1
 ****************************************
 *           BUILD CIRCLE MENU          *
 *    1. Create two Circles             *
 *    2. Update First Circle Radius     *
 *    3. Update Second Circle Radius    *
 *    4. Quit                           *
 ****************************************
 Select an option (using integer only) : 1
 
 Creating First Circle!
 
 Creating a Point
 
 Enter x:
 Enter the numerator: 1
 Enter the denominator: 2
 
 
 Enter y:
 Enter the numerator: 2
 Enter the denominator: 1
 
 
 Creating a Radius
 
 Enter the numerator: 4
 Enter the denominator: 1
 
 
 Creating Second Circle
 
 Creating a Point
 
 Enter x:
 Enter the numerator: -1
 Enter the denominator: 1
 
 
 Enter y:
 Enter the numerator: -1
 Enter the denominator: 2
 
 
 Creating a Radius
 
 Enter the numerator: 2
 Enter the denominator: 1
 
 ****************************************
 *           BUILD CIRCLE MENU          *
 *    1. Create two Circles             *
 *    2. Update First Circle Radius     *
 *    3. Update Second Circle Radius    *
 *    4. Quit                           *
 ****************************************
 Select an option (using integer only) : 4
 
 Quitting BUILD CIRCLE MENU
 
 *******************************************
 *              CIRCLE MENU                *
 *                                         *
 *	1. Create two Circle objects          *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Circle objects           *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 2
 
 The Volume will be 0 Since No Height!
 
 *******************************************
 *              CIRCLE MENU                *
 *                                         *
 *	1. Create two Circle objects          *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Circle objects           *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 3
 
 Area of Circle #1 is greater by 1
 
 *******************************************
 *              CIRCLE MENU                *
 *                                         *
 *	1. Create two Circle objects          *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Circle objects           *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 4
 
 First Circle Objects
 
 (x, y) = (1 / 2) , (2 / 1)
 Radius is:
 (4 / 1)
 
 Second Circle Objects
 
 (x, y) = (-1 / 1) , (-1 / 2)
 Radius is:
 (2 / 1)
 *******************************************
 *              CIRCLE MENU                *
 *                                         *
 *	1. Create two Circle objects          *
 *	2. Compare by volume                  *
 *	3. Compare by area                    *
 *	4. Print two Circle objects           *
 *	5. Quit                               *
 *******************************************
 Select an option (1, 2, 3, 4 or 5) : 5
 
	Quitting the CIRCLE MENU
 
 
 
 
 *******************************************
 *             MAIN MENU                   *
 *                                         *
 *	1. Rectangle Tasks                    *
 *	2. Circle Tasks                       *
 *	3. Mixed Rectangle & Circle Tasks     *
 *	4. Quit                               *
 ******************************************
 Enter your option (1, 2, 3 or 4): 3
 ******************************************
 *       MIXED RECTANGLE & CIRCLE MENU    *
 
 *    1. Compare by area                  *
 *    2. Compare by volume                *
 *    3. Print ALL objects                *
 *    4. Quit                             *
 ******************************************
 Select an option (using integer only) : 3
 
 First Rectangle Objects
 
 (x, y) = (4 / 1) , (1 / 1)
 (x, y) = (1 / 2) , (2 / 1)
 
 Second Rectangle Objects
 
 (x, y) = (2 / 1) , (-2 / 1)
 (x, y) = (-1 / 1) , (-1 / 2)
 
 First Circle Object
 
 (x, y) = (1 / 2) , (2 / 1)
 Radius:
 (4 / 1)
 
 
 Second Circle Object
 
 (x, y) = (-1 / 1) , (-1 / 2)
 Radius:
 (2 / 1)
 ******************************************
 *       MIXED RECTANGLE & CIRCLE MENU    *
 
 *    1. Compare by area                  *
 *    2. Compare by volume                *
 *    3. Print ALL objects                *
 *    4. Quit                             *
 ******************************************
 Select an option (using integer only) : 1
 *************************************
 *    1. Rec # 1 with Circle #1      *
 *    2. Rec # 1 with Circle #2      *
 *    3. Rec # 2 with Circle #1      *
 *    4. Rec # 2 with Circle #2      *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 1
 
 Rectangle #1 is Smaller by -1 than Circle #1
 *************************************
 *    1. Rec # 1 with Circle #1      *
 *    2. Rec # 1 with Circle #2      *
 *    3. Rec # 2 with Circle #1      *
 *    4. Rec # 2 with Circle #2      *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 2
 
 Rectangle #1 is Smaller by -1 than Circle #2
 *************************************
 *    1. Rec # 1 with Circle #1      *
 *    2. Rec # 1 with Circle #2      *
 *    3. Rec # 2 with Circle #1      *
 *    4. Rec # 2 with Circle #2      *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 3
 
 Rectangle #2 is Smaller by -1 than Circle #1
 *************************************
 *    1. Rec # 1 with Circle #1      *
 *    2. Rec # 1 with Circle #2      *
 *    3. Rec # 2 with Circle #1      *
 *    4. Rec # 2 with Circle #2      *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 4
 
 Rectangle #2 is Smaller by -1 than Circle #2
 *************************************
 *    1. Rec # 1 with Circle #1      *
 *    2. Rec # 1 with Circle #2      *
 *    3. Rec # 2 with Circle #1      *
 *    4. Rec # 2 with Circle #2      *
 *    5. Quit                        *
 *************************************
 Select an option (using integer only) : 5
 
 Returning Previous Menu
 ******************************************
 *       MIXED RECTANGLE & CIRCLE MENU    *
 
 *    1. Compare by area                  *
 *    2. Compare by volume                *
 *    3. Print ALL objects                *
 *    4. Quit                             *
 ******************************************
 Select an option (using integer only) : 2
 
 All volume will be 0 Since there is no Height
 ******************************************
 *       MIXED RECTANGLE & CIRCLE MENU    *
 
 *    1. Compare by area                  *
 *    2. Compare by volume                *
 *    3. Print ALL objects                *
 *    4. Quit                             *
 ******************************************
 Select an option (using integer only) : 4
 
	Quitting the MIXED RECTANGLE & CIRCLE MENU
 
 
 
 *******************************************
 *             MAIN MENU                   *
 *                                         *
 *	1. Rectangle Tasks                    *
 *	2. Circle Tasks                       *
 *	3. Mixed Rectangle & Circle Tasks     *
 *	4. Quit                               *
 ******************************************
 Enter your option (1, 2, 3 or 4): 4
 HAVE FUN...
 
*/

/*
 COMMENT AND LOGIC
 for the right star in the menu that are not lined up, In the output in 
 my compiler it is lined up, after i past it doesn't seems lined up
*/