/**
 * Program Name: cis25Spring2016RamYadavHW6Ex1
 * Discussion:   Lab 6 Ex 1
 * Written By:   Ram Yadav
 * Date:         2016/05/03
 */

#include <iostream>
#include "PointRamYUtility.h"


void displayInfo() {
    cout << "\nCIS 25 - c++ Programming"
    "\nLaney College"
    "\nRam Yadav"
    "\n\nAssignment Infomation - - "
    "\n\tAssignment Number: Homework 06,"
    "\n\t                   Exercise #1"
    "\n\tWritten by:        Ram Yadav"
    "\n\tDue Date:          04/28/2016" << endl;
}

void init(PointRamY** pt) {
    int option;
    FractionRamY x = FractionRamY();
    FractionRamY y = FractionRamY();
    
    do {
        cout << "\n" << endl;
        cout << "    **********************************\n"\
        "    *              MENU              *\n"\
        "    *    1. Build Point              *\n"\
        "    *    2. Update Point X           *\n"\
        "    *    3. Update Point Y           *\n"\
        "    *    4. Update Point X and Y     *\n"\
        "    *    5. Quit                     *\n"\
        "    **********************************" << endl;
        cout << "    Select an option (using integer only) : ";
        cin >> option;
        
        switch(option) {
            case 1:
                cout << "Building Point... " << endl;
                if (*pt == 0) {
                    cout << "\n\tFirst Function!" << endl;
                    cin >> x;
                    cout << "\tSecond Function!" << endl;
                    cin >> y;
                    *pt = new PointRamY(x, y);
                    cout << "\nYou have created Point: " << endl;
                    (*pt)->displayPoint(**pt);
                } else
                    cout <<"You already built the Point " << endl;
                break;
                
            case 2:
                if (*pt!= 0) {
                    cout << "Updating Point... " << endl;
                    cout << "\n\tUpdating Point X! " << endl;
                    cin >> x;
                    
                    (*pt)->updateX(x);
                    
                    cout << "\nYour updated Point is: " << endl;
                    (*pt)->displayPoint(**pt);
                    
                } else
                    cout << "\n\tYou didn't build Point! "<< endl;
                break;

                
            case 3:
                if (*pt!= 0) {
                    cout << "Updating Point... " << endl;
                    cout << "\n\tUpdating Point Y! " << endl;
                    cin >> y;
                    
                    (*pt)->updateY(y);
                    
                    cout << "\nYour updated Point is: " << endl;
                    (*pt)->displayPoint(**pt);
                    
                } else
                    cout << "\n\tYou didn't build Point! "<< endl;
                break;
                
            case 4:
                if (*pt!= 0) {
                    cout << "Updating Point... " << endl;
                    cout << "\nFirst Fraction! " << endl;
                    cin >> x;
                    cout << "Second Fraction! " << endl;
                    cin >> y;
                    
                    (*pt)->updateXY(x, y);
                    
                    cout << "\nYour updated Point is: " << endl;
                    (*pt)->displayPoint(**pt);
                    
                } else
                    cout << "\n\tYou didn't build Points! "<< endl;
                break;
                
            case 5:
                cout << "Returing to Main MENU\n" << endl;
                break;
                
            default:
                cout << "WRONG OPRION " << endl;
                break;
        }
    }while (option != 5);
}

void menuHw6() {
    int option;
    PointRamY* pt = nullptr;
    
    displayInfo();
    
    do {
        cout << "\n************************************"
        "\n*             MENU Point           *"
        "\n*                                  *"
        "\n*\t1. Initializing                *"
        "\n*\t2. Moving                      *"
        "\n*\t3. Flipping                    *"
        "\n*\t4. Printing                    *"
        "\n*\t5. Quit                        *"
        "\n************************************"
        "\nSelect an option (use integer value only) : ";
        cin >> option;
        
        switch(option) {
            case 1:
                cout <<"\n\tInitializing option - - " << endl;
                init(&pt);
                break;
                
            case 2:
                cout <<"\n\tMoving option - - " << endl;
                if (!pt)
                    cout << "Not a proper call as no Point is available! " << endl;
                else
                    movingPoint(&pt);
                break;
                
            case 3:
                cout <<"\n\tFlipping option - - " << endl;
                if (!pt)
                    cout << "Not a proper call as no Point is available! " << endl;
                else
                    flippingPoint(&pt);
                break;
                
            case 4:
                cout <<"\n\tPrinting option - - " << endl;
                if (!pt)
                    cout << "Not a proper call as no Point is available! " << endl;
                else
                    printPoint(&pt);
                break;
                
            case 5:
                cout <<"\n\tHAVING FUN... " << endl;
                break;
                
            default:
                cout <<"\n\tWRONG OPTION...  " << endl;
                break;
        }
        
        
    } while (option != 5);
    delete pt;
}

void movingPoint(PointRamY** pt) {
    int option;
    FractionRamY frX, frY;
    
    do{
        cout << "\n*******************************************"
        "\n*              MENU MovingPoint           *"
        "\n*                                         *"
        "\n*\t1. By (frX, frY)                      *"
        "\n*\t2. By fr X                            *"
        "\n*\t3. By fr Y                            *"
        "\n*\t4. Printing                           *"
        "\n*\t5. Returning                          *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3 or 4) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling Moving By (frX, frY) " << endl;
                cout << "\n\tEnter fr X " << endl;
                cin >> frX;
                
                cout << "\n\tEnter fr Y " << endl;
                cin >> frY;
                
                (*pt)->moveBy(frX, frY);
                (*pt)->pointPrint();
                break;
                
            case 2:
                cout << "\n\tCalling Moving by fr " << endl;
                cout << "\nEnter fr X " << endl;
                cin >> frX;

                (*pt)->moveByX(frX);
                (*pt)->pointPrint();
                break;
                
            case 3:
                cout << "\n\tCalling Moving by fr " << endl;
                cout << "\nEnter fr Y " << endl;
                cin >> frY;
                
                (*pt)->moveByY(frY);
                (*pt)->pointPrint();
                break;

                
            case 4:
                cout << "Calling Printing " << endl;
                (*pt)->pointPrint();
                
                break;
                
            case 5:
                cout << "\n\tReturing to Previous MENU\n " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 5);
}

void flippingPoint(PointRamY** pt) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              MENU FlippingPoint         *"
        "\n*                                         *"
        "\n*\t1. By X                               *"
        "\n*\t2. BY Y                               *"
        "\n*\t3. By Origin                          *"
        "\n*\t4. Printing                           *"
        "\n*\t5. Returning to Main MENU             *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3, 4 or 5) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling Flip By X\n " << endl;
            
                (*pt)->flipByX();
                (*pt)->pointPrint();
                break;
                
            case 2:
                cout << "Calling Flip By Y\n" << endl;
                
                (*pt)->flipByY();
                (*pt)->pointPrint();
                break;
                
            case 3:
                cout << "\n\tCalling Flip By Origin\n " << endl;
                
                (*pt)->flipThroughOrigin();
                (*pt)->pointPrint();

                
                break;
                
            case 4:
                (*pt)->pointPrint();
                break;
                
            case 5:
                cout << "\n\tReturing to Previous MENU\n " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 5);
}

void printPoint(PointRamY** pt) {
    cout << "Printing Point:" << endl;
    (*pt)->pointPrint();
}


