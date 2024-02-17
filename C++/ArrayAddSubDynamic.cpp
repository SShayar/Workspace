#include<iostream>
using namespace std;
int main()
{
    int r,c,op;
    cout<<"Enter The Number Elements of First Array:\t";
    cin>>r;
    cout<<"Enter The Number Elements of Second Array:\t";
    cin>>c;
    int * arr1 = new int(r);
    int * arr2 = new int(c);
    cout<<"Enter Elements of First Array:"<<endl;
        for(int i=1; i<=r; i++)
            {
                cout<<i<<"<< ";
                cin>>arr1[i];
                
            }
    cout<<"1.) Addition\n2.) Subtraction\n Enter:\t";
    cin>>op;
    if (op == 1)
    {
        cout<<"Enter Elements of Second Array:"<<endl;
          for(int i=1; i<=c; i++)
            {
                cout<<i<<"<< ";
                cin>>arr2[i];
                arr1[i] += arr2[i];   
            }

    }
    else if (op == 2)
    {
        cout<<"Enter Elements of Second Array:"<<endl;
          for(int i=1; i<=c; i++)
            {
                cout<<i<<"<< ";
                cin>>arr2[i];
                arr1[i]-= arr2[i];   
            }

    }
    cout<<"\n[";
    for(int i=1; i<=c; i++)
    {
        cout<<arr1[i]<<",";
    }
    cout<<"]\n";
    delete [] arr1;
    delete [] arr2;
return 0;
}
