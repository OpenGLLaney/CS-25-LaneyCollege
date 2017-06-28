/**
 * Program Name: cis25Spring2016RamYadavHW7Ex1
 * Discussion:   Lab 7 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/19
 */

#include <iostream>
#include "RamYUtility.h"


void displayInfo() {
    cout << "\nCIS 25 - c++ Programming"
    "\nLaney College"
    "\nRam Yadav"
    "\n\nAssignment Infomation - - "
    "\n\tAssignment Number: Homework 07,"
    "\n\t                   Exercise #1"
    "\n\tWritten by:        Ram Yadav"
    "\n\tDue Date:          05/12/2016" << endl;
}

void recObjectBuild(RectangleRamY** one, RectangleRamY** two) {
    PointRamY first = PointRamY();
    PointRamY second = PointRamY();
    int option;
    
    do {
        cout << "    *************************************\n"\
        "    *           BUILD RECTANGLE MENU    *\n"\
        "    *    1. Build the Rectangles        *\n"\
        "    *    2. Update First Rectangle      *\n"\
        "    *    3. Update Second Rectangle     *\n"\
        "    *    4. Update Both Rectangle       *\n"\
        "    *    5. Quit                        *\n"\
        "    *************************************" << endl;
        cout << "    Select an option (using integer only) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                if (*one == 0 && *two == 0) {
                    cout << "\n\tBuilding the Rectangles " << endl;
                    cout << "\nBuilding the First Rectangle " << endl;
                    cout << "\nUpper Right Point " << endl;
                    cin >> first;
                    
                    cout <<"\nLower Left Point " << endl;
                    cin >> second;
                    
                    (*one) = new RectangleRamY(first, second);
                    
                    cout << "\n\tBuilding the Second Rectangle " << endl;
                    cout << "Upper Right Point " << endl;
                    cin >> first;
                    
                    cout <<"\nLower Left Point " << endl;
                    cin >> second;
                    
                    (*two) = new RectangleRamY(first, second);
                    
                } else
                    cout << "\nYou have already built the Rectangles" << endl;
                break;
                
            case 2:
                if (*one != 0) {
                    cout <<"\nUpdating First Rectangle" << endl;
                    cin >> first;
                    cin >> second;
                    
                    (*one)->setUR(first);
                    (*one)->setLL(second);
                } else
                    cout << "\nYou haven't built the Rectangle" << endl;
                break;
                
            case 3:
                if (*two != 0) {
                    cout <<"\nUpdating Second Rectangle" << endl;
                    cin >> first;
                    cin >> second;
                    
                    (*two)->setUR(first);
                    (*two)->setLL(second);
                } else
                    cout << "\nYou haven't built the Rectangle" << endl;
                break;
                
            case 4:
                if (*one != 0 && *two != 0) {
                    cout <<"\nUpdating First Rectangle" << endl;
                    cin >> first;
                    cin >> second;
                    
                    (*one)->setUR(first);
                    (*one)->setLL(second);
                    
                    cout <<"\nUpdating Second Rectangle" << endl;
                    cin >> first;
                    cin >> second;
                    
                    (*two)->setUR(first);
                    (*two)->setLL(second);
                } else
                    cout << "\nYou haven't built the Rectangle" << endl;
                break;
                
            case 5:
                cout << "\nQuitting BUILD OBJECT MENU" << endl;
                break;
                
            default:
                cout << "\nWRONG OPTION..." << endl;
                break;
        }
    } while (option != 5);
}

