
#include <iostream>
using namespace std;
void insertion_sort(int *arr, int size)
{
    int match,j;
    for(int i=1; i<size; i++)
    {
        match = arr[i];
        j=i;
        while(j>0 && arr[j-1]>match)
        {
            arr[j]=arr[j-1];
             j--;
        }
        arr[j]=match;
    }
}
void display(int *array, int size) {
      cout<< "[";
   for(int i = 0; i<size; i++)
      cout << array[i] << ",";
   cout <<"]"<< endl;
}
int main() {
    int arr[100],num;
    cout<<"enter The number of Elements of Array:\t";
    cin>>num;
    cout<<"Enter The Elements\n ";
    for(int i =0; i<num; i++)
    {
        cout<<"<<"<<i+1<<"<<\t";
        cin>>arr[i];
    }
    insertion_sort(arr,num);
    display(arr,num);
    return 0;

    
}

