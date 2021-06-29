#include<iostream>
#include<conio.h>
#include<cstring>
#include<fstream>
#include<iomanip>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void gotoXY(int x, int y);


HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;


static int a;
class admin_login;
class student_login;
class register_now

{
    string name[100];

public:

    int notice();
    int instructionsform();
    int registration_form();
    int confirmform();
    int routes();
    friend student_login;
    friend admin_login;

};


class code_Builder /// Properly Encapsulated
{
    string name;
    int id;
public :
    void set_Name(string n){name = n;}
    void set_Id(int i){id=i;}

    string get_Name(){return name;}
    int get_Id(){return id;}
};


class student_login

{

public:

    int login();
    int contactdetails();
    int complaints();
    int allotmentform();


    friend register_now;

};

class admin_login

{

public:

    int login();
    int complaintbox();
    int notice();
    int allot_admin();

};

int admin_login::login()

{

    register_now r1;
    admin_login s1;
    student_login s2;

    int u;
    string a[100],user1,user2,user3;
    char line[80];

    system("cls");

    cout<<"\n\n\nUSERNAME:";
    cin>>user1;

    int i=0;
    char pwd[5];

    cout<<" PASSWORD:";

    while(i<4)

    {
        pwd[i]=getch();
        putchar('*');
        ++i;
    }

    int j=0;

    user2=pwd;
    user3=user1+user2;

    ifstream fil5;

    fil5.open("login.txt",ios::out);
    while(fil5)

    {
        fil5.getline(line,80);
        a[j]=line;
        j++;
    }

    for(int k=0; k<50; k++)
    {
        if(a[k]==user3)
        {
            while(1)
            {
                system("cls");

        cout<<"\n\n\n\n\n\n\n\n                                                                       WELCOME  "<<user1<<endl;
        cout<<endl<<"                                                                       1.Complain Box" <<endl;
        cout<<endl<<"                                                                       2.Edit notice"  <<endl;
        cout<<endl<<"                                                                       3.Routes"       <<endl;
        cout<<endl<<"                                                                       4.LOGOUT"       <<endl;

        cin>>u;


                switch(u)
                {
                case 1:
                    system("COLOR 3");
                    s1.complaintbox();
                    break;
                case 2:
                    system("COLOR 3");
                    s1.notice();
                    break;
                case 3:
                    system("COLOR 3");
                    s1.allot_admin();
                    break;
                case 4:
                    system("COLOR 3");
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n                                                 LOADING PLEASE WAIT ... ";
                    Sleep(1000);
                    return 0;
                default:
                    return 0;
                }
            }
        }
    }


    system("cls");
    cout<<"\n\n\n                           SORRY!"
        <<"\n                           Invalid user-name or password";
    Sleep(1000);
    return 1;
}
int admin_login::notice()
{
    system("cls");
    fstream fin;
    fin.open("program.txt",ios::out | ios::app );
    fin<<endl;
    string mystr;
    getline (cin, mystr);
    cout << "Enter the Notice :";
    getline (cin, mystr);
    fin<<mystr;
    cout<<"\n\n\n\nEnter any key to return main menu :";
    getch();
    return 1;
}

