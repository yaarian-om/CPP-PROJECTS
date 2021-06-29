#include<iostream>
#include<cstring>
#include<algorithm>
#include <bits/stdc++.h>
#include<string>
#include<stdio.h>
#include<math.h>
#include<conio.h>

using namespace std;

///   27 Functions Available

///******************** Random Numbers ******************
void Random_number(int guess)
{
    int random;
        cout<< "Enter a digit between 1 to 5 : "<<endl;
        cin>> guess;
        random = rand()%5 ;
        if(guess==random)
        {
            cout<< "Congratulations. You won."<<endl<<endl;
        }
        else
            {
                cout<< "You Lost. Please Try again."<<endl<<endl;
                cout<< "Random Number Was = "<<random<< endl<<endl;
            }

}

///************************** conversion days to week and years **************************

int Year_day_week(int day)
{
    int year,week;

	cout<<"Enter Number of days : ";
	cin>>day;

	year=day/365;  //years to fulfill n number of days
	day=day%365;
	week=day/7;  // weeks to fulfill n number of days
	day=day%7; // Remaining days to fulfill n number of days
	cout<<endl;

	cout<<"Years : "<<year<<endl;
	cout<<"Weeks : "<<week<<endl;
	cout<<"Remaining Days : "<<day<<endl;
}

///************************** Finding the Duplicate_numbers *********************************

void Duplicate_numbers(int A[],int n)
{
    //int A[300];
    int i, j, rem = 0;
    cout<<"How many numbers you wanna input : ";
    cin>>n;
    cout<<"Input : ";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {

        if(A[i] == A[j])
            {
                rem++;
                break;
            }
        }
    }
    cout<<"Total dublicate numbers = "<<rem;
}

///************************* Finding Mean_standard_deviation ************************

float Mean_standard_deviation(float age[], int sizee)
{
    float sum =0,avg=0, sum2=0,age2[300];
    for(int i=0; i<sizee; i++)
    {

        cout<< "Enter age["<<i+1<<"] = ";
        cin>>age[i];
        sum = sum+age[i];
    }

    avg = sum/sizee;

    for(int i=0;i<sizee;i++)
    {
        age2[i]=(age[i]-avg)*(age[i]-avg);
        sum2=sum2+age2[i];
    }

   float avg2 = sum2/sizee;

   float stand_dav = sqrt(avg2);

   cout<<"Mean standard deviation is :"<<stand_dav;

    //return stand_dav;
}

///************************* Finding Greatest_Divisor ************************

int Greatest_Divisor(int u,int v)
{
    int temp;
    cout<< "Enter 2 Numbers"<<endl;
    cin>>u>>v;
    while(v!=0)
    {
        temp = u % v;
        u=v;
        v=temp;
    }
    cout<< "Greatest common divisor : "<<u<<endl;
}

///************************* Transpose A Matrix ************************

