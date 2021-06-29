#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std ;
int main ()
{
    string name ;


    cout<< "Enter Your Name : "<<endl ;
    cin>> name;



    cout<< "\t \t \t \t \t \t  Hii "<<name<<endl;
    cout<< "\t \t \t \t \t      Welcome To My Laptop"<<endl;
    cout<< "\t \t \t \t \t   What Are you looking for?"<<endl;
    cout<< "\t \t \t \t \t \t Can I help You?"<<endl;
    cout<< "\t \t \t   Are you sure, Yaarian Knows that you entered his laptop?"<<endl;
    char X;
    cout<< "\t \t \t \t \t \t   Yes or No ??"<<endl;
      X = tolower(X);
    cin>> X;
    if( X== 'y')
        {cout<< "\t \t \t \t    You may continue. Sorry for Bothering "<<endl;}
    else
        cout<< "\t \t \t   It's hightime to leave the Laptop. He won't allow this."<<endl;



    getch();
}

