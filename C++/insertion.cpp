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
void insertion_sort( int arr[], int size)
{
    for ( int i=1; i <size;  i ++)
    {
        int current = arr[i];
        int j = i-1; 
        while( j>=0 && current < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current; 
    }
}
void binary(int arr[],int len , int match)
{
   int s = 0;
   int e = len;
   while( s<=e)
   {
      int mid = s + e/2;
      if ( arr [mid] == match)
      {
         cout<<"Match Found at index"<<mid;
      }
      else if ( arr[mid]> match)
      {
         e = mid-1;
      }
      else{
         s = mid +1;
      }
   }
}
int main()
{

    int arr[]= {42,22,32,54,81,63,12,70,01,29};
    int len = sizeof(arr)/sizeof(arr[0]);
    int match;
    cout<<"Before Sorting :\t";
    display(arr,len);
    insertion_sort(arr, len);
    cout<<"After Sorting :\t";
    display(arr,len);
    cout<<" Enter the Number you want To Search:\t";
    cin>>match;
    binary(arr, len, match);
return 0;
}