void rectangleMenu(RectangleRamY** one, RectangleRamY** two, FractionRamY** result1, FractionRamY** result2) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              RECTANGLE MENU             *"
        "\n*                                         *"
        "\n*\t1. Create two Rectangle objects       *"
        "\n*\t2. Compare by volume                  *"
        "\n*\t3. Compare by area                    *"
        "\n*\t4. Print two Rectangle onjects        *"
        "\n*\t5. Quit                               *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3, 4 or 5): ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "Calling Two Rectangle Objects " << endl;
                recObjectBuild(one, two);
                break;
                
            case 2:
                if (!*one || !*two)
                    cout << "\nYou haven't created Objects yet! " << endl;
                else {
                    cout << "\nSince there is no Height, Both Rectangle volume will be 0" << endl;
                }
                break;
                
            case 3:
                if (!*one || !*two)
                    cout << "\nYou haven't created Objects yet! " << endl;
                
                else {
                    if (*result1 == 0 && *result2 == 0) {
                        *result1 = new FractionRamY((*one)->rectangleArea());
                        *result2 = new FractionRamY((*two)->rectangleArea());
                        
                    } else {
                        **result1 = (*one)->rectangleArea();
                        **result2 = (*two)->rectangleArea();
                    }
                    
                    if (**result1 > **result2)
                        cout << "\nArea of Rectangle #1 is greater by 1" << endl;
                    
                    else if (**result1 < **result2)
                        cout << "\nArea of Rectangle #1 is less by -1" << endl;
                    
                    else if (**result1 == **result2)
                        cout << "\nArea of Rectangle #1 and Rectangle #2 is Equal" << endl;
                }
                break;
                
            case 4:
                if (!*one || !*two)
                    cout << "\nYou haven't created Objects yet! " << endl;
                else {
                    cout << "\nFirst Rectangle Objects: " << endl;
                    cout << "\nUpper Right Point: ";
                    cout << (*one)->getUR() << endl;
                    cout << "\nLower Left Point: ";
                    cout << (*one)->getLL();
                    
                    cout << "\n\nSecond Rectangle Objects: " << endl;
                    cout << "\nUpper Right Point: ";
                    cout << (*two)->getUR() << endl;
                    cout << "\nLower Left Point: ";
                    cout << (*two)->getLL()<< endl;
                }
                break;
                
            case 5:
                cout << "Quitting the RECTANGLE MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 5);
}

void circleObjectBuild(CircleRamY** circle1, CircleRamY** circle2) {
    int option;
    PointRamY pnt;
    FractionRamY radius;
    
    do {
        cout << "    ****************************************\n"\
        "    *           BUILD CIRCLE MENU          *\n"\
        "    *    1. Create two Circles             *\n"\
        "    *    2. Update First Circle Radius     *\n"\
        "    *    3. Update Second Circle Radius    *\n"\
        "    *    4. Quit                           *\n"\
        "    ****************************************" << endl;
        cout << "    Select an option (using integer only) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                if (*circle1 != 0 && *circle2 != 0)
                    cout << "\nYou have already buit a point: " << endl;
                
                else {
                    cout << "\nCreating First Circle!" << endl;
                    cout << "\nCreating a Point" << endl;
                    cin >> pnt;
                    
                    cout << "\nCreating a Radius" << endl;
                    cin >> radius;
                    
                    *circle1 = new CircleRamY(pnt, radius);
                    
                    cout << "\nCreating Second Circle" << endl;
                    cout << "\n Creating a Point" << endl;
                    cin >> pnt;
                    
                    cout << "\nCreating a Radius" << endl;
                    cin >> radius;
                    
                    *circle2 = new CircleRamY(pnt, radius);
                }
                break;
                
            case 2:
                if (*circle1 == 0)
                    cout << "\nYou haven't build the Object: " << endl;
                else {
                    cin >> radius;
                    (*circle1)->setRadius(radius);
                }
                break;
                
            case 3:
                if (*circle2 == 0)
                    cout << "\nYou haven't build the Object: " << endl;
                else {
                    cin >> radius;
                    (*circle2)->setRadius(radius);
                }
                break;
                
            case 4:
                cout << "\nQuitting BUILD CIRCLE MENU" << endl;
                break;
                
            default:
                cout << "\nWRONG OPTION..." << endl;
                break;
        }
    } while (option != 4);
}

void circleMenu(CircleRamY** circle1, CircleRamY** circle2, FractionRamY** result1, FractionRamY** result2) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              CIRCLE MENU                *"
        "\n*                                         *"
        "\n*\t1. Create two Circle objects          *"
        "\n*\t2. Compare by volume                  *"
        "\n*\t3. Compare by area                    *"
        "\n*\t4. Print two Circle objects           *"
        "\n*\t5. Quit                               *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3, 4 or 5) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                circleObjectBuild(circle1, circle2);
                break;
                
            case 2:
                if (*circle1 == 0 && *circle2 == 0)
                    cout << "\nYou haven't build the Circle" << endl;
                else
                    cout << "\nThe Volume will be 0 Since No Height!" << endl;
                break;
                
            case 3:
                if (*circle1 == 0 && *circle2 == 0)
                    cout << "\nYou haven't build the Circle" << endl;
                
                else {
                    if (*result1 == 0 && *result2 == 0) {
                        *result1 = new FractionRamY((*circle1)->circleArea());
                        *result2 = new FractionRamY((*circle2)->circleArea());
                    } else {
                        **result1 = (*circle1)->circleArea();
                        **result2 = (*circle2)->circleArea();
                    }
                }
                
                if (**result1 > **result2)
                    cout << "\nArea of Circle #1 is greater by 1" << endl;
                
                else if (**result1 < **result2)
                    cout << "\nArea of Circle #1 is less by -1" << endl;
                
                else if (**result1 == **result2)
                    cout << "\nArea of Circle #1 and Circle #2 is Equal" << endl;
                break;
                
            case 4:
                if (*circle1 != 0 && *circle2 != 0) {
                    cout << "\nFirst Circle Objects " << endl;
                    cout << (*circle1)->getCenter();
                    cout << "\nRadius is: " << endl;
                    cout << (*circle1)->getRadius();
                    
                    cout << "\n\nSecond Circle Objects " << endl;
                    cout << (*circle2)->getCenter();
                    cout << "\nRadius is: " << endl;
                    cout << (*circle2)->getRadius();

                } else
                    cout << "\nYou haven't built Circles" << endl;
                break;
                
            case 5:
                cout << "\n\tQuitting the CIRCLE MENU\n" << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 5);
}

