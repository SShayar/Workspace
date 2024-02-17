
#include <iostream>
using namespace std;
void swap(int & a, int & b)
{
   int temp = a;
   a = b;
   b = temp;
}
void selection_sort(int *arr, int size)
{
    int match,j;
    for(int i=1; i<size; i++)
    {
        match=i;
        for(int j=0; j<size; j++)
        {
         if( arr[j]<arr[i])
         {
            match=j;
            swap(arr[i],arr[match]);
         }
        }
    }
}
int binaryserch(int arr[],int size,int match)
{
  int s=0;
  int e=size;
  while(s<=e)
  {
    int mid= s+e/2;
    if( arr[mid]==match)
    {
        return mid;
    }
    else if(arr[mid]>match)
    {
        e=mid-1;
    }
    else
    {
        s=mid+1;
    }
    return -1;
  }
}
void display(int *array, int size) {
      cout<< "[";
   for(int i = 0; i<size; i++)
      cout << array[i] << ",";
   cout <<"]"<< endl;
}
int main() {
    int arr[100],num,match;
    cout<<"enter The number of Elements of Array:\t";
    cin>>num;
    cout<<"Enter The Elements\n ";
    for(int i =0; i<num; i++)
    {
        cout<<"<<"<<i+1<<"<<\t";
        cin>>arr[i];
    }
    selection_sort(arr,num);
    display(arr,num);
    cout<<"enter The number of Elements of Array:\t";
    cin>>match;
    cout<<binaryserch(arr,num,match)<<endl;
    display(arr,num);
    return 0;

    
}
