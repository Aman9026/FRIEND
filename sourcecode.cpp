

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


//*************************************
//                                    *
//Animesh'S PART OF CODE    *
//                                    *
//*************************************




    int ii;

    cout<<"\nLoading 0%";

    cout<<"\n";
    cout<<"\n";

     cout<<"\nLoading 10%";

    cout<<"\n";
    cout<<"\n";

      cout<<"\nLoading 40%";

     cout<<"\n";
     cout<<"\n";

       cout<<"\nLoading 60%";

     cout<<"\n";
     cout<<"\n";

        cout<<"\nLoading 90%";

     cout<<"\n";
     cout<<"\n";

         cout<<"\nLoading 100%";

     cout<<"\n";
     cout<<"\n";

          cout<<"\nLoading Completed";

 cout<<"\n";
 cout<<"\n";



//System("CLS") is used here for clearing up the screen at this point of program

            getch();

    system ("CLS");


//DISPLAY FOR GETTING THE USER'S NAME AND SAPID


    char name[50];

    int sapid;

    cout<<"\n\n\n\n\n\n\n\n";

    cout<<"\t \t \t \t \t \t  ********************************************************************      ";

    cout<<"\n \t \t \t \t \t \t  *   ENTER YOUR NAME: ";

    cin>>name;

    cout<<"\n \t \t \t \t \t \t  *   ENTER YOUR SAPID: ";

    cin>>sapid;

    cout<<"\n \t \t \t \t \t \t  *\t\t\t \t \t \t \t \t     *";



    cout<<"\n \t \t \t \t \t \t  ********************************************************************      ";

//System("CLS") is used here for clearing up the screen at this point of program


  getch();
    system ("CLS");

    int x,xx;


    //MENU BASED OPTION USING IF ELSE

    //DISPLAY of MENU
cout<<"\n\n\n\n \t\t CHOOSE THE DESIRED OPTION FROM THE FOLLOWING- ";


    cout<<"\n\n \t\t OPTION * 1 * \tLET US C BY YASHWANT P. KANETKAR";


    cout<<"\n \t\t OPTION * 2 * \tGAMES";


    cout<<"\n\n \t\t ENTER THE OPTION NUMBER  "<<name<<":\t";


    cin>>x;
