

//Aman's Project
//Source Code Lab Project
//PROJECT FOR VCS
//DATE OF COMPLETION: 22/04/2019





//Header files

#include <iostream>

#include <cstdlib>

#include<ctime>

#include <string>

#include <stdlib.h>

#include <conio.h>

#include <stdio.h>




//declaration of global variables
using namespace std;

const int MAX_TRIES=5;

int letterFill (char, string, string&);

char square[10] = {'o','1','2','3','4','5','6','7','8','9'};



int checkwin();

void board();


//MAIN FUNCTION

int main ()
{






//THE FOLLOWING LINES ARE FOR CLI DISPLAY

    cout<<"\n \n \n \n \n \n \n \n";


    cout<<"\t \t \t \t \t \t  ********************************************************************      ";


    cout<<"\n  \t \t \t \t \t \t  *\t \t \t        HELLO                                *";


    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";


    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n  \t \t \t \t \t \t  *\t           *****  *****   *  *****  *    *  *    \t     *";

    cout<<"\n  \t \t \t \t \t \t  *\t           *      *  *    *  *      * *  *  * *    \t     *";

    cout<<"\n  \t \t \t \t \t \t  *\t           ***    * *     *  ***    *  * *  *  * \t     *";

    cout<<"\n  \t \t \t \t \t \t  *\t           *      *  *    *  *      *   **  * *    \t     *";

    cout<<"\n  \t \t \t \t \t \t  *\t           *      *   *   *  *****  *    *  *       \t     *";










    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";





    cout<<"\n \t \t \t \t \t \t  *    \t \t \t \t \t \t \t \t \t     *";

    cout<<"\n \t \t \t \t \t \t  *    BY: AMAN KUMAR GUPTA \t \t \t \t \t \t     *";

    cout<<"\t \t \t \t \t \t          ********************************************************************      ";



//System("CLS") is used here for clearing up the screen at this point of program
    getch();
    system ("CLS");