int Transpose(int A[100][100],int row,int col)
{
    int i,j,transpose[100][100];
    cout<< "Enter the number of rows and cols : ";
    cin>> row>>col;

    //scanning A matrix
    cout<< "Enter elements for matrix A : "<<endl ;
    for (i=0; i<row; i=i+1)
    {
        for (j=0; j<col; j=j+1)
        {
            cout<< "A["<<i<< "]["<<j<< "] = ";
            cin>>A[i][j];
        }
        cout<<endl;
    }



    //Showing User Output

     cout<< "Matrix A =  "<<endl;
    for (i=0; i<row; i=i+1)
    {

        for (j=0; j<col; j=j+1)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

//Transposing process

    for (i=0; i<row; i=i+1)
    {
        for (j=0; j<col; j=j+1)
        {
            transpose[j][i] = A[i][j];
        }
        //cout<<endl;
    }

    cout<<endl;

//Transpose Matrix showing on console

    cout<< "Transposed A =  "<<endl;
    for (i=0; i<col; i=i+1)
    {
        for (j=0; j<row; j=j+1)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


}

///*************************  Matrix Multiplication ************************

float Matrix_multiplication(int first [300][300],int second[300][300],int r1,int r2,int c1,int c2)
{
        int result[300][300], i,j,k,sum=0;
    cout<< "Enter the row and column for the 1st Matrix : ";
    cin>> r1>>c1;
    cout<< "Enter the row and column for the 1st Matrix : ";
    cin>> r2>>c2;
    while (c1 != r2)
    {
        cout<< "Error !! column of 1st matrix";
        cout<< "not equal to row of second matrix"<<endl;
        cout<< "Enter the row and column for the 1st Matrix : ";
        cin>> r1>>c1;
        cout<< "Enter the row and column for the 1st Matrix : ";
        cin>> r2>>c2;

    }
    cout<<endl;
    // input 1st matrix
    cout<< "Enter the elements of 1st Matrix : "<<endl;
    for (i=0; i<r1; i=i+1)
    {
        for (j=0; j<c1; j=j+1)
        {
            cout<<"A["<<i<< "]["<<j<< "] = ";
            cin>> first[i][j] ;
        }
    }
    cout<<endl;

     // input 2nd matrix

     cout<< "Enter the elements of 2nd Matrix : "<<endl;
    for (i=0; i<r2; i=i+1)
    {
        for (j=0; j<c2; j=j+1)
        {
            cout<<"B["<<i<< "]["<<j<< "] = ";
            cin>> second[i][j] ;
        }
    }
      cout<<endl;

      //Matrix Multiplication

      for (i=0; i<r1; i=i+1)
      {
          for (j=0; j<c2; j=j+1)
          {
              for (k=0; k<c1; k=k+1)
              {
                  sum = sum + first[i][k] * second[k][j]; //mukhosto

              }
              result[i][j] = sum; //mukhosto
                  sum = 0; //mukhosto
          }
      }

      cout<<endl;
      // Showing user Output

      cout<< "Result matrix : ";
      for (i=0; i<r2; i=i+1)
    {
        for (j=0; j<c2; j=j+1)
        {
            cout<<result[i][j]<< " ";
        }
        cout<<endl<< "\t\t";
    }

    //return result[i][j];

}

///************************* Finding Leap_year ************************

int Leap_year(int X)
{
    cout<<"Enter Year : "<<endl;
    cin>>X;
    if (X%4==0&&X%100!=0||X%400==0)
        cout<<X<<" is a Leap-Year"<<endl;
    else
        cout<<X<<" is not a Leap-Year"<<endl;
}

///************************* vowel_consonant Checking ************************

char Check_vowel_consonant(char X)
{
    cout<<"Enter alphabet : ";
    cin>> X;
    X = tolower(X);
    if(X=='a'||X=='e'||X=='i'||X=='o'||X=='u')
        cout<<X<<" is Vowel"<<endl;
    else
        cout<<X<<" is Consonant"<<endl;
}

///************************* Grades Checking **********************************

float Get_grade(float num)
{

    cout<< "Input Marks : ";
    cin>>num;

    if(num>=0&&num<=100)
    {
        if(num>=90)
        {
            cout<<"Your Grade is : A+"<<endl;
            cout<<"Your Grade point is : 4"<<endl;
        }
        else if(num>=85)
        {
            cout<<"Your Grade is : A"<<endl;
            cout<<"Your Grade point is : 3.75"<<endl;
        }
        else if(num>=80)
        {
            cout<<"Your Grade is : B+"<<endl;
            cout<<"Your Grade point is : 3.50"<<endl;
        }
        else if(num>=75)
        {
            cout<<"Your Grade is : B"<<endl;
            cout<<"Your Grade point is : 3.25"<<endl;
        }
        else if(num>=70)
        {
            cout<<"Your Grade is : C+"<<endl;
            cout<<"Your Grade point is : 3.00"<<endl;
        }
        else if(num>=65)
        {
            cout<<"Your Grade is : C"<<endl;
            cout<<"Your Grade point is : 2.75"<<endl;
        }
        else if(num>=60)
        {
            cout<<"Your Grade is : D+"<<endl;
            cout<<"Your Grade point is : 2.50"<<endl;
        }
        else if(num>=50)
        {
            cout<<"Your Grade is : D"<<endl;
            cout<<"Your Grade point is : 2.25"<<endl;
        }
        else
        {
            cout<<"Your Grade is : F"<<endl;
            cout<<"Your Grade point is : 0.00"<<endl;
        }

    }
    else
    {
        cout<<"Please enter a valid  numerical value";
    }

}

///************************* Reverse Number Printing ************************

int Reverse(int num)
{
    int sum=0, r;
    cout<< "Enter Number to sum of the digits: "<<endl;
    cin>>num;

    while (num!=0)
    {
        r= num%10;
        sum = sum + r;
        num =num/10;
    }
    cout<< "Sum of Digits is : "<<sum<<endl;

//Reverse a Number

    int num1, sum1=0, rem;
    cout<< "Enter Number to Reverse : "<<endl;
    cin>>num1;

    while (num1!=0)
    {
        rem= num1%10;
        sum1 = (sum1*10) + rem;
        num1 =num1/10;
    }
    cout<< "Reverse number is : "<<sum1<<endl;
}

///************************* Palindrome Number Checking ************************

int Palindrome(int num2)
{
        int temp2, sum2=0,reminder;
    cout<< "Enter Number to check Plaindrome : "<<endl;
    cin>>num2;
    temp2 = num2;

    while (temp2!=0)
    {
        reminder= temp2%10;
        sum2 = (sum2*10) + reminder;
        temp2 =temp2/10;
    }


    if (num2==sum2)
    {
        cout<<sum2<< " is a Palindrome Number"<<endl;
    }
    else
        cout<<sum2<< " is not a Palindrome Number"<<endl;
}

///************************* Checking Armstrong Number ************************

int Armstrong(int num3)
{
    int temp3, sum3=0, rem3;
    cout<< "Enter Number to check Arm-Strong : "<<endl;
    cin>>num3;
    temp3 = num3;

    while (temp3!=0)
    {
        rem3= temp3%10;
        sum3 = sum3 + rem3*rem3*rem3;
        temp3 =temp3/10;
    }

    if (num3==sum3)
    {
        cout<<sum3<< " is an Armstrong Number"<<endl;
    }
    else
        cout<<sum3<< " is not an Armstrong Number"<<endl;
}

///************************* Student Application ********************************

float Student_application(float students[300],int n)
{
    int sum,i;
    cout<< "Enter Number Of Students : ";
    cin>>n;
    for (i=0; i<n; i=i+1)
    {
        cout<< "Marks for Student "<<i+1<< " = " ;
        cin>> students[i];
        sum= sum + students [i];
    }
    float avg = (float) sum/n;
    cout<<endl;
    cout<< "Total Marks : "<<sum<<endl;
    cout<< "Average : "<<avg<<endl;
    cout<<endl;

    //maximum and minimum

    sort(students,students+n);


    cout << "Maximum marks = " << students[n-1]<<endl;
    cout<< "Minimum marks = "<< students[0]<< endl;

}

///************************* Ascend An Array ************************

float Ascend(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;

    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cout<<arr[i]<<endl;
    }
}

///************************* Descend An Array ************************

float Descend(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;

    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    for(int i =size-1; i>=0; i=i--)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cout<<arr[i]<<endl;
    }
}

