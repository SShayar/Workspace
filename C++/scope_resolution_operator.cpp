

#include<iostream>
using namespace std;
class Hotel{
    int bn,ph;
    char name[20];
    float amount;
public:
void input(float bill);
void output();
};
void Hotel::input(float bill)
{
    cout<<"Enter name\n";
    cin>>name;
    cout<<"Enter Booking Number\n";
    cin>>bn;
    cout<<"Enter Moblie Number\n";
    cin>>ph;
    amount=bill;
}
void Hotel::output()
{
    cout<<"\nName-"<<name<<"\nBooking Number-"<<bn<<"\nPhone number-"<<ph<<"\nTotal Bill-"<<amount<<endl;
}
int main(){
    Hotel h;
    h.input(200.2);
    h.output();
return 0;

}