void mixRecCir(RectangleRamY** rec1, RectangleRamY** rec2, CircleRamY** cir1, CircleRamY** cir2, FractionRamY** rec1Result, FractionRamY** rec2Result, FractionRamY** cir1Result, FractionRamY** cir2Result) {
    int option;
    int innerOption;
    
    do {
        cout << "    ******************************************\n"\
        "    *       MIXED RECTANGLE & CIRCLE MENU    *\n\n"\
        "    *    1. Compare by area                  *\n"\
        "    *    2. Compare by volume                *\n"\
        "    *    3. Print ALL objects                *\n"\
        "    *    4. Quit                             *\n"\
        "    ******************************************" << endl;
        cout << "    Select an option (using integer only) : ";
        cin >> option;
        
        switch(option) {
                case 1:
                if (*rec1 != 0 && *rec2 != 0 && *cir1 != 0 && *cir2 != 0) {
                    if (*rec1Result == 0) {
                        *rec1Result = new FractionRamY((*rec1)->rectangleArea());
                        *rec2Result = new FractionRamY((*rec2)->rectangleArea());
                    } else {
                        **rec1Result = (*rec1)->rectangleArea();
                        **rec2Result = (*rec2)->rectangleArea();
                    }
                    
                    if (*cir1Result == 0) {
                        *cir1Result = new FractionRamY((*cir1)->circleArea());
                        *cir2Result = new FractionRamY((*cir2)->circleArea());
                    } else {
                        **cir1Result = (*cir1)->circleArea();
                        **cir2Result = (*cir2)->circleArea();
                    }
                }
                
                if (*rec1Result == 0 || *rec2Result == 0 || *cir1Result == 0 || *cir2Result == 0)
                    cout << "\nYou don't have result yet!" << endl;
                
                else {
                    do {
                        cout << "    *************************************\n"\
                        "    *    1. Rec # 1 with Circle #1      *\n"\
                        "    *    2. Rec # 1 with Circle #2      *\n"\
                        "    *    3. Rec # 2 with Circle #1      *\n"\
                        "    *    4. Rec # 2 with Circle #2      *\n"\
                        "    *    5. Quit                        *\n"\
                        "    *************************************" << endl;
                        cout << "    Select an option (using integer only) : ";
                        cin >> innerOption;
                        
                        
                        switch (innerOption) {
                            case 1:
                                if ((**rec1Result) > (**cir1Result))
                                    cout << "\nRectangle #1 is greater by 1 than Circle #1" << endl;
                                
                                else if ((**rec1Result) < (**cir1Result))
                                    cout << "\nRectangle #1 is Smaller by -1 than Circle #1" << endl;
                                
                                else if ((**rec1Result) == (**cir1Result))
                                    cout << "\nRectangle #1 is equal to Circle #1" << endl;
                                break;
                                
                            case 2:
                                if ((**rec1Result) > (**cir2Result))
                                    cout << "\nRectangle #1 is greater by 1 than Circle #2" << endl;
                                
                                else if ((**rec1Result) < (**cir2Result))
                                    cout << "\nRectangle #1 is Smaller by -1 than Circle #2" << endl;
                                
                                else if ((**rec1Result) == (**cir2Result))
                                    cout << "\nRectangle #1 is equal to Circle #2" << endl;
                                break;
                                
                            case 3:
                                if ((**rec2Result) > (**cir1Result))
                                    cout << "\nRectangle #2 is greater by 1 than Circle #1" << endl;
                                
                                else if ((**rec2Result) < (**cir1Result))
                                    cout << "\nRectangle #2 is Smaller by -1 than Circle #1" << endl;
                                
                                else if ((**rec2Result) == (**cir1Result))
                                    cout << "\nRectangle #2 is equal to Circle #1" << endl;
                                break;
                                
                            case 4:
                                if ((**rec2Result) > (**cir2Result))
                                    cout << "\nRectangle #2 is greater by 1 than Circle #2" << endl;
                                
                                else if ((**rec2Result) < (**cir2Result))
                                    cout << "\nRectangle #2 is Smaller by -1 than Circle #2" << endl;
                                
                                else if ((**rec2Result) == (**cir2Result))
                                    cout << "\nRectangle #2 is equal to Circle #2" << endl;
                                break;
                                
                            case 5:
                                cout << "\nReturning Previous Menu" << endl;
                                break;
                                
                            default:
                                cout << "\nWRONG OPTION!" << endl;
                                break;
                        }
                    } while (innerOption != 5);
                }
                break;

            case 2:
                if (*rec1Result == 0 || *rec2Result == 0 || *cir1Result == 0 || *cir2Result == 0)
                    cout << "\nYour don't have result yet" << endl;
                
                else
                    cout << "\nAll volume will be 0 Since there is no Height" << endl;
                break;
                
            case 3:
                if (*rec1 == 0 || *rec2 == 0 || *cir1 == 0 || *cir2 == 0)
                    cout << "\nYou haven't created Rectangles or Circles Yet!" << endl;
                
                else {
                    cout << "\nFirst Rectangle Objects" << endl;
                    cout << (*rec1)->getUR();
                    cout << (*rec1)->getLL();
                    
                    cout << "\n\nSecond Rectangle Objects" << endl;
                    cout << (*rec2)->getUR();
                    cout << (*rec2)->getLL();
                    
                    cout << "\n\nFirst Circle Object" << endl;
                    cout << (*cir1)->getCenter() << endl;
                    cout << "Radius: " << endl;
                    cout << (*cir1)->getRadius() << endl;
                    
                    cout << "\n\nSecond Circle Object" << endl;
                    cout << (*cir2)->getCenter() << endl;
                    cout << "Radius:" << endl;
                    cout << (*cir2)->getRadius() << endl;
                }
                break;
                
            case 4:
                cout <<"\n\tQuitting the MIXED RECTANGLE & CIRCLE MENU" << endl;
                break;
                
            default:
                cout <<"\n\tWRONG OPTION...  " << endl;
                break;
        }
    } while (option != 4);
}

