#include<iostream>
#include<conio.h>
#define size 5000
#define heavyDuty 700
#define mediumDuty 400
#define lightDuty 200
using namespace std;
using namespace std;

/// Globally For all
float cost[3]={0}; /// frequency Method
int front = -1,rear= -1;


// ***************************************** Parent Class **********************************************//


struct Data{ /// struct is a class also an array

    string vehicleNo ; /// for searching purpose
    string date;
    string ticketNo;

    public :
    // Setter Methods
    void setVehicleNo(string vehicleNo){this->vehicleNo = vehicleNo; }
    void setDate(string date){this->date = date;}
    void setTicketNo(string ticketNo){this->ticketNo = ticketNo;}

    // Getter Methods
    string getVehicleNo(){return vehicleNo;}
    string getDate(){return date;}
    string getTicketNo(){return ticketNo;}

};

// ******************************************** Declaring the Queue ************************************//
Data dat[size] ; /// This is the Queue
// ******************************************** Creating Support Class ************************************//
class Support{
public :
    void choice();
    void choiceMenu();
/// Extra Parts or Decorations
    void initialGreetings();
    void totalEarningsUI();


};

//------------------------------------------Implementing Support Methods---------------------------------------

void Support :: choice(){
    cout<< "                                             ----------------------------"<<endl;
    cout<< "                                             |         Car Types         |"<<endl;
    cout<< "                                             ----------------------------"<<endl;
    cout<< "                                             |       1. Heavy-Duty       |"<<endl;
    cout<< "                                             |       2. Medium-Duty      |"<<endl;
    cout<< "                                             |       3. Light-Duty       |"<<endl;
    cout<< "                                             -----------------------------"<<endl;
    cout<< "                                                 Choose Any option >> ";
    int option;
    cin>>option;
    switch(option){
        case 1:{cost[0]++;break;} /// Storing how many Heavy cars has been passed
        case 2:{cost[1]++;break;} /// Storing how many Medium cars has been passed
        case 3:{cost[2]++;break;} /// Storing how many Light cars has been passed
        default:{cout<< "                                            Please Select a valid Option !";break;}
    }
}

void Support :: choiceMenu(){
    cout<< "                                          Press 1 for Next & 0 For Run again"<<endl;
    cout<< "                                                      Enter Choice : ";
}



void Support :: initialGreetings(){
    cout<< "                    -----------------------------------------------------------------------------"<<endl;
    cout<< "                    |         W E L C O M E   TO   P A D M A   T O L L   S O F T W A R E         |"<<endl;
    cout<< "                    -----------------------------------------------------------------------------"<<endl;
}
void Support :: totalEarningsUI(){
cout<< "                                                ------------------------"<<endl;
cout<< "                                                |   EARNINGS SECTION   |"<<endl;
cout<< "                                                ------------------------"<<endl;
}











// ******************************************** Creating Vehicle Class ************************************//
class Vehicle : Support{
public :
    Vehicle(){/*Constructor*/}
    void enQueue();
    void search(string vehicle);
    double totalEarning();
};

// ----------------------------------------------Implementing Vehicle Methods-----------------------------------
void Vehicle :: enQueue(){
    string date,ticketNo;
    string vehicleNo;
    rear++; // 0
    cout<< "                                                    Enter Date : ";
    cin>> date ; /// take input in the sub position of the rear position of the array
    dat[rear].setDate(date);
    cout<< "                                                    Enter Car No : ";
    cin>> vehicleNo ;
    cout<<endl;
    dat[rear].setVehicleNo(vehicleNo);
    cout<< "                                                    Enter Ticket No : ";
    cin>> ticketNo;
    cout<<endl;
    dat[rear].setTicketNo(ticketNo);
    choice();
    cout<<endl;
}


void Vehicle :: search(string vehicle){
    for(int i=0;i<size;i++){
        if( dat[i].vehicleNo == vehicle){
            cout<< "                                                   Date = "<<dat[i].getDate()<<endl;
            cout<< "                                                   Ticket No = "<<dat[i].getTicketNo()<<endl;
            break;
        }
    }
}

double Vehicle :: totalEarning(){
    cout<< "                                           ----------------------------------"<<endl;
    cout<< "                                           |   Per day earnings : "<<endl;
    cout<< "                                           ----------------------------------"<<endl;
    cout<< "                                           |   Heavy Duty Counter = "<< (heavyDuty*cost[0])<<endl; /// (Cost = Price * number-of-elements)
    cout<< "                                           |   Medium Duty Counter = "<< (mediumDuty*cost[1])<<endl;
    cout<< "                                           |   Light Duty Counter = "<< (lightDuty*cost[2])<<endl;
    cout<< "                                           |   Total Cost Per day = "<< ((heavyDuty*cost[0])+(mediumDuty*cost[1])+(lightDuty*cost[2]))<<endl;
    cout<< "                                           ----------------------------------"<<endl;
}




int main(){
    Vehicle v;
    Support s;

    s.initialGreetings();
    int choose = 1;
    do{
        v.enQueue();
        cout<<endl<<endl;
        s.choiceMenu();
        cin>> choose;
        cout<<endl<<endl;
    }while(choose == 0);

    cout<<endl<<endl;
    cout<<endl;
    string search;
    int searchChoose= NULL;
    do{
        cout<< "                                              Enter a Car Number to Search : ";
        cin>>search;
        cout<<endl;
        cout<< "                                              ------------------------------"<<endl;
        cout<< "                                              |   Searching Car.........    |"<<endl;
        cout<< "                                              ------------------------------"<<endl;
        v.search(search);
        cout<<endl;
        s.choiceMenu();
        cin>> searchChoose;
        cout<<endl<<endl;
    }while(searchChoose=0);

    s.totalEarningsUI();
    v.totalEarning();

   getch();
}

