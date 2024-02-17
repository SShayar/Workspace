#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert_at_tail(node* &head,int val)
{
    node* newnode = new node(val);
    if ( head == NULL)
    {
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp -> next;
    }
    temp->next= newnode;

}
void make_cycle( node* &head, int pos)
{
    node* temp = head;
    node* sec_temp ;
    int con=0;
    while( con != pos)
    {
        temp = temp->next;
    }
    sec_temp = temp;
    temp->next = sec_temp;
    
}
void display(node* head)
{
    node * temp = head;
    while( temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp ->next;
    }
    cout<<endl;
}
bool detect_cycle(node* &head)
{
    node* hare = head;
    node* tor = head;
    while (hare->next != NULL && hare!= NULL)
    {
        hare = hare->next->next;
        tor = tor->next;
        if(hare == tor)
        {
            return true;
        }
    }
    return false;
    
}
void remove_cycle(node* &head)
{
   node* fast = head;
   node* slow = head;
   do
   {
     slow = slow->next;
     fast = fast->next->next;
   }while( slow != fast);
   fast = head;
   while( slow->next != fast->next)
   {
    slow = slow->next;
    fast = fast->next;
   }
   slow->next=NULL;     
}
int main()
{   
    node* head = NULL;
    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    display(head);
    make_cycle(head,3);
    cout<<detect_cycle(head)<<endl;
    remove_cycle(head);
    // cout<<detect_cycle(head)<<endl;;
    //  display(head);
    return 0;
}