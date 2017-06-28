// Definination file
/**
 * Program Name: FractionRamYUtility.cpp
 * Discussion:   Implementation File --
                 FractionRamYUtility Stand Alone Functions Definitions
 */

#include <iostream>
#include "FractionRamYUtility.h"

FractionRamY add(const FractionRamY& fr1,const FractionRamY& fr2) {
    int num, denom;
    int lN, lD, rN, rD;
    lN = fr1.getNum();
    lD = fr1.getDenom();
    rN = fr2.getNum();
    rD = fr2.getDenom();
    
    num = lN * rD + rN * lD;
    denom = lD * rD;
    return FractionRamY (num, denom);
}

FractionRamY subtract(const FractionRamY& fr1,const FractionRamY& fr2) {
    int num, denom;
    int lN, lD, rN, rD;
    lN = fr1.getNum();
    lD = fr1.getDenom();
    rN = fr2.getNum();
    rD = fr2.getDenom();
    
    num = lN * rD - rN * lD;
    denom = lD * rD;
    return FractionRamY (num, denom);
}

FractionRamY multiply(const FractionRamY& fr1,const FractionRamY& fr2) {
    int num, denom;
    int lN, lD, rN, rD;
    lN = fr1.getNum();
    lD = fr1.getDenom();
    rN = fr2.getNum();
    rD = fr2.getDenom();
    
    num = lN * rN;
    denom = lD * rD;
    return FractionRamY (num, denom);
}

FractionRamY divide(const FractionRamY& fr1,const FractionRamY& fr2) {
    int num, denom;
    int lN, lD, rN, rD;
    lN = fr1.getNum();
    lD = fr1.getDenom();
    rN = fr2.getNum();
    rD = fr2.getDenom();
    
    num = lN * rD;
    denom = lD * rN;
    return FractionRamY (num, denom);
}

void FractionPrintSA(const FractionRamY& fr) {
    if (fr.getNum() == 0)
        cout << fr.getNum();
    else
        cout <<fr.getNum() << " / " << fr.getDenom() << endl;
}

void displayInfo() {
    cout << "\nCIS 25 - c++ Programming"
    "\nLaney College"
    "\nRam Yadav"
    "\n\nAssignment Infomation - - "
    "\n\tAssignment Number: Homework 04,"
    "\n\t                   Exercise #1"
    "\n\tWritten by:        Ram Yadav"
    "\n\tDue Date:          04/19/2016" << endl;
}

