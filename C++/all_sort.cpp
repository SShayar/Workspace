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
void merge( int arr[], int s, int mid , int e)
{
    int * merge = new int [ e - s + 1];
    int a = s; 
    int b = mid+1;
    int x = 0;
    while( a <= mid && b <= e)
    {
        if ( arr[a]<arr[b])
        {
            merge[x++] = arr[a++];
            //x++; a++;
        }
        else{
            merge[x++] = arr[b++];
            //x++; b++;
        }
    }
    while( a<= mid)
    {
        merge[x++] = arr[a++];
        //x++; a++;  
    }
    while( b<= e)
    {
        merge[x++] = arr[b++];
        //x++; b++;    
    }
    for( int i=0, j=s; i<e-s+1; i++, j++)
    {
        arr[j] = merge[i];
    }
}
void merge_sort(int arr[], int s, int e)
{
    if ( s>=e)
    {
        return;
    }
    int mid = s + (e-s)/2;
    merge_sort( arr,s,mid);
    merge_sort( arr,mid+1,e);
    merge(arr,s,mid,e);
}
void bubble_sort(int arr[], int size)
{
    for( int i=0; i<size-1; i++)
    {
        for( int j=0; j<size-i-1; j++)
        {
           if ( arr[j+1]< arr[j])
           {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
           }
        }
    }
}
void selection_sort( int arr[], int size)
{
    int smallest;
    for ( int i=0; i < size -1; i++)
    {
        smallest=i;
        for( int j = i+1; j<size; j++)
        {
            if ( arr[j] < arr[i])
            {
                smallest = j;
            }
        }
        int temp  = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
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
int  binary(int arr[], int size, int match)
{
    int s = 0; 
    int e = size; 
    while ( s <= e)
    {
       int mid = (s+e/2);
        if ( arr[mid] == match )
        {
            return mid;
        }
        else if (arr[mid] > match )
        {
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[]= {42,22,32,54,81,63,12,70,01,29};
    int len = sizeof(arr)/sizeof(arr[0]);
    int match;
    //bubble_sort(arr,len);
    //selection_sort(arr,len);
    //insertion_sort(arr,len);
    cout<<"Before Sorting:";
    display(arr,len);
    merge_sort(arr,0,len-1);
    cout<<"After Sorting:";
    display(arr,len);
    cout<<" Enter the Number you want To Search:\t";
    cin>>match;
    binary(arr,len,match);

return 0;
}