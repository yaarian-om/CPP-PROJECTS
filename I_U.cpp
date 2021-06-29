#include<iostream>
using namespace std;
int main()
{
    int n=7,n1=8;


    ///  I

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

    /// Diamond

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


    /// U

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
    int aaaa;
    cin>>aaaa;

}