void init(FractionRamY** lptrPtr, FractionRamY** rptrPtr) {
    int option;
    int n;
    int d;
    do {
        cout << "\n" << endl;
        cout << "    **********************************\n"\
        "    *              MENU              *\n"\
        "    *    1. Build Fraction           *\n"\
        "    *    2. Update BOTH Fraction     *\n"\
        "    *    3. Update LEFT Fraction     *\n"\
        "    *    4. Update RIGHT Fraction    *\n"\
        "    *    5. Quit                     *\n"\
        "    **********************************" << endl;
        cout << "    Select an option (using integer only) : ";
        cin >> option;
        
        switch(option) {
            case 1:
                cout << "Building Fraction... " << endl;
                if (*lptrPtr == 0) {
                    if (*lptrPtr == 0) {
                        cout << "\n\tFist Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a denominator ";
                        cin >> d;
                        *lptrPtr = new FractionRamY(n, d);
                    }
                
                    if (*rptrPtr == 0) {
                        cout << "\n\tSecond Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a denominator ";
                        cin >> d;
                        *rptrPtr = new FractionRamY(n, d);
                    }
                } else
                    cout <<"You already built the fraction " << endl;
                    
                break;
                
            case 2:
                if (*lptrPtr != 0 && *rptrPtr != 0) {
                    int gcd;
                    cout << "Updating Fraction... " << endl;
                
                    if (*lptrPtr != 0) {
                        cout << "\n\tFist Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a Dinominator ";
                        cin >> d;
                        
                        while (d == 0) {
                            cout << "Enter a NON- ZERO denominator " << endl;
                            cin >> d;
                        }
                        
                        if (d < 0) {
                            n = -n;
                            d = -d;
                        }
                        
                        
                        gcd = (*lptrPtr)->gcdBF(n, d);
                        (*lptrPtr)->setNum(n/gcd);
                        (*lptrPtr)->setDenom(d/gcd);
                    }
                    
                    if (*rptrPtr != 0) {
                        cout << "\n\tSecond Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a Denominator ";
                        cin >> d;
                        
                        while (d == 0) {
                            cout << "Enter a NON- ZERO denominator " << endl;
                            cin >> d;
                        }
                        
                        if (d < 0) {
                            n = -n;
                            d = -d;
                        }
                        gcd = (*rptrPtr)->gcdBF(n, d);
                        (*rptrPtr)->setNum(n/gcd);
                        (*rptrPtr)->setNum(d/gcd);
                    }
                } else
                    cout << "\n\tYou didn't build the function! "<< endl;
                break;
                
            case 3:
                if (*lptrPtr != 0 && *rptrPtr != 0) {
                    int gcd;
                    cout << "Updating Fraction... " << endl;
                    
                    if (*lptrPtr != 0) {
                        cout << "\n\tFist Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a Dinominator ";
                        cin >> d;
                        
                        while (d == 0) {
                            cout << "Enter a NON- ZERO denominator " << endl;
                            cin >> d;
                        }
                        
                        if (d < 0) {
                            n = -n;
                            d = -d;
                        }
                        
                        
                        gcd = (*lptrPtr)->gcdBF(n, d);
                        (*lptrPtr)->setNum(n/gcd);
                        (*lptrPtr)->setDenom(d/gcd);
                    }
                } else
                    cout << "\n\tYou didn't build the function! "<< endl;
                break;
                
            case 4:
                if (*lptrPtr != 0 && *rptrPtr != 0) {
                    int gcd;
                    cout << "Updating Fraction... " << endl;
                    if (*rptrPtr != 0) {
                        cout << "\n\tSecond Fraction" << endl;
                        cout << "Enter a Numerator ";
                        cin >> n;
                        
                        cout << "Enter a Denominator ";
                        cin >> d;
                        
                        while (d == 0) {
                            cout << "Enter a NON- ZERO denominator " << endl;
                            cin >> d;
                        }
                        
                        if (d < 0) {
                            n = -n;
                            d = -d;
                        }
                        gcd = (*rptrPtr)->gcdBF(n, d);
                        (*rptrPtr)->setNum(n/gcd);
                        (*rptrPtr)->setNum(d/gcd);
                    }
                } else
                    cout << "\n\tYou didn't build the function! "<< endl;
                break;
            
            case 5:
                cout << "Returing to Main MENU.. " << endl;
                break;
                
            default:
                cout << "WRONG OPRION " << endl;
                break;
        }
    }while (option != 5);
}

void menuHw4() {
    int option;
    FractionRamY* lop = nullptr;
    FractionRamY* rop = nullptr;
    FractionRamY* result = nullptr;
    
    displayInfo();
    
   do {
        cout << "\n************************************"
                "\n*             MENU                 *"
                "\n*                                  *"
                "\n*\t1. Initializing                *"
                "\n*\t2. Adding                      *"
                "\n*\t3. Subtracting                 *"
                "\n*\t4. Multiplying                 *"
                "\n*\t5. Dividing                    *"
                "\n*\t6. Printing                    *"
                "\n*\t7. Quit                        *"
                "\n************************************"
                "\nSelect an option (use integer value only) : ";
        cin >> option;
        
        switch(option) {
            case 1:
                cout <<"\n\tInitializing option - - " << endl;
                init(&lop, &rop);
                break;
                
            case 2:
                cout <<"\n\tAdding option - - " << endl;
                if (!lop || !rop)
                    cout << "Not a proper call as no Fractions are available! " << endl;
                else
                addMenu(&lop, &rop, &result);
                break;
                
            case 3:
                cout <<"\n\tSubtracting option - - " << endl;
                if (!lop || !rop)
                    cout << "Not a proper call as no Fractions are available! " << endl;
                else
                subtractingMendu(&lop, &rop, &result);
                break;
                
            case 4:
                cout <<"\n\tMultiplying option - - " << endl;
                if (!lop || !rop)
                    cout << "Not a proper call as no Fractions are available! " << endl;
                else
                multiplyMenu(&lop, &rop, &result);
                break;
                
            case 5:
                cout <<"\n\tDividing option - - " << endl;
                if (!lop || !rop)
                    cout << "Not a proper call as no Fractions are available! " << endl;
                else
                divideMenu(&lop, &rop, &result);
                break;
                
            case 6:
                cout <<"\n\tPrinting option - - " << endl;
                if (!lop || !rop)
                    cout << "Not a proper call as no Fractions are available! " << endl;
                else
                printMenu(lop, rop, result);
                break;
                
            case 7:
                cout <<"\n\tHAVING FUN... " << endl;
                break;
                
            default:
                cout <<"\n\tWRONG OPTION...  " << endl;
                break;
        }
        
        
    } while (option != 7);
    delete lop;
    delete rop;
    delete result;
}

