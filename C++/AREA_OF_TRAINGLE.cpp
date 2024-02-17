#include<iostream>
#include<math.h>
using namespace std;
class Area
{   public:
    float area;
    int TriangleArea(float a, float b, float c) // scalene triangle
    {
         float s = a+b+c;
         area= sqrt(s*(s-a)*(s-b)*(s-c));
         cout<<"Area-\t"<<area;
    }
    float TriangleArea(float a, float b)  // isosceles triangle
    {
         area= (sqrt(a*a-b*b/4)*b/2);
         cout<<"Area-\t"<<area;
    }
    float TriangleArea(float a)  // equilateral triangle 
    {
         area= (sqrt(3)*a*a/4);
         cout<<"Area-\t"<<area;
    }
};
int main()
{
    float s1=0.0,s2=0.0,s3=0.0;
    int ch;
    Area a1;
    cout<<"\n *****Menu***** \n";
                cout<<"\n 1. Area of Scalene Triangle";
                cout<<"\n 2. Area of Isosceles Triangle";
                cout<<"\n 3. Area of Equilateral Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch){
          case 1:
                 cout<<"\n Enter the Three Sides Of Traingle : ";
                 cin>>s1>>s2>>s3;
                 a1.TriangleArea( s1, s2, s3);
                 break;
          case 2:
                 cout<<"\n Enter the Two Sides Isosceles Triangle : ";
                 cin>>s1>>s2;
                 a1.TriangleArea( s1, s2);
                 break;
          case 3:
                cout<<"\n Enter the One Side Equilateral Triangle : ";
                cin>>s1;
                a1.TriangleArea( s1);
                break;
          case 4:
                 exit(0);
           default:
                 cout<<"\n Invalid Choice... ";
                }
    return 0;
}
