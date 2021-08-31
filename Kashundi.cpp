#include<iostream>
#include<conio.h>
#include<windows.h> /// Header-file for designing purpose
using namespace std;
//############################################# Variables ########################################################

string static const SPACE = "                                                 ";/// Spaces For Showing output at the center
string static const SECONDARAY_SPACE = "                    "; /// Spaces for Showing Output Center of The Center
string static const MID_SCREEN = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t";
int milliseconds = 3000; /// 1000 milliseconds = 1 Seconds. This is For The holding Purpose before clearing the Screen
double static cost=0;
double heavyFoodPrice[] = {250,300,350,200,400,550,320};/// Storing Prices For Heavy Food
string heavyFoodNames[] = {"Chicken Biriyani","Mutton Teheri","Kacchi Biriyani","Mexican Chicken","Chicken Shashlik","Chinese","Pasta"};
double lightFoodPrice[]={200,650,350,150,80}; /// Storing Prices For Light Food
string lightFoodNames[]={"Mixed Fruits","Cheese Pizza","Chicken Burger","Chocolate Ice-Cream","Chocolate Cold-Coffee"};
char dotPrint[] = {'.','.','.','.','.','.','.','.','.','.','.','.','.','.'}; /// Dots for Loading Screen
int member = 1;
int paymentMethod;
string time;
char candleLight;
int itemOrdered;
int orderedItemNumbers[7];
int foodType;
char reservation;
int tableNum = 1;
int *tablePointer = &tableNum; /// Pointer

//*********************************************** Functions *****************************************************

/// Function 1
void initialGreetingsUI(){
    cout<< "                                                 ------------------------------------------------------------"<<endl;
    cout<< "                                                 |          W E L C O M E   T O   K A S H U N D I           |"<<endl;
    cout<< "                                                 ------------------------------------------------------------"<<endl;
}

/// Function 2
int loginDecisionUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                     Login Decision                       |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                    1. Show QR Code"<<endl;
    cout<<SPACE<< "                    2. Show Food List Here"<<endl<<endl;
    cout<<SPACE<< "                 Enter Your Choice >> ";
    int loginDecision;
    cin>>loginDecision;
    return loginDecision;
}

/// Function 3
string loginUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "         Enter Your username & password to Login           "<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                       Enter Username : ";
    string username;
    cin>>username;
    if(username.compare("admin") == 0){
        cout<<SPACE<< "                       Enter password : ";
        string pass;
        cin>>pass;
        return pass;
    }
}

