#include "birthday_function.h"
#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#include<thread>
#include<conio.h>
#include<chrono>
#include <stdlib.h>
#include <windows.h> /// for colors

using std :: cout;
using std :: flush;
using std :: string;
using std :: this_thread:: sleep_for;
using std :: chrono:: milliseconds;
using std :: cin;
using std :: cout;
using namespace std;


Birthday_Function::  delay2(int time)
{
    int i,j,a,t=100000000;
    //cout<< "Please wait";

    for (i=0; i<=15; i++) /// this loop is for how many dots to print.
    {
        for (j=0; j<time; j++) /// this loop is for time delay to print the dot on screen

        {
            a=j;
        }

    }
    return 0;
}

Birthday_Function :: slow_print(const string& massage,unsigned int millis_per_char)
{
        for(const char c : massage)
    {
        cout<< c << flush;
        sleep_for(milliseconds(millis_per_char));
    }
    return 0;
}





Birthday_Function:: I_U()
{




}





/* template
        string message = " ";
        slow_print(message,times);
        cout<<endl;

*/
