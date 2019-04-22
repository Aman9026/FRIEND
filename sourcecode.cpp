

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


//*************************************
//                                    *
//ANURAG PART OF CODE    *
//                                    *
//*************************************





//the second if block for menu in games section
    if (x==2)
    {


    //DSIPLAY OF GAMES MENU
    cout<<"\n\n\n\n \t\t CHOOSE THE DESIRED OPTION FROM THE FOLLOWING- ";

    cout<<"\n\n \t\t OPTION * 1 * \tHangman";

    cout<<"\n \t\t OPTION * 2 * \tTic Tac Toe";

    cout<<"\n\n \t\t ENTER THE OPTION NUMBER  "<<name<<":\t";

    cin>>xx;

   system ("CLS");

   //IF BLOCK FOR CHOOSING THE FIRST GAME
    if (xx==1)
    {

	string name;

	char letter;

	int num_of_wrong_guesses=0;

	string word;

	string words[] =
	{
		"india",
		"pakistan",
		"nepal",
		"malaysia",
		"bhutan",
		"australia",
		"iran",
		"russia",
		"oman",
		"indonesia"
	};

	//choose and copy a word from array of words randomly
	srand(time(NULL));

	int n=rand()% 10;

	word=words[n];

	// Initialize the secret word with the * character.
	string unknown(word.length(),'*');


	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";


	// welcome the user
	cout << "\n\n\t\tWelcome to hangman...Guess a country Name";


	cout<<"\n";

	cout << "\n\n\t\tEach letter is represented by a star.";

cout<<"\n";


	cout << "\n\n\t\tYou have to type only one letter in one try";

cout<<"\n";


	cout << "\n\n\t\tYou have " << MAX_TRIES << " tries to try and guess the word.";

cout<<"\n";


	cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

cout<<"\n";


