#ifndef BIRTHDAY_FUNCTION_H
#define BIRTHDAY_FUNCTION_H
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
class Birthday_Function
{
    public:
        //Birthday_Functions();
        //virtual ~Birthday_Functions();
       // void delay(int time);
        int delay2(int time);
        int slow_print(const string& massage,unsigned int millis_per_char);

    protected:

    private:
};

#endif // BIRTHDAY_FUNCTIONS_H
