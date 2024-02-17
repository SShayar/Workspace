#include <iostream>
using namespace std;
class feb {  
int f ,f1 ,f2;
public:
 feb()
 {
     f=0;
     f1=1;
     f2=f+f1;
 }
feb(feb &fe)
{
    f=fe.f;
    f1=fe.f1;
    f2=fe.f2;
}
int show();
int grow();
~feb()
{
 cout <<"Here is your febonnaci series-\n";   
}
};
int feb ::show()
{
    cout<<f<<endl;
}
int feb ::grow()
{
    f=f1;
    f1=f2;
    f2=f+f1;
}
int main()
{ int n;
 cout <<"enter the Number of terms of febonnaci series-\n";
 cin>>n;
    feb febo;
    for (int i=0; i<=n; i++)
    {
      febo.show();
      cout<<endl;
      febo.grow();
    }
return 0;
}