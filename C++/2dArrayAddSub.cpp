#include<iostream>
using namespace std;
class matrix
{  
    public:
    float m[10][10];
    int row,col;
    void enter_matrix(int x,int y)
    {
        for(int i=1; i<=x; i++)
        {
            for(int j=1; j<=y; j++)
            {
                cout<<">> "<<i<<j<<" -";
                cin>>m[i][j];
            }
            cout<<endl;
        }
    }
    void show(int x,int y)
    {
        for(int i=1; i<=x; i++)
        {
            cout<<"|";
            for(int j=1; j<=y; j++)
            {
                
                cout<<" "<<m[i][j]<<" ";
                
            }
            cout<<"|"<<endl;
        }

    }
};
int main()
{   
    matrix obj[3];
    char choice;
    cout<<"First Matrix"<<endl;
    cout<<"\nEnter Number of Rows:\t";
    cin>>obj[0].row;
    cout<<"\nEnter Number of COlumn:\t";
    cin>>obj[0].col;
    cout<<"Enter Elements"<<endl;
    obj[0].enter_matrix(obj[0].row,obj[0].col);
    cout<<"Second Matrix"<<endl;
    cout<<"\nEnter Number of Rows:\t";
    cin>>obj[1].row;
    cout<<"\nEnter Number of COlumn:\t";
    cin>>obj[1].col;
    cout<<"Enter Elements"<<endl;
    obj[1].enter_matrix(obj[1].row,obj[1].col);
    obj[2].row = obj[0].row;
    obj[2].col = obj[0].col;
    cout<<"Enter Operator\n\t\t+\t-\t*"<<endl;
    cin>>choice;
    switch (choice)
    {
      case '+':
             for(int i=1; i<= obj[2].row ; i++)
             {
                 for(int j=1; j<= obj[2].col ; j++)
                   {
                     obj[2].m[i][j]=obj[0].m[i][j]+obj[1].m[i][j];
                    }
               }
                
        break;
      case '-':
             for(int i=1; i<=obj[2].row; i++)
             {
                 for(int j=1; j<=obj[2].col; j++)
                   {
                     obj[2].m[i][j]=obj[0].m[i][j]-obj[1].m[i][j];
                    }
               }
        break;
      case '*':
                for(int i=1; i<=obj[2].row; i++)
                {
                    for(int j=1; j<=obj[2].col; j++)
                    {
                        obj[2].m[i][j]=0;
                          for(int k=1; k<=obj[2].col; k++)
                            {
                                obj[2].m[i][j] += obj[0].m[i][k]*obj[1].m[k][j];
                            }
                        }
                }
              
        break;
      default:
         cout<<"\nEnter A VAlid CHoice!!\n";
        break;
    }
system("cls");
obj[0].show(obj[2].row,obj[2].col);
cout<<choice<<endl;
obj[1].show(obj[2].row,obj[2].col);
cout<<"="<<endl;
obj[2].show(obj[2].row,obj[2].col);  
 return 0;
}