int admin_login::complaintbox()
{
    char ch;
    system("cls");
    ifstream fin6;
    fin6.open("complaintbox.cpp",ios::in);
    while(fin6)
    {
        fin6.get(ch);
        cout<<ch;
    }
    cout<<"\n\n\n\n\n\n   Enter the any key to return to main menu";
    getch();
    return 1;
}
int admin_login::allot_admin()
{
    system("cls");
    char ch;
    ifstream fin6;
    fin6.open("allotedadmin.cpp",ios::in);
    while(fin6)
    {
        fin6.get(ch);
        cout<<ch;
    }
    cout<<"\n\n\n\n\n\n   Enter the any key to return to main menu";
    getch();
    return 1;
}
int student_login::login()
{
    register_now r1;
    admin_login s1;
    student_login s2;

    int u;
    string a[100],user1,user2,user3;
    char line[80];


    system("cls");
    cout<<"\n\n\n\n\n\n                    USERNAME:";
    cin>>user1;
    int i=0;
    char ch;
    char pwd[5];
    cout<<"                    PASSWORD:";
    while(i<4)
    {
        pwd[i]=getch();
        putchar('*');
        ++i;
    }
    int j=0;
    user2=pwd;
    user3=user1+user2;
    ifstream fil5;
    fil5.open("login.txt",ios::out);
    while(fil5)
    {
        fil5.getline(line,80);
        a[j]=line;
        j++;
    }
    for(int k=0; k<50; k++)
    {
        if(a[k]==user3)
        {
            while(1)
            {
                system("cls");
                cout<<"\n\n\n                                                      Student's portal                                                 "<<endl;
                cout<<"\n\n\n\n\n\n\n\n                                                                               WELCOME  "<<user1<<endl;
                cout<<"                                                                              1.Allotment form"<<endl;
                cout<<"                                                                              2.Complain"<<endl;
                cout<<"                                                                              3.Staff contact details"<<endl;
                cout<<"                                                                              4.To LOGOUT"<<endl;
                cout<<"\n\n\n\n\n\n Select your option : ";
                cin>>u;
                switch(u)
                {
                case 1:
                    s2.allotmentform();
                    break;
                case 2:
                    s2.complaints();
                    break;
                case 3:
                    s2.contactdetails();
                    break;
                case 4:
                    system("cls");
                    cout<<"\n\n\n\n\n\n\n            PLEASE WAIT! LOADING ...";
                    Sleep(1000);
                    return 0;
                default:
                    exit;
                }
            }
        }
    }

    system("cls");


    cout<<"\n\n\n                   SORRY!"
        <<"\n                       Invalid username or password";


    Sleep(1000);
    return 1;
}

int student_login::allotmentform()

{
    system("cls");
    string j,tem[10];
    int i,d;
    cout<<"Enter your Username :";
    cin>>j;
    ifstream f8;
    f8.open("list_of_students",ios::in);
    f8.seekg(0,ios::beg);
    while(!f8.eof())

    {
        i++;
        string temp;
        f8 >> temp;
        if(temp == j)

        {
            d=f8.tellg();
            break;
        }

    }

    int y=d+6;
    int l=0;
    while(d!=y)

    {
        d++;
        string temp;
        f8>>temp;
        tem[l]=temp;
        l++;

    }

    system("cls");
    cout.setf(ios::left,ios::adjustfield);
    cout<<"\n     Name :"<<tem[0]<<endl;
    cout<<"     University ID :"<<tem[1]<<endl;
    cout<<"     Phone No:"<<tem[2];
    cout<<"     Boarding Point:"<<tem[3]<<endl;
    cout<<"     Seat Number:"<<tem[4]<<endl;
    cout<<"                                                             Signature"<<endl;

    cout<<"Enter any key to return back to menu :";


    getch();
    return 1;

}

int student_login::complaints()

{
    char ch;
    system("cls");
    ofstream fin9;
    fin9.open("complaintbox.cpp",ios::app);
    fin9<<endl;
    string mystr;
    getline (cin, mystr);
    cout << "Enter the Complain :";
    getline (cin, mystr);
    fin9<<mystr;
    cout<<"\n\n\nEnter any key to return back to menu :";
    getch();
    return 1;
}
int student_login::contactdetails()


{
    system("cls");
    cout<<"\n\n\n                                           AIUB Official                     "<<endl;
    cout<<"                                                 408/1, kuratoli, khelkhet, Dhaka, 1229, Bangladesh                      "<<endl;
    cout<<"                                                 Fax : +88028412255                      "<<endl;
    cout<<"\n\n\n\n                 Enter any key to return back to menu :";
    getch();
    return 1;
}