void menu() {
    int option;
    RectangleRamY* one = nullptr;
    RectangleRamY* two = nullptr;
    FractionRamY* result1 = nullptr;
    FractionRamY* result2 = nullptr;
    CircleRamY* circle1 = nullptr;
    CircleRamY* circle2 = nullptr;
    FractionRamY* cirResult1 = nullptr;
    FractionRamY* cirResult2 = nullptr;


    do {
        cout << "\n" << endl;
        cout << "\n*******************************************"
        "\n*             MAIN MENU                   *"
        "\n*                                         *"
        "\n*\t1. Rectangle Tasks                    *"
        "\n*\t2. Circle Tasks                       *"
        "\n*\t3. Mixed Rectangle & Circle Tasks     *"
        "\n*\t4. Quit                               *"
        "\n******************************************"
        "\nEnter your option (1, 2, 3 or 4): ";
        
        cin >> option;
        
        switch(option) {
            case 1:
                rectangleMenu(&one, &two, &result1, &result2);
                break;
                
            case 2:
                circleMenu(&circle1, &circle2, &cirResult1, &cirResult2);
                break;
                
                
            case 3:
                mixRecCir(&one, &two, &circle1, &circle2, &result1, &result2, &cirResult1, &cirResult2);
                break;
                
            case 4:
                cout << "HAVE FUN...\n" << endl;
                break;
                
            default:
                cout << "WRONG OPRION" << endl;
                break;
        }
    } while (option != 4);
    
    delete one; one = nullptr;
    delete two; two = nullptr;
    delete result1; result1 = nullptr;
    delete result2; result2 = nullptr;
    delete circle1; circle1 = nullptr;
    delete circle2; circle2 = nullptr;
    delete cirResult1; cirResult1 = nullptr;
    delete cirResult2; cirResult2 = nullptr;
}