/// Function 4
void qrGeneratorUI(){
cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<R"(

                                                                        -hhhhhhhhh-  /hho ohhhhhhhhy
                                                                        :M/-///-/M:`No`-. hm`////.dm
                                                                        :M/+MMM+:M:`ho:yo hm mMMN hm
                                                                        :M/:hhh::M:`+oso: hm shhy hm
                                                                        :MhyyyyyhM:`/oyNy hNyyyyyymm
                                                                        `:--:::--:..do-my`--:::--:--
                                                                        -m+-ydm`-ydmdo-.:y/:ydm:/y/-
                                                                        :Mhs/oy///sy/yN/-`hd`+hNh/dd
                                                                        .o.`o: +oo..Mhoo/ /oo- Nmoo+
                                                                        -yysssssyy-`Ndyy+`+s/os+:`+o
                                                                        :Mo:+++:+M: /ym:/y+: -/yhd+:
                                                                        :M/+MMM+:M:`mo`--:sy oN./dmd
                                                                        :M//ddd/:M:`yo/shM:`/hM`./mm
                                                                        :MyoooooyM:`ohM`:Myo+++oyMMm
                                                                        `:::::::::` ::: `:::   :::::
        )"<<endl;
}

/// Function 5
int foodMenuTypeUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                     Food Menu Type                       |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                     1. Buffet"<<endl;
    cout<<SPACE<< "                     2. Light Food"<<endl;
    cout<<SPACE<< "                     3. Heavy Food"<<endl<<endl;
    cout<<SPACE<< "                  Enter Your choice >> ";
    int foodMenuType;
    cin>>foodMenuType;
    foodType=foodMenuType;
    return foodMenuType;
}

/// Function 6
void buffetUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                     Buffet Items                        |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                   1. Fried Rice"<<endl;
    cout<<SPACE<< "                   2. Fried Chicken"<<endl;
    cout<<SPACE<< "                   3. Grill"<<endl;
    cout<<SPACE<< "                   4. Sea Food"<<endl;
    cout<<SPACE<< "                   5. Beef Mushroom Curry"<<endl;
    cout<<SPACE<< "                   6. Thai Mix Vegetables"<<endl;
    cout<<SPACE<< "                   7. Mix Green Salad"<<endl;
    cout<<SPACE<< "                   8. Chocolate Pudding"<<endl;
    cout<<SPACE<< "                   9. Thai Chicken Salad"<<endl;
    cout<<SPACE<< "                   10. Lacchi"<<endl<<endl;
    cout<<SPACE<< "                 Price = 1000/- Per Person "<<endl;

}

/// Function 7
void heavyUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                     Heavy Food Items                     |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                    1. Chicken Biriyani "<<endl;
    cout<<SPACE<< "                    2. Mutton Teheri "<<endl;
    cout<<SPACE<< "                    3. Kacchi Biriyani "<<endl;
    cout<<SPACE<< "                    4. Mexican Chicken "<<endl;
    cout<<SPACE<< "                    5. Chicken Shashlik "<<endl;
    cout<<SPACE<< "                    6. Chinese "<<endl;
    cout<<SPACE<< "                    7. Pasta "<<endl;
    cout<<SPACE<< "            How Many Items You want to store : ";
}

/// Function 8
double heavyCostCalculation(int heavyFoodNumbers[],int size){
    double cost=0;

    for(int i=0;i<size;i++){
        int index = heavyFoodNumbers[i];
        cost = cost + heavyFoodPrice[index-1];
    }
    cost = (cost*member);
    return cost;
}

/// Function 9
double lightCostCalculation(int lightFoodNumbers[],int size){
    double cost;
    //int index;
    for(int i=0;i<size;i++){
        int index = lightFoodNumbers[i];
        cost = cost + lightFoodNumbers[index-1];
    }
    cost = (cost*member);
    return cost;
}

/// Function 10
void lightUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                     Light Food Items                     |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                    1. Mixed Fruits"<<endl;
    cout<<SPACE<< "                    2. Cheese Pizza"<<endl;
    cout<<SPACE<< "                    3. Chicken Burger"<<endl;
    cout<<SPACE<< "                    4. Chocolate Fruits"<<endl;
    cout<<SPACE<< "                    5. Chocolate Cold-Coffee"<<endl;
    cout<<SPACE<< "            How Many Items You want to store : ";
}

/// Function 11
void tableReservationUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                    Table Reservation                     |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                 Number of Members : ";
    cin>>member;
    int flag=0;
    while(flag == 0){if(member == 0){cout<<SPACE<<"            Total Member Can't be 0. Atleast 1"<<endl;}else{flag++;}}
    cout<<SPACE<< "               Enter Scheduled Time : ";
    cin>>time;
    cout<<SPACE<< "              Candle Light Dinner(Y/N) : ";
    cin>>candleLight;
    if(candleLight == 'y' || candleLight == 'Y'){cost = cost+800;}
    cout<<SPACE<< "            Want to Reserved a Table?(Y/N) : ";
    cin>>reservation;
    tableNum++;
}

/// Function 12
int paymentUI(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                        Payment                          |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "                       1. BKash"<<endl;
    cout<<SPACE<< "                       2. Nogod"<<endl;
    cout<<SPACE<< "                       3. Cash on Time"<<endl<<endl;
    cout<<SPACE<< "                   Enter Your Choice >> ";
    int paymentChoice;
    cin>>paymentChoice;
    return paymentChoice;
}

/// Function 13
string foodFixer(int foodIndex[],string foodName[],int size){
    string foodList;
    for(int i=0;i<size;i++){
        int index = foodIndex[i];
        foodList = foodList+ " " + foodName[index-1]+", ";
    }
    foodList = foodList+"\b\b";
    return foodList;
}


/// Function 14
void billPrint(){
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<< "|                          Bill                           |"<<endl;
    cout<<SPACE<< "-----------------------------------------------------------"<<endl;
    cout<<SPACE<<SECONDARAY_SPACE<< "Time = "<<time<<endl;

    string foodList;
    if(foodType == 2){foodList = foodFixer(orderedItemNumbers,lightFoodNames,itemOrdered);}
    else if(foodType == 3){foodList = foodFixer(orderedItemNumbers,heavyFoodNames,itemOrdered);}
    else{}
    cout<<SPACE<<SECONDARAY_SPACE<< "Food Ordered = "<<foodList<<endl;

    cout<<SPACE<<SECONDARAY_SPACE<< "Payment method = ";
    if(paymentMethod == 1){cout<<"BKash"<<endl;}
    else if(paymentMethod == 2){cout<< "Nogod"<<endl;}
    else if(paymentMethod == 3){cout<<"Cash on Time"<<endl;}

    if(reservation=='y'||reservation=='Y'){cout<<SPACE<<SECONDARAY_SPACE<< "Reserved Table Number : "<<*tablePointer<<endl;} /// Use of Pointer

    cout<<SPACE<<SECONDARAY_SPACE<< "Total Members = "<<member<<endl;
    cout<<SPACE<<SECONDARAY_SPACE<< "Total Cost = "<<cost<<"/- TK"<<endl<<endl<<endl<<endl;
    ///cout<<SPACE<<"    T H A N K   Y O U   F O R   V I S I T I N G"<<endl;




}

/// Function 15
void loadingScreen(string text1,char dotPrint[]){
    system("cls"); /// Built-in
    int numberOfErase = 3;
    int len =  sizeof(dotPrint)/sizeof(dotPrint[0]);
    for(int i=0;i<numberOfErase;i++){
        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t"<<text1;/// Mid_Screen Logic = "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t"
        for(int i=0;i<len;i++){
            cout<<dotPrint[i];
            Sleep(300);
        }
        system("cls"); /// Built-in
    }


}


/// Function 16
void thanksGivingUI(){
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t-----------------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t|          T H A N K S   F O R   V I S I T I N G          |"<<endl;
    cout<<"\t\t\t\t\t\t\t-----------------------------------------------------------"<<endl;

}



//============================================== Main Method ====================================================
int main(){

    initialGreetingsUI();
    Sleep(milliseconds); /// Built-in
    system("cls"); /// Built-in

    /// Login
    string pass = loginUI();

    if(pass.compare("55555") == 0){

    }else{
        cout<<SPACE<< " Username and password didn't Match. Please Run the Software Again !"<<endl;
        exit(1); /// Built-in
    }

    system("cls"); /// Built-in

    /// Show Details Decision
    int loginDecision = loginDecisionUI();

    system("cls"); /// Built-in
    switch(loginDecision){
        case 1:{
            qrGeneratorUI();
            exit(0);
            break;
        }
        case 2:{
            /// Buffet/Light/Heavy
            int foodMenuType =  foodMenuTypeUI();
            system("cls"); /// Built-in
            switch(foodMenuType){
                case 1:{
                    /// Buffet Items
                    buffetUI();
                    cost= cost+1000;
                    break;
                }
                case 2:{
                    /// Light Food Items
                    lightUI();
                    int size;
                    cin>>size;
                    itemOrdered=size;
                    int lightFoodNumbers[size];
                    for(int i=0;i<size;i++){
                        cout<<SPACE<<SECONDARAY_SPACE<< "Enter Item Number["<<(i+1)<<"] = ";
                        cin>>lightFoodNumbers[i];
                        orderedItemNumbers[i] = lightFoodNumbers[i];
                    }
                    cost = lightCostCalculation(lightFoodNumbers,size);
                    break;
                }
                case 3:{
                    /// Heavy Food Items
                    heavyUI();
                    int size;
                    cin>>size;
                    itemOrdered=size;
                    int heavyFoodNumbers[size];
                    for(int i=0;i<size;i++){
                        cout<<SPACE<<SECONDARAY_SPACE<< "Enter Item Number["<<(i+1)<<"] = ";
                        cin>>heavyFoodNumbers[i];
                        orderedItemNumbers[i] = heavyFoodNumbers[i];
                    }
                    cost = heavyCostCalculation(heavyFoodNumbers,size);
                    break;
                }
                default:{
                    cout<<SPACE<<SECONDARAY_SPACE<< "Please Enter a Valid Input !!!"<<endl;
                    break;
                }
            }
            break;
        }
        default:{
            cout<<SPACE<<SECONDARAY_SPACE<< "Please Insert a valid Input !!!"<<endl;
            break;
        }
    }

   /// Table Reservation
   system("cls"); /// Built-in
   tableReservationUI();

   system("cls"); /// Built-in
   /// Payment
   paymentMethod = paymentUI();

   system("cls"); /// Built-in
   loadingScreen("Loading",dotPrint);
   /// Bill
   billPrint();

   Sleep(milliseconds+2000);
   system("cls"); /// Built-in
   /// Giving Thanks For Visiting This
   thanksGivingUI();

    getch();
}