void addMenu(FractionRamY** lFr, FractionRamY** rFr, FractionRamY** result) {
    int option;
    
    do{
        cout << "\n*******************************************"
            "\n*              ADDING MENU                *"
            "\n*                                         *"
            "\n*\t1. add() - Member                     *"
            "\n*\t2. add() - Stand Alone                *"
            "\n*\t3. operator+() - Member               *"
            "\n*\t4. Return to Previous MENU            *"
            "\n*******************************************"
            "\nSelect an option (1, 2, 3 or 4) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling add() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY((*lFr)->add(**rFr));
                } else {
                    **result = (*lFr)->add(**rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 2:
                cout << "\n\tCalling add() - Stand Alone " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(add(**lFr, **rFr));
                } else {
                    **result = add(**lFr, **rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 3:
                cout << "\n\tCalling operator +() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(**lFr + **rFr);
                } else {
                    **result = **lFr + **rFr;
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 4:
                cout << "\n\tReturing to Previous MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 4);
}

void subtractingMendu(FractionRamY** lFr, FractionRamY** rFr, FractionRamY** result) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              SUBTRACTING MENU           *"
        "\n*                                         *"
        "\n*\t1. subtract() - Member                *"
        "\n*\t2. subtract() - Stand Alone           *"
        "\n*\t3. operator-() - Member               *"
        "\n*\t4. Return to Previous MENU            *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3 or 4) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling subtract() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY((*lFr)->subtract(**rFr));
                } else {
                    **result = (*lFr)->subtract(**rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 2:
                cout << "\n\tCalling subtract() - Stand Alone " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(subtract(**lFr, **rFr));
                } else {
                    **result = subtract(**lFr, **rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 3:
                cout << "\n\tCalling operator -() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(**lFr - **rFr);
                } else {
                    **result = **lFr - **rFr;
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 4:
                cout << "\n\tReturing to Previous MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 4);
}

void multiplyMenu(FractionRamY** lFr, FractionRamY** rFr, FractionRamY** result) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              MULTIPLYING MENU           *"
        "\n*                                         *"
        "\n*\t1. multiply() - Member                *"
        "\n*\t2. multiply() - Stand Alone           *"
        "\n*\t3. operator*() - Member               *"
        "\n*\t4. Return to Previous MENU            *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3 or 4) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling multiply() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY((*lFr)->multiply(**rFr));
                } else {
                    **result = (*lFr)->multiply(**rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 2:
                cout << "\n\tCalling multiply() - Stand Alone " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(multiply(**lFr, **rFr));
                } else {
                    **result = multiply(**lFr, **rFr);
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 3:
                cout << "\n\tCalling operator *() - Member " << endl;
                if (*result == 0) {
                    *result = new FractionRamY(**lFr * **rFr);
                } else {
                    **result = **lFr * **rFr;
                }
                cout <<"Fraction #1 = " << **lFr;
                cout <<"Fraction #2 = " << **rFr;
                cout <<"Result = " << **result << endl;
                break;
                
            case 4:
                cout << "\n\tReturing to Previous MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 4);
}

void divideMenu(FractionRamY** lFr, FractionRamY** rFr, FractionRamY** result) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              DIVIDYING MENU             *"
        "\n*                                         *"
        "\n*\t1. divide() - Member                  *"
        "\n*\t2. divide() - Stand Alone             *"
        "\n*\t3. operator/() - Member               *"
        "\n*\t4. Return to Previous MENU            *"
        "\n*******************************************"
        "\nSelect an option (1, 2, 3 or 4) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling divide() - Member " << endl;
                if ( (*rFr)->getNum() == 0) {
                    cout << "Second fraction numerator must be NON - ZERO " << endl;
                } else {
                    if (*result == 0) {
                        *result = new FractionRamY((*lFr)->divide(**rFr));
                    } else {
                        **result = (*lFr)->divide(**rFr);
                    }
                    cout <<"Fraction #1 = " << **lFr;
                    cout <<"Fraction #2 = " << **rFr;
                    cout <<"Result = " << **result << endl;
                }
                break;
                
            case 2:
                cout << "\n\tCalling divide() - Stand Alone " << endl;
                if ( (*rFr)->getNum() == 0) {
                    cout << "Second fraction numerator must be NON - ZERO " << endl;
                } else {
                    if (*result == 0) {
                        *result = new FractionRamY(divide(**lFr, **rFr));
                    } else {
                        **result = divide(**lFr, **rFr);
                    }
                    cout <<"Fraction #1 = " << **lFr;
                    cout <<"Fraction #2 = " << **rFr;
                    cout <<"Result = " << **result << endl;
                }
                
                break;
                
            case 3:
                cout << "\n\tCalling operator /() - Member " << endl;
                if ( (*rFr)->getNum() == 0) {
                    cout << "Second fraction numerator must be NON - ZERO " << endl;
                } else {
                    if (*result == 0) {
                        *result = new FractionRamY(**lFr / **rFr);
                    } else {
                        **result = **lFr / **rFr;
                    }
                    cout <<"Fraction #1 = " << **lFr;
                    cout <<"Fraction #2 = " << **rFr;
                    cout <<"Result = " << **result << endl;
                }
                
                break;
                
            case 4:
                cout << "\n\tReturing to Previous MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 4);
}

void printMenu(FractionRamY* lFr, FractionRamY* rFr, FractionRamY* result) {
    int option;
    
    do{
        cout << "\n*******************************************"
        "\n*              PRINTING MENU              *"
        "\n*\t(lefttOp, rightOp, result)            *"
        "\n*\t1. print() - Member                   *"
        "\n*\t2. print() - Stand Alone              *"
        "\n*\t3. ostream << - Stand Alone           *"
        "\n*\t4. Return to Previous MENU            *"
        "\n*******************************************"
        "\nSelect an option (1, 2, or 3) : ";
        cin >> option;
        
        switch (option) {
            case 1:
                cout << "\n\tCalling print() - Member " << endl;
                cout <<"Fraction #1 = ";
                lFr->FractionPrint();
                cout <<"Fraction #2 = ";
                rFr->FractionPrint();
                if (result != 0) {
                    cout << "Result = ";
                    result->FractionPrint();
                }
                break;
                
            case 2:
                cout << "\n\tCalling print() - Stand Alone " << endl;
                cout <<"Fraction #1 = ";
                FractionPrintSA(*lFr);
                cout <<"Fraction #2 = ";
                FractionPrintSA(*rFr);
                if (result != 0) {
                    cout << "Result = ";
                    FractionPrintSA(*result);
                }
                break;
                
            case 3:
                cout << "\n\tCalling ostream << - Stand Alone" << endl;
                cout <<"Fraction #1 = ";
                FractionPrintSA(*lFr);
                cout <<"Fraction #2 = ";
                FractionPrintSA(*rFr);
                if (result != 0) {
                    cout << "Result = " << *result << endl;
                }
                break;
                
            case 4:
                cout << "\n\tReturing to Previous MENU " << endl;
                break;
                
            default:
                cout << "WRONG OPTOIN.." << endl;
                break;
        }
    } while (option != 4);
}


