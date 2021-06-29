#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int a ;
    double b, v, r, angle;
    cout<< "What do you want?" << endl;
    cout<< "to calculate V press 1" << endl;
    cout<< "to calculate R press 2" << endl;
    cout<< "to calculate angle press 3" << endl;
    cin>> a ;
    if (a==1)
    {
        cout << "Enter Range : " ;
        cin >> r ;
        cout << "Enter Angle : " ;
        cin >> angle ;
        v = sqrt ((r*9.8)/sin(2*(angle*(3.1416/180)))) ;
        cout << "Velocity is : " << " " << v ;
    }
    else if (a==2)

   {
    cout << "Enter Velocity : " ;
    cin >> v ;
    cout << "Enter Angle : " ;
    cin >> angle ;
    r = ((v*v)*sin(2*angle*(3.1416/180)))/9.8 ;
    }
    else if (a==3)
    {
        cout << "Enter Velocity : " ;
        cin >> v ;
        cout << "Enter Range : " ;
        cin >> r ;
        angle = 0.5*(arcsin((r*9.8)/(v*v))*(180/3.1416)) ;
        cout << "Angle is" << angle << endl ;
    }
    getch();
}
