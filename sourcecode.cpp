

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
//ANIMESH'S PART OF CODE    *
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



cout<<"\n\n \t\tInstead of straight-away learning how to write programs, we must first know what alphabets, numbers and special symbols are used in C, then how using them constants, variables and keywords are constructed, and finally how are these combined to form an instruction.                        ";





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



cout<<" The First C Program       ";

cout<<"\n";


cout<<" Armed with the knowledge about the types of variables, constants & keywords the next logical step is to combine them to form instructions.        ";

cout<<"\n";


cout<<"   However, instead of this, we would write our first C program now. Once we have done that we would see in detail the instructions that it made use of.       ";

cout<<"\n";


cout<<"Compilation and Execution  ";

cout<<"\n";


cout<<"Once you have written the program you need to type it and instruct the machine to execute it. To type your C program you need another program called Editor.         ";

cout<<"\n";


cout<<"  Once the program has been typed it needs to be converted to machine language (0s and 1s) before the machine can execute it.        ";

cout<<"\n";


cout<<"  To carry out this conversion we need another program called Compiler. Compiler vendors provide an Integrated Development Environment (IDE) which consists of an Editor as well as the Compiler.        ";

cout<<"\n";


cout<<" There are several such IDEs available in the market targeted towards different operating systems.        ";

cout<<"\n";


cout<<"  For example, Turbo C, Turbo C++ and Microsoft C are some of the popular compilers that work under MS-DOS; Visual C++ and Borland C++ are the compilers that work under Windows, whereas gcc compiler works under Linux.       ";

cout<<"\n";


cout<<" Note that Turbo C++, Microsoft C++ and Borland C++ software also contain a C compiler bundled with them. If you are a beginner you would be better off using a simple compiler like Turbo C or Turbo C++. Once you have mastered the language elements you can then switch over to more sophisticated compilers like Visual C++ under Windows or gcc under Linux.        ";

cout<<"\n";


cout<<" Note that on compiling the program its machine language equivalent is stored as an EXE file (Program1.EXE) on the disk. This file is called an executable file. If we copy this file to another machine we can execute it there without being required to recompile it. In fact the other machine need not even have a compiler to be able to execute the file.       ";

cout<<"\n";


cout<<" A word of caution! If you run this program in Turbo C++ compiler, you may get an error — “The function printf should have a prototype”. To get rid of this error, perform the following steps and then recompile the program.        ";

cout<<"\n";


cout<<"        ";



//System("CLS") is used here for clearing up the screen at this point of program



getch();


system ("CLS");


cout<<"\n";


cout<<"TO BE CONTINUED IN THE LATEST UPDATE";



    }




