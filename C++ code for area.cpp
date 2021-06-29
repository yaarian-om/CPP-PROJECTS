#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    double base, height, area;
    cout<< "Enter Base : ";
    cin>> base;
    cout<< "Enter Height : ";
    cin>> height;
    area = 0.5*base*height;
    cout<< "Area = " << area;
    getch();
}