///************************* Finding Out Max number from an array ************************

float Array_max(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;

    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    cout<< "Maximum Value is : "<< arr[size-1]<< " ";

}

///************************* Finding Out 2nd Max number from an array ************************

float Array_2nd_max(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;

    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    cout<< "Maximum Value is : "<< arr[size-2]<< " ";

}

///************************* Finding Out Min number from an array ************************

float Array_min(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;


    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    cout<< "Minimum Value is : "<< arr[0]<< " ";

}

///************************* Finding Out 2nd Min number from an array ************************

float Array_2nd_min(float arr[],int size)
{
    cout<< "Enter Array Size : ";
    cin>>size;

    cout<< "Enter Numbers : "<<endl;
    for(int i =0; i<size; i=i+1)
    {
        cout<< "Number ["<<i+1<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    sort  (arr, arr+size) ;

    cout<< "Minimum Value is : "<< arr[1]<< " ";
}

///************************* Finding Out Prime numbers from an array ************************

int Prime_numbers(int arr[], int v)
{
    int u,w,x;
    cout<< "Enter size of an array : ";
    cin>>v;
    cout<< "Enter array elements : ";
    for(u=0; u<v; u++)
    {
        cout<< "Array ["<<u+1<<"] = ";
        cin>> arr[u];
    }
    cout<< "All prime list : ";
    for (u= 0; u<v; u++)
    {
        w=2;
        x=1;
        while (w< arr[u])
        {
            if(arr[u] % w==0)
            {
                x=0;
                break;
            }
            w++;
        }

        if(x==1)
        {
            cout<< arr[u]<< " ";
        }
    }

}

///************************************* ATM ************************************

float ATM(int pin)
{
    unsigned long amount=1000, deposit, withdraw;
    int choice,k;
    char transaction ='y';

    while (pin != 1520)
    {
        cout<<"ENTER YOUR SECRET PIN NUMBER(1520) :";
        cin>>pin;
        if (pin != 1520)
            cout<<"PLEASE ENTER VALID PASSWORD"<<endl;
    }
    do
    {
        cout<<"********Welcome to ATM Service**************"<<endl;
        cout<<"           1. Check Balance"<<endl;
        cout<<"           2. Withdraw Cash"<<endl;
        cout<<"           3. Deposit Cash"<<endl;
        cout<<"           4. Quit"<<endl;
        cout<<"******************?**************************?*"<<endl<<endl;
        cout<<"           Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<endl<<"           YOUR BALANCE IN Rs : "<<amount;
            break;
        case 2:
            cout<<"           ENTER THE AMOUNT TO WITHDRAW : ";
            cin>>withdraw;
            if (withdraw % 100 != 0)
            {
                cout<<"           PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100";
            }
            else if (withdraw >(amount - 500))
            {
                cout<<"           INSUFFICENT BALANCE";
            }
            else
            {
                amount = amount - withdraw;
                cout<<endl<<endl<<"           PLEASE COLLECT CASH";
                cout<<"           YOUR CURRENT BALANCE IS : "<<amount;
            }
            break;
        case 3:
            cout<<"           ENTER THE AMOUNT TO DEPOSIT";
            cin>>deposit;
            amount = amount + deposit;
            cout<<"           YOUR BALANCE IS "<< amount;
            break;
        case 4:
            cout<<endl<<"           THANK U USING ATM";
            break;
        default:
            cout<<endl<<"           INVALID CHOICE";
        }
        cout<<endl<<endl<<endl<<"           DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): "<<endl;
        fflush(stdin);
        cin>>transaction;
        if (transaction == 'n'|| transaction == 'N')
            k = 1;
    }
    while (!k);
    cout<<endl<<endl<<"           THANKS FOR USING OUT ATM SERVICE";
}

///************************************** Rectangle area ******************************************

float Rectangle_area(float a, float b)
{
    float result;
    result = a*b;
    return result;
}

///************************************** Triangle area ******************************************

float Triangle_area(float a, float b)
{
    float result = 0.5*a*b;
    return result;
}

///************************************** Square area ******************************************

float square_area(float a)
{
    float result = a*a;
    return result;
}

float Circle_area(float r)
{
    float result = 3.14*r*r;
    return result;
}

///**************************************** Random Character ****************************************

string Random_Character(int n)
{
    const int MAX = 26;
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    string res = "";

    res = res + alphabet[rand() % 26]; //Generating Random numbers

    return res;


   // Codes belongs to int main() to Get Random Characters
    /**

        int n;
    cout<<endl;
    cout<< "Must have character : ";

    srand(time(NULL));

    cout << Random_Character(1);
    string ch=Random_Character(1);
    cout<<endl<<endl;

    */


}
