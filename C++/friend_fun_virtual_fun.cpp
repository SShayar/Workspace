#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class stream
{
   public:
    int otp;
    char p[20];
    long long  ph;
    long long acc;
    virtual void fun()=0;
    virtual void show()=0;
};

class Movie :public stream
{  private:
   char name[20];
   int n;
   public:
   friend void function (Movie &obj);
   void fun()
   {
       cout<<"Enter Account Number\t";
       cin>>acc;
       cout<<"\nEnter Password \t";
       fflush(stdin);
       gets(p);
       cout<<"\nEnter Name\t";
       fflush(stdin);
       gets(name);
       cout<<"\nEnter Year of Birth\t";
       cin>>n;
   }
   void show()
   {
       cout<<"\nAccount No.-\t"<<acc;
   }
};
void function(Movie &obj)
{
       
       cout<<"\nName-\t"<<obj.name;
       cout<<"\nBirth Year-\t"<<obj.n;

}
class OTT:public stream
{   public:
    void fun()
    {
        cout<<"\nEnter Phone Number\t";
        cin>>ph;
        cout<<"\nEnter Six Numeric Digit O.T.P\t";
        cin>>otp;
    }
    void show()
    {
      cout<<"\nPhone No.-\t"<<ph;
    }
};
int main()
{
    
    stream *st[2];
    Movie m;
    OTT ot;
    st[0] = &m;
    st[1] = &ot;
    st[0]->fun();
    st[1]->fun();
    function(m);
    st[0]->show();
    st[1]->show();
return 0;
}