int register_now::instructionsform()
{
    system("cls");
    cout<<"\n          ";

    char b[]="\n\n\n                                    Read the following Instructions Carefully\n\n\n\n\n                            1. You must be a stuff or student of the University. \n                            2. You have to complete your payment in time. \n                            3. You must have your ID card with you. \n";
    int x=strlen(b);

    for(int i=0; i<x; i++)
    {
        Sleep(30);
        cout<<b[i];
    }

    char ch;
    char a;

    ifstream ins1;

    ins1.open("instructions.txt",ios::in);

    while(ins1)
    {
        ins1.get(ch);
        cout<<ch;
    }
    cout<<"Press Y if you are agree: ";
    cin>>a;
    if(a == 'y' || a == 'Y')
    {
        registration_form();
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n                                 Thanks for visiting!.....";
        Sleep(3000);
        system("cls");
    }
}
int register_now::registration_form()
{
    string password;
    char pwd[5];
    int i=0;
    system("cls");
    a++;
    fstream fil5;
    fil5.open("login.txt",ios::out|ios::app);
    cout<<"              \n";
    char b[]="REGISTRATION FORM\n";
    int x=strlen(b);
    for(int i=0; i<x; i++)
    {
        Sleep(100);
        cout<<b[i];
    }
    cout<<endl<<endl<<setw(5)<<"Name:";
    cin>>name[0];
    cout<<setw(5)<<"University ID:";
    cin>>name[1];
    cout<<endl<<setw(5)<<"Phone Number:";
    cin>>name[2];
    cout<<setw(5)<<"Boarding Point:";
    cin>>name[3];
    cout<<endl<<setw(5)<<"Select seat Number:";
    cin>>name[4];
    int count=1;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(j==3)
            {
                cout<<"   ";
            }
            cout<<setw(4)<<count<<"  ";
            count++;
        }
        cout<<endl;
    }
    cout<<" ";
    for(int i=51; i<=60; i++)
    {
        cout<<setw(3)<<i;
    }
    string user4;
    cin>>name[4];
    cout<<"Stuff or student";
    cin>>user4;
    if(user4=="student"||"STUDENT")
    {
        cout<<endl<<endl<<"Your username :";
        cout<<"AIUB"<<a;
        cout<<endl<<"PASSWORD :";
        while(i<4)
        {
            pwd[i]=getch();
            putchar('*');
            ++i;
        }
        password=pwd;
        fil5<<"AIUB"<<a;
        fil5<<password<<"\n";
        name[5]="*****";
        cout<<name[5];
        fil5.close();
        fstream fil2;
        fil2.open("list_of_students",ios::in | ios::out | ios::app);
        fil2.seekg(74);
        fil2<<"AIUB"<<a<<"          ";

        for(int i=0; i<6; i++)
        {
            fil2.setf(ios::left,ios::adjustfield);
            fil2<<setw(20)<<name[i];
            count++;
        }

        fil2<<endl;
        Sleep(500);
    }

    else

    {

        if(user4=="admin"||"ADMIN")

        {
            cout<<endl<<endl<<"UserName :";
            cout<<"ADMIN"<<a;
            cout<<endl<<"PASSWORD :";
            while(i<4)
            {
                pwd[i]=getch();
                putchar('*');
                ++i;
            }
            password=pwd;
            fil5<<"ADMIN"<<a;
            fil5<<password<<"\n";
            name[5]="*****";
            cout<<name[5];
            fil5.close();
            fstream fil2;
            fil2.open("list_of_students",ios::in | ios::out | ios::app);
            fil2.seekg(74);
            fil2<<"ADMIN"<<a<<"          ";

            for(int i=0; i<6; i++)
            {
                fil2.setf(ios::left,ios::adjustfield);
                fil2<<setw(20)<<name[i];
                count++;
            }
            fil2<<endl;
            Sleep(500);



        }
    }

    confirmform();
}
int register_now::confirmform()
{
    char ch;
    system("cls");
    char sentzz[]="                          ***************CONFIRM THE REGISTRATION FORM*****************              ";
    int x;
    int size;
    size=strlen(sentzz);
    for(x=0; x<size; x++)
    {
        Sleep(50);
        cout<<sentzz[x];
    }
    cout.setf(ios::left,ios::adjustfield);
    cout<<"\nName :"<<name[0]<<endl;
    cout<<"University ID:"<<name[1]<<endl;
    cout<<"Phone Number:"<<name[2]<<endl;
    cout<<"Boarding Point:"<<name[3]<<endl;
    cout<<"Alloted seat Number:"<<name[4]<<endl;
    cout<<endl<<endl<<endl<<" Total amount to be paid : TK: 10000/- every year"<<endl;
    cout<<endl<<endl<<"                                                               signature ";

    int a;
    Sleep(500);
    cout<<endl<<"Enter any key to return back to main menu:";
    getch();
    return 1;
}
int register_now::routes()
{
    char ch;
    system("cls");
    fstream fil4;
    fil4.open("ROUTES.cpp",ios::in);
    while(fil4)
    {
        fil4.get(ch);
        cout<<ch;
    }
}
int register_now::notice()
{
    system("cls");
    char ch;
    ifstream f2;
    f2.open("program.txt",ios::in );
    while(f2)
    {
        f2.get(ch);
        cout<<ch;
    }
    cout<<"\n\n\n Enter any to return back to menu :";
    getch();
    return 1;
}

