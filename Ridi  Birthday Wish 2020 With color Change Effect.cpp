#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<thread>
#include<conio.h>
#include<chrono>
#include <windows.h> /// for colors
using std :: cout;
using std :: flush;
using std :: string;
using std :: this_thread:: sleep_for;
using std :: chrono:: milliseconds;
using std :: cin;
using std :: cout;
using namespace std;

// forward slow print
void slow_print(const string&,unsigned int);

void delay(int time)
{
    int i,j,a,t=100000000;
    cout<< "Please wait";

    for (i=0; i<=15; i++) /// this loop is for how many dots to print.
    {
        for (j=0; j<time; j++) /// this loop is for time delay to print the dot on screen

        {
            a=j;
        }
        cout<< ".";
    }
}

// main function

int main ()
{
    system("Color 06");


    char pass[13];

    cout<<"Are You Ridita? Please verify. "<<endl;
    int t=100000000;
    delay(t);
    cout<<endl<<endl<<"Enter Pass code : ";



    char match[13]= "Senti@66Khor";
    gets(pass);
    if (strcmp(pass, match) == 0)
    {
        int times = 100;

        string message0 = "Ridita Confirmed  !";
        slow_print(message0,times);
        //cout<<endl;

        cout<<endl<<endl<<endl;
        string message1 = "I say thank-you to her who laughs at my silly jokes and still stands beside me";
        slow_print(message1,times);
        string message2 = " even when I do dumb and stupid things!";
        slow_print(message2,times);
        cout<<endl;

        string message3 = "You.. are the someone whom you can be yourself with... ";
        slow_print(message3,times);
        cout<<endl;

        string message4 = "Someone who you can have pointless conversations with... ";
        slow_print(message4,times);
        cout<<endl;

        string message5 = "Someone who still likes you even when you're weird.... ";
        slow_print(message5,times);
        cout<<endl;

        string message6 = "Someone who forgets to buy you a birthday gift..that's why I came up with this... ";
        slow_print(message6,times);
        cout<<endl;
        cout<<endl;
        cout<<endl;


        cout<<endl<<endl<<"Do You Like till here? Wanna go further? (y/n)?  :  ";
        char ans;
        cin>>ans;
        cout<<endl<<endl;

        ans = tolower(ans);

        if(ans=='y')
        {
            string message7 = "You know what mama...?";
            slow_print(message7,times);
            cout<<endl;

            string message8 = "You are one of the coolest person i,ve ever meet. Just stay like this. Never change.";
            slow_print(message8,times);
            cout<<endl;

            string message9 = "A ever happy person.";
            slow_print(message9,times);
            cout<<endl;

            string message10 = "I wish you love, hope and everlasting joy and happiness.";
            slow_print(message10,times);
            cout<<endl;

            cout<<endl<<endl<<"Will You Give me a treat?? ;) (y/n)?  :  ";
            char ans2;
            cin>>ans2;
            cout<<endl<<endl;

            ans2 = tolower(ans2);

            if(ans2=='y')
            {
                system("Color 0E");
                string message_n3 = "Yeee......Thank You so Much mammaaah :) ";
                slow_print(message_n3,100);
                cout<<endl<<endl<<endl;
            }
            else
            {
                string message_n2 = "It's OK  :( ";
                slow_print(message_n2,200);
                cout<<endl;
            }

            string message_n = "HAPPY BIRTHDAY my best friend! ";
            slow_print(message_n,300);
            cout<<endl;
        }




        else
        {
            string message_n1 = "Sorry... i couldn't make your gift PERFECT.......    :(  But HAPPY BIRTHDAY";
            slow_print(message_n1,200);
            cout<<endl;
        }

    }
    else
        cout<<"Verification Denied."<<endl<< "You are not Ridita."<<endl;




    getch();

}


// implement slow print

void slow_print(const string& massage,unsigned int millis_per_char)
{
    for(const char c : massage)
    {
        cout<< c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
}
