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



    cout<<"Are You Orpita? Please verify. "<<endl;
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

        string message0 = "Orpita Confirmed  !";
        Inaya.slow_print(message0,times);


        cout<<endl<<endl<<endl;

        Inaya.delay2(t2); /// Delaying time
        system("cls"); /// clearing screen
        system("Color A"); /// Applying Color Yellow


        string message1 = "A beautiful wish for you. Let's see..(y/n)? : ";
        Inaya.slow_print(message1,times);
        //cout<<endl;

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

            string message2 = "On your special day I wish you only smiles and joy.";
            Inaya.slow_print(message2,times);
            cout<<endl;
            string message3 = " May each minute of your life be filled with happiness ";
            Inaya.slow_print(message3,times);
            cout<<endl;

            string message4 = "And may this birthday be just perfect for you!";
            Inaya.slow_print(message4,times);
            cout<<endl;

            string message5 = "My wonderful sister, you are only one in this entire world";
            Inaya.slow_print(message5,times);
            cout<<endl;

            string message6 = "And I couldn't find another great sister like you anywhere";
            Inaya.slow_print(message6,times);
            cout<<endl<<endl;

            system("Color 05"); /// Applying Color Pink/puple
            Inaya.delay2(t2);

            string message_n2 = "HAPPY BIRTHDAY";
            Inaya.slow_print(message_n2,400);
            cout<<endl;

            Inaya.delay2(t2);
            system("cls"); /// clearing screen



            system("Color F"); /// Applying Color White
            string message13 = "My dear sister, can I say something..?(y/n) : ";
            Inaya.slow_print(message13,times);

            char ans2;
            cin>>ans2;
            ans2 = tolower(ans2);
            cout<<endl<<endl;


            file<< ans2 << endl;


            system("cls"); /// clearing screen

            if(ans2=='y')
            {

                //Inaya.I_U();

                     int n=7,n1=8;


    ///  I

    system("Color F"); /// Applying Color White

    for(int row=1; row<=3; row++)
    {
        for(int col=1; col<=15; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=1; row<=7; row++)
    {
        cout<<"     ";
        for(int col=1; col<=4; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=1; row<=3; row++)
    {

        for(int col=1; col<=15; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
    Inaya.delay2(t2);

    /// Diamond

    system("Color 04"); /// Applying Color Red

    for (int row = 4; row <= n; row++)
    {
        cout<<"    ";
        for (int col = 1; col <= n - row; col++)
        {
            cout<<" ";
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if(col==row){cout<<" ";}
            else
            cout<<"*" << "";
        }
        cout<<endl;
    }

    /// Reverse Pyramid

    for (int row = n1 ; row >= 1; row--) //this makes the reverse pyramid
    {
        cout<<"   ";
        for (int col = 1; col <= n1 - row; col++)
        {
            cout<<" ";
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout<<"*" << "";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;

    Inaya.delay2(t2);


    /// U

     system("Color F"); /// Applying Color White

    for(int row=1; row<=7; row++)
    {
        //cout<<"    ";
        for(int col=1; col<=13; col++)
        {
            if(col>4&&col<10){cout<<"  ";}
            else
            cout<<"*";
        }
        cout<<endl;
    }

    for (int row = 8- 1; row >= 5; row--) //this makes the reverse pyramid
    {
        cout<<"  ";
        for (int col = 1; col <= 8 - row; col++)
        {
            cout<<" ";
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            cout<<"*" << "";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl;


            }
            else
            {
                system("Color F"); /// Applying Color White
                string message15 = "ops sorrry... Nothing to say to you";
                Inaya.slow_print(message15,times);
                cout<<endl;
            }



        }
        else
        {
            system("Color F"); /// Applying Color White
            string message16 = "ops sorrry... Nothing to you to see";
            Inaya.slow_print(message16,times);
            cout<<endl;
                    cout<<endl<<endl<<"That's all";
        }








    }
        else
        {
            system("cls"); /// clearing screen
            system("Color 04");
            cout<<"Verification Denied."<<endl<< "You are not Orpita."<<endl;
        }






        int p;
        cin>>p;

    }