int main()
{
    /// Display
    char ch;
    system("COLOR 0F");
    while(1)
    {
        system("cls");
        cout<<endl<<endl;
        fstream f2;
        f2.open("sysmbol.txt",ios::in);
        while(f2)
        {
            f2.get(ch);
            cout<<ch;
        }
        Sleep(1000);
        system("COLOR 4");
        char a[]="          \xdb-\xdb-\xdb-\xdb-\xdb-\xdb-\xdb-\xdb-University Transportation System-\xdb-\xdb-\xdb-\xdb-\xdb-\xdb-\xdb";
        int size;
        size=strlen(a);
        for(int i=0; i<size; i++)
        {
            Sleep(25);
            cout<<a[i];
        }

        int c=1;
        cout<<endl<<endl;
        Sleep(0);

        code_Builder CB;
    int i;
    string name;

    cout<< "                                                                                    Builder Name : ";
    CB.set_Name("Mazid");
     cout<<CB.get_Name();
    cout<<endl;
    cout<< "                                                                                    Builder ID : ";
    CB.set_Id(44018);
    cout<<CB.get_Id()<<endl;

    cout<< "                                                                                    Builder Name : ";
    CB.set_Name("Rumi");
     cout<<CB.get_Name();
    cout<<endl;
    cout<< "                                                                                    Builder ID : ";
    CB.set_Id(44018);
    cout<<CB.get_Id()<<endl;

    cout<< "                                                                                    Builder Name : ";
    CB.set_Name("Faisal");
     cout<<CB.get_Name();
    cout<<endl;
    cout<< "                                                                                    Builder ID : ";
    CB.set_Id(44018);
    cout<<CB.get_Id()<<endl;


        cout<<                                        "\n\n\n\n\n                           1.REGISTER NOW"<<endl;
        cout<<                                        "                           2.STUFF LOGIN"<<endl;
        cout<<                                        "                           3.STUDENT LOGIN"<<endl;
        cout<<                                        "                           4.NOTICES"<<endl;
        for(int i=0; i<1; i++)
        {
            int x = 16;
            int y = 10;
            for (y=10; y<19; y++)

            {
                gotoXY(x,y);
                cout << "\xdb";
                Sleep(100);

            }

            y=19;

            for (x=16; x<63; x++)
            {
                gotoXY(x,y);
                cout << "\xdb";
                Sleep(20);

            }
            for (y=10; y<20; y++)
            {
                gotoXY(x,y);
                cout << "\xdb";
                Sleep(100);

            }
        }

        for(int i=0; i<1; i++)
        {
            int x = 1;
            int y = 20;
            for (x=40; x>1; x--)
            {
                gotoXY(x,y);
                cout << "     ";
                Sleep(0);
                gotoXY(x,y);
                cout << "                                                         ";
                cout<<"                                            ";
            }
            cout <<endl<<"                             "<<endl;
        }

        register_now r1;
        admin_login s1;
        student_login s2;
        int ch;

        cout<<"\nSelect your option:";
        cin>>ch;
        fstream f1;

        switch(ch)
        {
        case 1:
            system("COLOR 5");
            r1.instructionsform();
            break;
        case 2:
            system("COLOR 1");
            s1.login();
            break;
        case 3:
            system("COLOR C");
            s2.login();
            break;
        case 4:
            system("COLOR 4");
            r1.notice();
            break;
        default:
            cout<<"ssssss";
            break;
        }
    }




    getch();
    return 0;
}

void gotoXY(int x, int y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;

    SetConsoleCursorPosition(console,CursorPosition);
}


