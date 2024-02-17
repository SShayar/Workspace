#include<iostream>
#include<conio.h>
using namespace std;
class overload
{
    float real,imag;
    public:
    overload()
    {
        real=0;
        imag=0;
    }
    float get(float r, float i)
    {
        real=r;
        imag=i;
    }
    overload operator +(overload a1)
    { overload a2;
      a2.real= real + a1.real;
      a2.imag= imag + a1.imag;
      return (a2);
    }
    void display ()
    {
        cout<<"------------"<<endl;
        cout<<real<<"\t"<<imag;
    }
    };
    int main()
    {   
        float k,m,l,o;
        overload a3,a4,sum;
        cout<<"Enter Two number respectively"<<endl;
        cin>>k>>m;
        cout<<k<<"\t"<<m<<endl;
        cout<<"Enter Two number respectively"<<endl;
        cin>>l>>o;
        cout<<k<<"\t"<<m<<endl<<l<<"\t"<<o<<endl;
        a3.get(k,m);
        a4.get(l,o);
        sum = a3 + a4;
        sum.display();
        return 0;
    }