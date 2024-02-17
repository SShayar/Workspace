#include<stdio.h>
#include<iostream>
#include <conio.h>
using namespace std;
class Bank
  {  public:
        char name[20], account_type[20];    //Declaration of data members
        long long account_number;
        int balance, bal;
        void initialize()                 //member functions of the class Bank
       {                       // initialize function to initialize data members
           cout<<"\nEnter Account Holders Name:";
           fflush(stdin);
           gets(name);
           cout<<"\nEnter Account type:";
           gets(account_type);
           cout<<"\nEnter account number:";
           cin>>account_number;
           cout<<"\nEnter balance to deposit:";
           cin>>balance;
        }
   void deposit()               
       {                   //deposit() function to deposit amount in account
           cout<<"\nEnter the amount to deposit:";
           cin>>bal;
           balance+=bal;
           cout<<"\nYour New Balance:"<<balance; 
        }
   void check()
       { //check() function to withdraw amount and check remaining balance
        cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
        cin>>bal;
           if(bal<=balance)
           {
               balance-=bal;
               cout<<"\nRemaining Balance:"<<balance;
             }
           else
           {
               exit(0);
             }
        }
     void display()
        {                      //display function to display user information
           cout<<"\nName :"<<name<<endl;
           cout<<"\nBalance :"<<balance;
         }
    }; 
  int main()
   {
     int k,j;
     cout<<"Enter the Number of Account Holders, Data you want To Manage"<<endl;
     cin>>j;
     Bank bk[j];
            for(int i = 0; i <=j; ++i)
            {
                bk[j].initialize();
                bk[j].display();
                cout<<"\nEnter your choice";
                cout<<"\n1.Deposit\n2.Withdraw \n";
                cin>>k;      
              
                if(k==1)
                    {
                        
                        bk[j].deposit();
                    }
                else if(k==2)
                    {
                        
                        bk[j].check();
                    }
            }
            return 0;
            getch();
     }