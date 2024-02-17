#include<iostream>
using namespace std;
class add
{
   public:
   int num1,num2;
   add()
   {
       num1=0;
       num2=0;
   } 
   add(int x)
   {
      num1=x;
   }
   add operator =(add obj)
   {  
      num1= obj.num1;
   }
   void display()
    {
     cout<<"F-"<<num1<<endl;
    }   
  
};
class urnary 
{
    int u1,u2;
    public:
    urnary()
    {
        u1=0;
        u2=0;
    }
     void ry(int x,int y)
    {
      u1=x;
      u2=y;
    }
    urnary operator +(urnary uu)
    {
       urnary u;
      u.u1=  u1 + uu.u1;
      u.u2=  u2 + uu.u2;
      return (u);
    }
    friend void show(urnary &uuu);
};
void show(urnary &uuu)
{
     cout<<"F-"<<uuu.u1<<"\tI-"<<uuu.u2<<endl;
}

int main()
{
    float k,m,l,o;
    urnary obj, obj1,sum;
        cout<<"Enter Two number respectively"<<endl;
        cin>>k>>m;
        cout<<"Enter Two number respectively"<<endl;
        cin>>l>>o;
    
    obj.ry(k,m);
    obj1.ry(l,o);
    cout<<k<<"\t"<<m<<endl;
    cout<<l<<"\t"<<o<<endl;
    cout<<"+"<<endl;
    sum  = obj +obj1;
    show(sum);
    add a1(k);
    add a2(l);
    cout<<"Before swapping"<<endl;
    a1.display();
    a2.display();
    cout<<"after swapping"<<endl;
    a1 = a2 ;
    a1.display();
    a2.display();
    return 0;
}