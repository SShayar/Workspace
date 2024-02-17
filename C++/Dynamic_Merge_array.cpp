#include <iostream>
using namespace std;

int main()
{ 
    int r,c;
    cout<<"Enter The Number Elements of First Array:\t";
    cin>>r;
    int * arr1 = new int(r);
    int * arr2 = new int(c);
    int * arr3 = new int[r + c];
    cout<<"Enter First Array:\n";
        for (int i = 0; i < r; i++) 
            {
                cout<<i+1<<"<< ";
                cin>>arr1[i];
                arr3[i]=arr1[i];
            }
    cout<<"Enter The Number Elements of Second Array:\t";
    cin>>c;
    cout<<"Enter Second Array:\n";
        for (int i = 0; i < c; i++) 
            {
                cout<<i+1<<"<< ";
                cin>>arr2[i];
            }
        cout<<"First Array:\t[";
        for (int i = 0; i < r; i++)
            {
                cout<<arr1[i]<<",";
            }
        cout<<"]\n";
        cout<<"Second Array:\t[";
        for (int i = 0; i < c; i++)
            {
                cout<<arr2[i]<<",";
            }
        cout<<"]";
        cout<<"\nMerged Array:\t";
        cout<<"[";
        for (int i = 0; i < r+c; i++)
            {
                arr3[i] = (i < r ? arr1[i] : arr2[i - c -1]);
                cout<<arr3[i]<<",";
            }
        cout<<"]";
    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    system("pause>null");
    return 0;
}