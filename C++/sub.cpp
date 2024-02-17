#include<iostream>
using namespace std;
void find( int arr[], int len , int match)
{
    int result1,result2,index = 0 ;
    int * temp = new int ();
    for ( int i = 0; i< len; i++)
    {
        result1 += arr[i];
        result2 += result1 +  arr[i+1];
        if( result1 == match)
        {
            temp[i] = arr[i];
            index = i;
            break;
        }
        else if (result2 == match)
        {
            temp[i] = arr[i];
            temp [i+1] = arr[i+1];
            index = i;
            break;
        }
        temp[i] = arr[i];
        temp [i+1] = arr[i+1];
    }
    cout<<"Here Is your Sub Array with the sum "<<match<<":\t"<<"[";
    for ( int j = 0 ; j <= index; j++)
    {
        cout<<temp[j]<<",";
    }
    cout<<"]";
}
int main()
{
    int arr[] = { 2,3,3,2,5};
    int match = 5;
    find(arr, 5, 5);
return 0;   
}
