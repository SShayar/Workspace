#include<iostream>
using namespace std;

void bubble(int arr[], int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion(int arr[], int len)
{
    for(int i = 1; i < len; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void selection(int arr[], int len)
{
    for(int i = 0; i < len - 1; i++)
    {
        int selection = i;
        for(int j = i + 1; j < len; j++)
        {
            if(arr[selection] > arr[j])
            {
                selection = j;
            }
        }
        int temp = arr[selection];
        arr[selection] = arr[i];
        arr[i] = temp;
    }
}

void display(int arr[], int size)
{
    cout << "[";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << "]" << endl;
}

int quick_sort_partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = (s - 1);
    for(int j = s; j <= e - 1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[e];
    arr[e] = temp;
    return (i + 1);
}

void quick_sort(int arr[], int s, int e)
{
    if(s < e)
    {
        int pivot = quick_sort_partition(arr, s, e);
        quick_sort(arr, s, pivot - 1);
        quick_sort(arr, pivot + 1, e);
    }
}

void merge(int arr[], int s, int mid, int e)
{
    int n1 = mid - s + 1;
    int n2 = e - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++)
        L[i] = arr[s + i];
    for(int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = s;
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void merge_sort(int arr[], int s, int e)
{
    if(s < e)
    {
        int mid = s + (e - s) / 2;
        merge_sort(arr, s, mid);
        merge_sort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int binary_search(int arr[], int len, int match)
{
    int s = 0;
    int e = len - 1;
    while(s <= e)
    {
        int mid = s + (e - s) / 2;
        if(arr[mid] == match)
        {
            cout << "Match Found at Index " << mid;
            return mid;
        }
        else if(arr[mid] > match)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "Match Not Found";
    return -1; 
}

void linear_search(int arr[], int len, int match)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == match)
        {
            cout << "Match Found at Index " << i;
            return;
        }
    }
    cout << "Match Not Found";
}

int main()
{
    int arr[] = {12, 15, 36, 27, 10, 19};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    display(arr, len);

    // Sort using different algorithms
    // bubble(arr, len);
    // insertion(arr, len);
    // selection(arr, len);
    // quick_sort(arr, 0, len - 1);
    merge_sort(arr, 0, len - 1);

    cout << "Sorted Array: ";
    display(arr, len);

    int search_element = 12;
    cout << "Searching for " << search_element << " using Binary Search: ";
    binary_search(arr, len, search_element);
    cout << endl;

    cout << "Searching for " << search_element << " using Linear Search: ";
    linear_search(arr, len, search_element);
    cout << endl;

    return 0;
}
