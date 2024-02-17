#include <iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class hotel
{  string y ="Deluxe",n ="Regular",name,add,room;
   int total=0,co=12,days,ci,p;
public:
        hotel()
       {   cout<<"Name:-"<<endl;
           cin>>name;
           cout<<"City:-"<<endl;
           cin>>add;
           cout<<"Phone Number:-"<<endl;
           cin>>p;
            cout<<"Enter Romm type Deluxe or Regular:-"<<endl;
            cin>>room;
            cout<<"Enter check in Time (According to world clock from 0-23):-"<<endl;
            cin>>ci;
            cout<<"Enter Number of Days you have Stayed:-"<<endl;
            cin>>days;
             if(y== room)
             {
                if(ci<co)
               {
                    total= days*1000;
                }
                else
                {  total= days*1000;
                   total= total+1000;
                }
             }
             else if(n == room)
             {
                 if(ci<co)
               {
                    total= days*700;
                }
                else
               {   total= days*700;
                   total= total+700;
                } 
             }
            
        }
        void show()
        {
           cout<<"Name:-"<<name<<endl;
           cout<<"City:-"<<add<<endl;
           cout<<"Phone Number:-"<<p<<endl;
           cout<<"total Bill:-"<<total<<endl;
        }
};
int main()
{   hotel h;
    h.show();
getch();
return 0;
}
