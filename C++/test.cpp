#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    cout<<"[";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
}
void bubble(int arr[], int size)
{
    for(int i=0; i< size-1; i++)
    {
        for( int j=0; j<size - i -1; j++)
        {
            if(arr[j]>arr[j+1])
            {
            int temp1 = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp1;
            }
        }
    }
}
int main()
{
    int arr[10],len;
    cout<<"e";
    cin>>len;
    for(int i=0; i<len; i++)
    {
        cin>>arr[i];
    }
    bubble(arr,len);
    cout<<"bubble Sort:";
    for( int i=0; i<len; i++)
    {
        cout<<arr[i]<<",";
    }
return 0;
}