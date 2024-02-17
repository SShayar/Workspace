#include<iostream>
using namespace std;
const int M = 10;
const int N = 10;
void display(int *array, int size) 
{
   cout<<"[";
   for(int i = 0; i<size; i++)
      {
        cout << array[i] <<",";
      }
    cout<<"]"<<endl;
}
void display_mat(int array[M][N], int row,int col) 
{
   for(int i = 0; i<row; i++)
      {
        cout<<"| ";
        for( int j=0; j<col; j++)
        {
            cout << array[i][j] <<" ";
        }
        cout<<"|"<<endl;
      }
}
void add_matrix(int array1[M][N], int array2[M][N], int row, int col)
{
    int array3[M][N]{0};
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
    cout<<"Result:\n";
    display_mat(array3,row,col);
}
void sub_matrix(int array1[M][N], int array2[M][N], int row, int col)
{
    int array3[M][N]{0};
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            array3[i][j] = array1[i][j] - array2[i][j];
        }
    }
    cout<<"Result:\n";
    display_mat(array3,row,col);
}
void muntiplay_matrix(int array1[M][N], int array2[M][N], int row, int col)
{
    int array3[M][N];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            array3[i][j]=0;
            for(int k=0; k<col; k++)
            {
              array3[i][j] += array1[i][k] *  array2[k][j];
            }
        }
    }
    cout<<"Result:\n";
    display_mat(array3,row,col);
}
void merge_array(int array1[],int array2[], int size1,int size2) 
{
   int res[size1 + size2]{0};
   for(int i=0; i<size1; i++)
   {
    res[i]=array1[i];
   }
   for(int j=0; j<size2; j++)
   {
    res[j+size2]=array2[j];
   }
   display(res,size1+size2);
}
void merge_Matrix(int array1[M][N],int array2[M][N],int row, int col)
{
    int res[row][2 * col]{0};
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            res[i][j] = array1[i][j];
            res[i][j + col] = array2[i][j];
        }
    }
    cout<<"Result:\n";
    for (int i = 0; i < row; i++) 
    {   cout<<" |";
        for (int j = 0; j < 2 * col;
        j++)
        cout << res[i][j] << " ";
        cout << "|"<<endl;
    }
}
int main()
{
    int choice1,choice2,mat1[10][10]{0},mat2[10][10]{0},res[10][10]{0};
    int r,c,k,m;
    cout<<"***********Welcome TO Array & Matrix Calculator***********"<<endl;
    label1:
    cout<<"__________________________MENU__________________________"<<endl;
    cout<<"\nWhat Do You Want To Work with !\n\t\t1.) Array\n\t\t2.) Matrix"<<endl;
    cout<<"Enter Choice:\t";
    cin>>choice1;
    if (choice1 == 1)
                {
                label2:
                cout<<"__________________________OPERATIONS__________________________"<<endl;
                cout<<"\n\t1.) ADDITION & SUBTRACTION\n\t2.) MERGING\n\t3.) SORTING & SEARCH "<<endl;
                cout<<"Enter Choice:\t";
                cin>>choice2;
                switch(choice2)
                {
                    case 1:
                    {
                            int op;
                            cout<<"Enter The Number Elements of First Array:\t";
                            cin>>r;
                            cout<<"Enter The Number Elements of Second Array:\t";
                            cin>>c;
                            int * arr1 = new int[r]{0};
                            int * arr2 = new int[c]{0};
                            int * arr3 = new int[r+c]{0};
                            cout<<"Enter Elements of First Array:"<<endl;
                                for(int i=0; i<r; i++)
                                    {
                                        cout<<i+1<<"<< ";
                                        cin>>arr1[i];
                                        arr3[i]=arr1[i];
                                        
                                    }
                            label3:
                            cout<<"1.) Addition\n2.) Subtraction\nEnter:\t";
                            cin>>op;
                                if (op == 1)
                                {
                                    cout<<"Enter Elements of Second Array:"<<endl;
                                    for(int i=0; i<c; i++)
                                        {
                                            cout<<i+1<<"<< ";
                                            cin>>arr2[i];
                                            arr3[i] += arr2[i];   
                                        }

                                }
                                else if (op == 2)
                                {
                                    cout<<"Enter Elements of Second Array:"<<endl;
                                    for(int i=0; i<c; i++)
                                        {
                                            cout<<i+1<<"<< ";
                                            cin>>arr2[i];
                                            arr3[i]-= arr2[i];   
                                        }

                                }
                                else
                                {
                                    system("cls");
                                    cout<<"Invalid Choice"<<endl;
                                    goto label3;
                                }
                            cout<<"First Array:\t";
                            display(arr1, r);
                            cout<<"Second Array:\t";
                            display(arr2, c);
                            cout<<"\nResult:\t";
                            display(arr3, c > r ? c : r );
                            delete [] arr1;
                            delete [] arr2;
                            delete [] arr3;
                    }   
                    break;
                    case 2:
                    {
                            cout<<"Enter The Number Elements of First Array:\t";
                            cin>>r;
                            cout<<"Enter The Number Elements of Second Array:\t";
                            cin>>c;
                            int * arr1 = new int[r]{0};
                            int * arr2 = new int[c]{0}; 
                            int * arr3 = new int[r+c]{0};
                            cout<<"Enter First Array:\n";
                                for (int i = 0; i < r; i++) 
                                    {
                                        cout<<i+1<<"<< ";
                                        cin>>arr1[i];
                                        arr3[i]=arr1[i];
                                    }
                            cout<<"Enter Second Array:\n";
                                for (int i = 0; i < c; i++) 
                                        {
                                            cout<<i+1<<"<< ";
                                            cin>>arr2[i];
                                            
                                        }
                            cout<<"First Array:";
                            display(arr1,r);
                            cout<<"Second Array:";
                            display(arr2,c);
                            cout<<"\nMerged Array:\t";
                            merge_array(arr1,arr2,r,c);
                            delete [] arr1;
                            delete [] arr2;
                            delete [] arr3;
                    }
                    break;
                    case 3:
                    {
                            int op,num,cnt=0,pos;
                            cout<<"Enter The Number Elements of Array:\t";
                            cin>>r;
                            int * arr1 = new int[r]{0};
                            cout<<"Enter Elements:"<<endl;
                                for(int i=0; i<r; i++)
                                    {
                                        cout<<i+1<<"<< ";
                                        cin>>arr1[i];   
                                    }
                            label4:
                            cout<<"\n\t\t1.) Sort in Ascending order & Search\n\t\t2.) Sort in Descending order & Search\n\t\t3.) Search an element\nEnter:\t";
                            cin>>op;
                            if (op == 1)
                            {
                                int temp;
                                for(int i = 0; i< r;i++)   
                                    {
                                    for(int j=0;j<=r;j++) 
                                        {
                                        if(arr1[i]<arr1[j]) 
                                            {
                                                temp = arr1[i];    
                                                arr1[i] = arr1[j];
                                                arr1[j] = temp;
                                            }
                                        }
                                    }
                                    cout<<"\n Array Is Sorted In Ascending order: ";
                                    display(arr1,r);
                                    goto label9;
                                }
                            else if (op == 2)
                                {
                                    int temp;
                                        for(int i=0; i<r; i++)
                                            {		
                                                for(int j=i+1; j<r; j++)
                                                {
                                                    if(arr1[i]<arr1[j])
                                                        {
                                                            temp  = arr1[i];
                                                            arr1[i] = arr1[j];
                                                            arr1[j] = temp;
                                                        }
                                                    }
                                                }
                                            cout<<"\n Array Is Sorted In Descending Order order: ";
                                            display(arr1,r);
                                            goto label9;
                                    }
                            else if (op == 3 )
                            {
                                label9:
                                cout<<"\n Enter Element to be Searched : ";
                                cin>>num;
                                for(int i=0; i<r; i++)
                                {
                                        if(arr1[i]==num)
                                        {
                                                cnt=1;
                                                pos=i+1;
                                                break;
                                        }
                                }
                            if(cnt==0)
                                {
                                        cout<<"\n Element Not Found..!!";
                                }
                            else
                                {
                                        cout<<"\n Element "<<num<<" Found At Position "<<pos;
                                        cout<<"\nArray:\t[";
                                        for(int i=0; i<pos-1; i++)
                                        {
                                        cout<<arr1[i]<<",";
                                        }
                                        for(int i=0; i<=pos; i++)
                                        {
                                            if (arr1[i]==num)
                                            {
                                                cout<<"'"<<arr1[i]<<"'"<<",";
                                            }
                                        }
                                        for(int i=pos; i<r; i++)
                                        {
                                        cout<<arr1[i]<<",";
                                        }
                                        cout<<"]\n";        
                                }
                            }
                        else 
                            {
                                system("cls");
                                cout<<"Invalid Choice"<<endl;
                                goto label4;
                            }
                        delete [] arr1;
                    }           
                    break;
                    default:
                            {
                                system("cls");
                                cout<<"Invalid Choice"<<endl;
                                goto label2;
                            }
                    } 
                }
    else if (choice1 == 2)
    {
        label6:
                cout<<"__________________________OPERATIONS__________________________"<<endl;
                cout<<"\n\t1.) ADDITION & SUBTRACTION & MUNTIPLICATION\n\t2.) MERGING\n\t3.) SORTING & SEARCH "<<endl;
                cout<<"Enter Choice:\t";
                cin>>choice2;
                switch(choice2)
                {
                    case 1:
                    {
                        cout<<"Enter number of Rows first Matrix:\t";
                        cin>>r;
                        cout<<"Enter number of COlumns first Matrix:\t";
                        cin>>c;
                        cout<<"Enter elements "<<endl;;
                        for(int i =0; i<r; i++)
                        {
                            for(int j=0; j<c; j++)
                            {
                              cout<<"1.) MATRIX <<"<<i+1<<j+1<<"<< ";
                              cin>>mat1[i][j];  
                            }
                        }
                        cout<<"Enter number of Rows Second Matrix:\t";
                        cin>>k;
                        cout<<"Enter number of COlumns Second Matrix:\t";
                        cin>>m;
                        cout<<"Enter elements "<<endl;;
                        for(int i =0; i<k; i++)
                        {
                            for(int j=0; j<m; j++)
                            {
                              cout<<"2.) MATRIX <<"<<i+1<<j+1<<"<< ";
                              cin>>mat2[i][j];  
                            }
                        }
                        label5:
                            cout<<"Choose What you want to DO..!\n\t1.) Addition\n\t2.) Subtraction\n\t3.) Muntiplication\nEnter:\t";
                            cin>>choice1;
                                if (choice1 == 1)
                                {
                                    cout<<"First Matrix:\n";
                                    display_mat(mat1,r,c);
                                    cout<<"Second Matrix:\n";
                                    display_mat(mat2,k,m);   
                                    add_matrix(mat1,mat2,r,m);
                                }
                                else if (choice1 == 2)
                                {
                                    cout<<"First Matrix:\n";
                                    display_mat(mat1,r,c);
                                    cout<<"Second Matrix:\n";
                                    display_mat(mat2,k,m);   
                                    sub_matrix(mat1,mat2,r,m);

                                }
                                else if (choice1 == 3)
                                {
                                    if (c == k)
                                    {
                                    cout<<"First Matrix:\n";
                                    display_mat(mat1,r,c);
                                    cout<<"Second Matrix:\n";
                                    display_mat(mat2,k,m);   
                                    muntiplay_matrix(mat1,mat2,c,k);
                                    }
                                    else{
                                        cout<<"Column"<<c<< "of first array is not eual to Row "<<k<<" of second array\n so mutiplication is not possible..!!";
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    cout<<"Invalid Choice"<<endl;
                                    goto label5;
                                }
                         
                    }   
                    break;
                    case 2:
                    {
                        cout<<"Enter number of Rows first Matrix:\t";
                        cin>>r;
                        cout<<"Enter number of COlumns first Matrix:\t";
                        cin>>c;
                        cout<<"Enter elements "<<endl;;
                        for(int i =0; i<r; i++)
                        {
                            for(int j=0; j<c; j++)
                            {
                              cout<<"1.) MATRIX <<"<<i+1<<j+1<<"<< ";
                              cin>>mat1[i][j];
                            }
                        }
                        cout<<"Enter number of Rows Second Matrix:\t";
                        cin>>r;
                        cout<<"Enter number of COlumns Second Matrix:\t";
                        cin>>c;
                        cout<<"Enter elements "<<endl;;
                        for(int i =0; i<r; i++)
                        {
                            for(int j=0; j<c; j++)
                            {
                              cout<<"2.) MATRIX <<"<<i+1<<j+1<<"<< ";
                              cin>>mat2[i][j];  
                            }
                        }
                        cout<<"Merged Matrix:\n";
                        merge_Matrix(mat1,mat2,r,c);
                        goto label5;       
                    }    
                    break;
                    case 3:
                    {
                        cout<<"Abi Bana HAi"<<endl;
                        goto label6;
                    }           
                    break;
                    default:
                            {
                                system("cls");
                                cout<<"Invalid Choice"<<endl;
                                goto label6;
                            }
                } 
    }       
    else
    {
       system("cls");
       cout<<"Invalid Choice"<<endl;
       goto label1;
    }
   
return 0;

}