//System("CLS") is used here for clearing up the screen at this point of program

    system ("CLS");


    if (x==1)
    {
       cout<<"book";

           cout<<"\n\n\n\n \t\t THE CURRENT VERSION OF THE PROGRAM CONTAINS ONLY THE FEW CONTENTS OF FIRST CHAPTER ";

//System("CLS") is used here for clearing up the screen at this point of program

getch();
system ("CLS");


    cout<<"\n\n \t\tWHAT IS C?                   ";


    cout<<"\n\n \t\tC is a programming language developed at AT & T’s Bell Laboratories of USA in 1972.                   ";



    cout<<"\n\n \t\tIt was designed and written by a man named Dennis Ritchie.                    ";


    cout<<"\n\n \t\tIn the late seventies C began to replace the more familiar languages of that time like PL/I, ALGOL, etc. No one pushed C.                   ";


    cout<<"\n\n \t\tIt wasn’t made the ‘official’ Bell Labs language.                  ";


    cout<<"\n\n \t\tThus, without any advertisement C’s reputation spread and its pool of users grew.                   ";


    cout<<"\n\n \t\tRitchie seems to have been rather surprised that so many programmers preferred C to older languages like FORTRAN or PL/I, or the newer ones like Pascal and APL. But, that's what happened.                   ";


    cout<<"\n\n \t\tPossibly why C seems so popular is because it is reliable, simple and easy to use.                  ";


    cout<<"\n\n \t\tMoreover, in an industry where newer languages, tools and technologies emerge and vanish day in and day out, a language that has survived for more than 3 decades has to be really good.  ";


    cout<<"\n\n \t\tAn opinion that is often heard today is – “C has been already superceded by languages like C++, C# and Java, so why bother to learn C today”. I seriously beg to differ with this opinion. There are several reasons for this:                   ";


    cout<<"\n\n \t\tI believe that nobody can learn C++ or Java directly. This is because while learning these languages you have things like classes, objects, inheritance, polymorphism, templates, exception handling, references, etc. do deal with apart from knowing the actual language elements.                         ";


    cout<<"\n\n \t\tLearning these complicated concepts when you are not even comfortable with the basic language elements is like putting the cart before the horse.                        ";


    cout<<"\n\n \t\tHence one should first learn all the language elements very thoroughly using C language before migrating to C++, C# or Java.                        ";


    cout<<"\n\n \t\tThough this two step learning process may take more time, but at the end of it you will definitely find it worth the trouble.                         ";


    cout<<"\n\n \t\tC++, C# or Java make use of a principle called Object Oriented Programming (OOP) to organize the program. This organizing principle has lots of advantages to offer.                         ";


    cout<<"\n\n \t\tBut even while using this organizing principle you would still need a good hold over the language elements of C and the basic programming skills.";


    cout<<"\n\n \t\tThough many C++ and Java based programming tools and frameworks have evolved over the years the importance of C is still unchallenged because knowingly or unknowingly while using these frameworks and tools you would be still required to use the core C language elements—another good reason why one should learn C before C++, C# or Java.                         ";


    cout<<"\n\n \t\tMajor parts of popular operating systems like Windows, UNIX, Linux is still written in C.  This is because even today when it comes to performance (speed of execution) nothing beats C. Moreover, if one is to extend the operating system to work with new devices one needs to write device driver programs. These programs are exclusively written in C";


    cout<<"\n\n \t\tMobile devices like cellular phones and palmtops are becoming increasingly popular.                         ";


cout<<"\n\n \t\t Also, common consumer devices like microwave oven, washing machines and digital cameras are getting smarter by the day.                         ";


//System("CLS") is used here for clearing up the screen at this point of program
    getch();
    system ("CLS");



cout<<"\n\n \t\t This smartness comes from a microprocessor, an operating system and a program embedded in this devices.                        ";


cout<<"\n\n \t\t These programs not only have to run fast but also have to work in limited amount of memory. No wonder that such programs are written in C.                         ";


cout<<"\n\n \t\tWith these constraints on time and space, C is the language of choice while building such operating systems and programs.                         ";


cout<<"\n\n \t\tYou must have seen several professional 3D computer games where the user navigates some object, like say a spaceship and fires bullets at the invaders.                        ";


cout<<"\n\n \t\t The essence of all such games is speed. Needless to say, such games won't become popular if they takes a long time to move the spaceship or to fire a bullet.                        ";


cout<<"\n\n \t\t To match the expectations of the player the game has to react fast to the user inputs.                         ";


cout<<"\n\n \t\tThis is where C language scores over other languages. Many popular gaming frameworks have been built using C language.                         ";


cout<<"\n\n \t\tAt times one is required to very closely interact with the hardware devices.                         ";



cout<<"\n\n \t\t Since C provides several language elements that make this interaction feasible without compromising the performance it is the preferred choice of the programmer.         ";


cout<<"\n\n \t\tI hope that these are very convincing reasons why one should adopt C as the first and the very important step in your quest for learning programming languages.                         ";



//System("CLS") is used here for clearing up the screen at this point of program

getch();
system ("CLS");
//*************************************
//                                    *
//DEVMALYA'S PART OF CODE    *
//                                    *
//*************************************







cout<<"\n\n \t\tGetting Started with C                         ";


cout<<"\n\n \t\tCommunicating with a computer involves speaking the language the computer understands, which immediately rules out English as the language of communication with computer.                         ";



cout<<"\n\n \t\t The classical method of learning English is to first learn the alphabets used in the language, then learn to combine these alphabets to form words, which in turn are combined to form sentences and sentences are combined to form paragraphs. Learning C is similar and easier.                         ";



cout<<"\n\n \t\tInstead of straight-away learning how to write programs, we
	must first know what alphabets, numbers and special symbols are used in
	C, then how using them constants, variables and keywords are
	constructed, and finally how are these combined to form an instruction.
	";
cout<<"\n\n \t\tThe C Character Set                         ";



cout<<"\n\n \t\tA character denotes any alphabet, digit or special symbol used to represent information. Figure 1.2 shows the valid alphabets, numbers and special symbols allowed in C.                         ";



cout<<"\n\n \t\tConstants, Variables and Keywords                         ";



cout<<"\n\n \t\tThe alphabets, numbers and special symbols when properly combined form constants, variables and keywords. Let us see what are ‘constants’ and ‘variables’ in C. A constant is an entity that doesn’t change whereas a variable is an entity that may change                        ";


//System("CLS") is used here for clearing up the screen at this point of program
    getch();
    system ("CLS");
cout<<"\n\n \t\tIn any program we typically do lots of calculations. The results of these calculations are stored in computers memory.                         ";



cout<<"\n\n \t\tLike human memory the computer memory also consists of millions of cells.                         ";



cout<<"\n\n \t\tThe calculated values are stored in these memory cells. To make the retrieval and usage of these values easy these memory cells (also called memory locations) are given names.                         ";



cout<<"\n\n \t\t Since the value stored in each location may change the names given to these locations are called variable names. Consider the following example.                          ";



cout<<"\n\n \t\t Here 3 is stored in a memory location and a name x is given to it. Then we are assigning a new value 5 to the same memory location x. This would overwrite the earlier value 3, since a memory location can hold only one value at a time.                        ";



cout<<"\n\n \t\t Types of C Constants                        ";



cout<<"\n\n \t\t C constants can be divided into two major categories: (a) (b) Primary Constants Secondary Constants                        ";

//System("CLS") is used here for clearing up the screen at this point of program


getch();


system ("CLS");



cout<<"\n\n \t\tRules for Constructing Integer Constants                         ";



cout<<"\n\n \t\t";

cout<<"\n\n \t\tThe exponential form of representation of real constants is usually used if the value of the constant is either too small or too large. It however doesn’t restrict us in any way from using exponential form of representation for other real constants.                          ";



cout<<"\n\n \t\tIn exponential form of representation, the real constant is represented in two parts. The part appearing before ‘e’ is called mantissa, whereas the part following ‘e’ is called exponent.                         ";



cout<<"\n\n \t\tTypes of C Variables                         ";



cout<<"\n\n \t\tAs we saw earlier, an entity that may vary during program execution is called a variable. Variable names are names given to locations in memory.                         ";



cout<<"\n\n \t\t These locations can contain integer, real or character constants. In any language, the types of variables that it can support depend on the types of constants that it can handle. This is because a particular type of variable can hold only the same type of constant. For example, an integer variable can hold only an integer constant, a real variable can hold only a real constant and a character variable can hold only a character constant.                         ";



//System("CLS") is used here for clearing up the screen at this point of program


getch();


system ("CLS");

cout<<"\n";


cout<<" C Keywords        ";

cout<<"\n";

cout<<"\n";

cout<<"\n";

cout<<" Keywords are the words whose meaning has already been explained to the C compiler (or in a broad sense to the computer). The keywords cannot be used as variable names because if we do so we are trying to assign a new meaning to the keyword, which is not allowed by the computer.        ";

cout<<"\n";


cout<<"\n";


cout<<"  Some C compilers allow you to construct variable names that exactly resemble the keywords. However, it would be safer not to mix up the variable names and the keywords. The keywords are also called ‘Reserved words’.        ";

cout<<"\n";


cout<<"  Note that compiler vendors (like Microsoft, Borland, etc.) provide their own keywords apart from the ones mentioned above. These include extended keywords like near, far, asm, etc.       ";

cout<<"\n";


cout<<"   Though it has been suggested by the ANSI committee that every such compiler specific keyword should be preceded by two underscores (as in __asm ), not every vendor follows this rule.      ";

cout<<"\n";



//System("CLS") is used here for clearing up the screen at this point of program
    getch();
    system ("CLS");

