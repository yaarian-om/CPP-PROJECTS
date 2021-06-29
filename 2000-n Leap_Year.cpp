#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    int num;
    cout<< "Enter Destination Year : "<<endl;
    cin>> num;

    for (int i=2000; i<=num; i=i+1)
    {
        if (i%4==0&&i%100!=0||i%400==0)
        cout<<i<<" is a Leap-Year"<<endl;
    else
        cout<<i<<" is not a Leap-Year"<<endl;

    }


    getch();
}


