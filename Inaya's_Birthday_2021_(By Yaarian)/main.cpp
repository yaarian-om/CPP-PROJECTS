#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<string.h>
#include<thread>
#include<conio.h>
#include<chrono>
#include <stdlib.h>
#include <windows.h> /// for colors
#include "birthday_function.h"
using std :: cout;
using std :: flush;
using std :: string;
using std :: this_thread:: sleep_for;
using std :: chrono:: milliseconds;
using std :: cin;
using std :: cout;
using namespace std;

int main ()
{
    Birthday_Function Inaya;
    system("Color 06"); /// Applying Color Yellow

    string match ;
    ifstream file;
    file.open("Confidential.txt");
    getline(file,match);
    file.close();



    cout<<"Are You Inaya? Please verify. "<<endl;
    int t=100000000,t2=100000000;

     cout<< "Please Wait.";
    string message00 = "...............";
    Inaya.slow_print(message00,200);
    cout<<endl;


    cout<<endl<<endl<<"Enter The Passcode : ";
    string pass;
    getline(cin,pass);




    int res = match.compare(pass);  /// Comparing Password





    if (res == 0)
    {
        int times = 100;

        string message0 = "Inaya Confirmed  !";
        Inaya.slow_print(message0,times);


        cout<<endl<<endl<<endl;

        Inaya.delay2(t2); /// Delaying time
        system("cls"); /// clearing screen
        system("Color A"); /// Applying Color Yellow


        string message1 = "Friendship is one of the best relationships a person could have in his life.";
        Inaya.slow_print(message1,times);
        cout<<endl;
        string message2 = "Just imagine how you made my life so special!";
        Inaya.slow_print(message2,times);
        cout<<endl;
        string message3 = "You are the one who fills up my life with the best memories is one that is more precious than gold";
        Inaya.slow_print(message3,times);
        cout<<endl;

        string message4 = "I still remember the first day we meet.";
        Inaya.slow_print(message4,times);
        cout<<endl;

        string message5 = "Not just the meet i clearly remember each and every line you've said that day.";
        Inaya.slow_print(message5,times);
        cout<<endl;

        string message6 = "I wanted to be that friend who will be your side no matter what.";
        Inaya.slow_print(message6,times);
        cout<<endl;

        string message7 = "A friend who Pull you out of the room when you feel like the world is falling apart and celebrate your victories with you.";
        Inaya.slow_print(message7,times);
        cout<<endl;

        string message8 = "But, the thing is i consider you as my best friend and one of the 2 most longest friends of my life,";
        Inaya.slow_print(message8,times);
        cout<<endl;


        string message9 = "which you don't consider. Still if I ask you who is your best friend, I know you won't take my name.";
        Inaya.slow_print(message9,times);
        cout<<endl;


        string message10 = "It's a special day to you and I'm not gonna waste it anymore.";
        Inaya.slow_print(message10,times);
        cout<<endl<<endl;



        cout<<endl<<endl<<"Do You Like till here? Wanna go further? (y/n)?  :  ";
        char ans;
        cin>>ans;
        cout<<endl<<endl;

        string name;
    ofstream file;
    file.open("input.txt",ios::out|ios::app );

    file<<endl<<endl<< ans << endl;


        system("cls"); /// clearing screen

        ans = tolower(ans);

        if(ans=='y')
        {
            string message11 = "I know you are special. Special to me my friend.";
            Inaya.slow_print(message11,times);
            cout<<endl;

            string message12 = "I just want you to give me some time as well as you give other you care.";
            Inaya.slow_print(message12,times);
            cout<<endl<<endl;

            string message13 = "Don't know this approach is going to change your mind?(y/n) : ";
            Inaya.slow_print(message13,times);

            char ans2;
            cin>>ans2;
            ans2 = tolower(ans2);
            cout<<endl<<endl;


    file<< ans2 << endl;


            system("cls"); /// clearing screen

            if(ans2=='y')
            {
                string message14 = "I hope you'll maintain it. Take Love.";
                Inaya.slow_print(message14,times);
                cout<<endl;

            }
            else
            {
                string message15 = "I knew it. It's OK, that means i am just nothing to you. Leave it.";
                Inaya.slow_print(message15,times);
                cout<<endl;
            }

            string message16 = "Let's come the topic.";
            Inaya.slow_print(message16,times);
            cout<<endl<<endl;

            Inaya.delay2(t2);
            system("cls");

            system("Color 03"); /// Applying Color Blue

            string message17 = "For someone who enriches my life to no end.";
            Inaya.slow_print(message17,times);
            cout<<endl;

            string message18 = "I am wishing the most lavish birthday possible!";
            Inaya.slow_print(message18,times);
            cout<<endl;

            string message19 = "You are such a genuinely special to me and to have you in my life is one of the biggest blessings.";
            Inaya.slow_print(message19,times);
            cout<<endl;

            string message20 = "You know what? You're kinda lucky charm for me.";
            Inaya.slow_print(message20,times);
            cout<<endl;

            string message21 = "There isn't a single day that goes past where I would take you for granted.";
            Inaya.slow_print(message1,times);
            cout<<endl;

            string message22 = "I appreciate you and everything that you do.";
            Inaya.slow_print(message22,times);
            cout<<endl<<endl<<endl;
            Inaya.delay2(t2); /// Delaying time
            system("cls"); /// clearing screen
            system("Color F"); /// Applying Color White

            string message23 = "wait wait wait....";
            Inaya.slow_print(message23,times);
            cout<<endl;

            string message24 = "Do you think that the last portion you've seen, I've wrote it?";
            Inaya.slow_print(message24,times);
            cout<<endl;

            string message25 = "Nope... I took it from online.";
            Inaya.slow_print(message25,times);
            cout<<endl;

            string message26 = "ha ha ha... I know you are smiling. This is the experience of a programmer you know?";
            Inaya.slow_print(message26,times);
            cout<<endl;

            string message27 = "They know What you will going to do.";
            Inaya.slow_print(message27,times);
            cout<<endl<<endl;

        }
        else
        {
            string message28 = "It's OK. I couldn't make your birthday as special you are to me. Trust me, I tried a lot dear.";
            Inaya.slow_print(message28,times);
            cout<<endl<<endl;
        }

        string message29 = "OK. Now tell me would you meet me in this week?(y/n) : ";
        Inaya.slow_print(message29,times);


        char ans3;
        cin>>ans3;
        ans3 = tolower(ans3);
        cout<<endl<<endl;


    file<< ans3 << endl<<endl<<endl;


        system("cls"); /// clearing screen

        if(ans3=='y')
        {
            string message30 = "Message me with time date dear.";
            Inaya.slow_print(message30,times);
            cout<<endl<<endl;

            string message31 = "Tell me what you want for your this birthday. You can't say no. I'm gonna gift you though you have & don't need.";
            Inaya.slow_print(message31,times);
            cout<<endl<<endl;
        }
        else
        {
            string message32 = "Ohh it's fine. I thought I would gift you something. Ok next time whenever we meet, I'll give you.";
            Inaya.slow_print(message32,times);
            cout<<endl;
        }

        string message_n1 = "Happy Birthday, my dear !! ";
        Inaya.slow_print(message_n1,300);
        cout<<endl<<endl;
        system("Color 05"); /// Applying Color Pink/puple
        Inaya.delay2(t2);

        string message_n2 = "LOVE YOU";
        Inaya.slow_print(message_n2,400);
         cout<<endl;
        string message_n3 = "BEST FRIED CHICKEN   !!!";
        Inaya.slow_print(message_n3,400);

        Inaya.delay2(t2); /// Delaying time
        system("cls"); /// clearing screen


        system("Color 06");
        cout<<endl<<endl<<"That's All...."<<endl;



    }
    else
    {
        system("cls"); /// clearing screen
        system("Color 04");
        cout<<"Verification Denied."<<endl<< "You are not Inaya."<<endl;
    }






    int p;
    cin>>p;

}