//*************************************
//                                    *
//ANURAG'S PART OF CODE    *
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


	// Loop until the guesses are used up

	while (num_of_wrong_guesses < MAX_TRIES)
	{
		cout << "\n\n\t\t" << unknown;


		cout << "\n\n\t\tGuess a letter: \t";


		cin >> letter;
		// Fill secret word with letter if the guess is correct,


		// otherwise increment the number of wrong guesses.

		if (letterFill(letter, word, unknown)==0)
		{
			cout << endl << "\t\tWhoops! That letter isn't in there!" << endl;

			num_of_wrong_guesses++;

		}

		else
		{

			cout << endl << "\t\tYou found a letter! Isn't that exciting!" << endl;

		}



		// Tell user how many guesses has left.

		cout << "\t\tYou have " << MAX_TRIES - num_of_wrong_guesses;


		cout << "\t\t guesses left." << endl;


		// Check if user guessed the word.


		if (word==unknown)
		{
			cout << word << endl;

			cout << "Yeah! You got it!";

			break;

		}
	}

	if(num_of_wrong_guesses == MAX_TRIES)
	{

		cout << "\n\tSorry, you lose...you've been hanged." << endl;

		cout << "\tThe word was : " << word << endl;

	}

	cin.ignore();


	cin.get();

    }

	     /* Here's the third game which will be added in the next update





#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void draw_line(int n, char ch);
void board();
void gamescore(char name1[], char name2[], int p1, int p2);
void play_dice(int &score);

void main()
{
    int player1 = 0, player2 = 0, lastposition;
    char player1name[80], player2name[80];
    clrscr();
    randomize();
    draw_line(50, '=');
    cout << "\n\n\n\n\t\tSNAKE LADDER GAME\n\n\n\n";
    draw_line(50, '=');
    cout << "\n\n\nEnter Name of player 1 :";
    gets(player1name);
    cout << "\n\n\Enter Name of player 2 :";
    gets(player2name);
    while (player1 <= 100 && player2 <= 100)
	{
        board();
        gamescore(player1name, player2name, player1, player2);
        cout << "\n\n--->" << player1name << " Now your Turn >> Press any key to play ";
        getch();
        lastposition = player1;
        play_dice(player1);
        if (player1 < lastposition)
            cout << "\n\aOops!! Snake found !! You are at postion " << player1 << "\n";
        else if (player1 > lastposition + 6)
            cout << "\nGreat!! you got a ladder !! You are at position " << player1;#
        include < iostream.h >
            cout << "\n\n--->" << player2name << " Now your Turn >> Press any key to play ";
        getch();
        lastposition = player2;
        play_dice(player2);
        if (player2 < lastposition)
            cout << "\n\n\aOops!! Snake found !! You are at position " << player2 << "\n";
        else if (player2 > lastposition + 6)
            cout << "\n\nGreat!! you got a ladder !! You are at position " << player2 << "\n";
        getch();
    }
    clrscr();
    cout << "\n\n\n";
    draw_line(50, '+');
    cout << "\n\n\t\tRESULT\n\n";
    draw_line(50, '+');
    cout << endl;
    gamescore(player1name, player2name, player1, player2);
    cout << "\n\n\n";
    if (player1 >= player2)
        cout << player1name << " !! You are the winner of the game\n\n";
    else
        cout << player2name << " !! You are the winner of the game\n\n";
    draw_line(50, '+');
    getch();
}
void draw_line(int n, char ch)
{
    for (int i = 0; i < n; i++)
        cout << ch;
}

void board()
{
    clrscr();
    cout << "\n\n";
    draw_line(50, '-');
    cout << "\n\t\tSNAKE AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 73 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
    draw_line(50, '-');
    cout << "\n\t\t LADDER AT POSITION\n";
    draw_line(50, '-');
    cout << "\n\tFrom 8 to 26\n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n";
    draw_line(50, '-');
    cout << endl;
}

void gamescore(char name1[], char name2[], int p1, int p2)
{
    cout << "\n";
    draw_line(50, '~');
    cout << "\n\t\tGAME STATUS\n";
    draw_line(50, '~');
    cout << "\n\t--->" << name1 << " is at position " << p1 << endl;
    cout << "\t--->" << name2 << " is at position " << p2 << endl;
    draw_line(50, '_');
    cout << endl;
}

void play_dice(int & score)
{
    int dice;
    dice = random(6) + 1;
    cout << "\nYou got " << dice << " Point !! ";
    score = score + dice;
    cout << "Now you are at position " << score;
    switch (score)
	{
    case 98:
        score = 28;
        break;
    case 95:
        score = 24;
        break;
    case 92:
        score = 51;
        break;
    case 83:
        score = 19;
        break;
    case 73:
        score = 1;
        break;
    case 69:
        score = 33;
        break;
    case 64:
        score = 36;
        break;
    case 59:
        score = 17;
        break;
    case 55:
        score = 7;
        break;
    case 52:
        score = 11;
        break;
    case 48:
        score = 9;
        break;
    case 46:
        score = 5;
        break;
    case 44:
        score = 22;
        break;
    case 8:
        score = 26;
        break;
    case 21:
        score = 82;
        break;
    case 43:
        score = 77;
        break;
    case 50:
        score = 91;
        break;
    case 54:
        score = 93;
        break;
    case 62:
        score = 96;
        break;
    case 66:
        score = 87;
        break;
    case 80:
        score = 100;
    }
}








    */

	    
	    



    //IF BLOCK FOR THE SECOND GAME


    if(xx==2)
    {

     int player = 1,i,choice;

    char mark;

    do
    {

        board();


        player=(player%2)?1:2;


        cout << "Player " << player << ", enter a number:  ";


        cin >> choice;


        mark=(player == 1) ? 'X' : 'O';


        if (choice == 1 && square[1] == '1')

            square[1] = mark;


        else if (choice == 2 && square[2] == '2')

            square[2] = mark;


        else if (choice == 3 && square[3] == '3')

            square[3] = mark;


        else if (choice == 4 && square[4] == '4')

            square[4] = mark;


        else if (choice == 5 && square[5] == '5')

            square[5] = mark;


        else if (choice == 6 && square[6] == '6')

            square[6] = mark;


        else if (choice == 7 && square[7] == '7')

            square[7] = mark;


        else if (choice == 8 && square[8] == '8')

            square[8] = mark;


        else if (choice == 9 && square[9] == '9')

            square[9] = mark;

        else
        {

            cout<<"Invalid move ";

            player--;

            cin.ignore();

            cin.get();
        }

        i=checkwin();


        player++;

    }while(i==-1);

    board();

    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();

    cin.get();

    return 0;
}

    if(xx!=1||xx!=2) {cout<<"\n\n\n\t\tYOU CHOOSE INCORRECT OPTION :( TRY AGAIN\n\n\n\n";}

}

if(x!=1||x!=2) {cout<<"\n\n\n\t\tYOU CHOOSE INCORRECT OPTION :( TRY AGAIN\n\n\n\n";}
}








