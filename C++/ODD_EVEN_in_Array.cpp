#include<iostream>
using namespace std;
class array
{
    public:
    int a[10][10],a1;
    void enter()
    {
        for(int i=1; i<=3; i++)
        {
            for (int j=1; j<=3; j++)
            {
                cout<<i<<j<<" ";
                cin>>a[i][j];

            }
            cout<<endl;
        }
    }
    void print()
    {
        for(int i=1; i<=3; i++)
        {
            for (int j=1; j<=3; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        a1=sizeof(a)/sizeof(a[0]);
        cout<<"Size of entered array:\t"<<a1<<endl;
    }
    void even()
    {
        cout<<"Even Numbers in array"<<endl;
        for(int i=1; i<=3; i++)
        {
            for (int j=1; j<=3; j++)
            {
                if(a[i][j]%2==0)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        
    }
    void odd()
    {
        cout<<"Odd Numbers in array"<<endl;
        for(int i=1; i<=3; i++)
        {
            for (int j=1; j<=3; j++)
            {
                if(a[i][j]%2==1)
                {
                    cout<<a[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        
    }
};
int main()
{
    array a2;
    a2.enter();
    a2.print();
    a2.even();
    a2.odd();

    return 0;
}