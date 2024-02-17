#include<iostream>
using namespace std;
void display(int arr[], int len)
{
    cout<<"[";
    for( int i=0; i<len; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"]";
}
void find( int arr[],int len)
{
    int *result = new int();
    int index;
   for ( int i = 1; i<=len ; i++)
   {
    if (arr[i] != i)
    {
       result[i]=arr[i];
       index = i;
       break; 
    }
   }
   for ( int i = 1; i<=index; i++)
   {
   cout<<"\nMissing number are:\t"<<result[i]<<",";
   }
}
void bubble( int arr[], int len)
{
    for( int i =0 ; i<len; i++)
    {
        for( int j =0; j <len-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
               int temp = arr[j+1];
               arr[j+1] = arr[j];
               arr[j] = temp;
            }
        }
    }
    display(arr,len);
    find(arr,len);
}
int main()
{
    int arr[] = {1,3,5,6,7,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    // bubble(arr,len); 
    find(arr,len);
return 0;

}