#include<iostream>
using namespace std;
class node
{
public:
node* next;
int data;
node(int val)
{
    data=val;
    next=NULL;
}
};
class List{
public:
node* head;
node* tail;
List()
{
    head=NULL;
    tail=NULL;
}
void push_back(int val)
{
    node* newNode=new node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
int findmiddle()
{
    if(head==NULL)
    {
        cout<<"LinkedList IS empty!"<<endl;
        return 0;
    }
    node* slow=head;
    node* fast=head;
    if(fast->next==NULL||fast->next==nullptr)
    {
    cout<<"middle is: "<<slow->data<<endl;
    return slow->data;
    }
    while(fast!=NULL&&fast->next!=NULL)
    {
    slow=slow->next;
    fast=fast->next->next;
    }
    cout<<"middle is: "<<slow->data<<endl;
    return slow->data;
}
void print()
{
    if(head==NULL)
    {
    cout<<"LinkedList Is empty!"<<endl;
    return;
    }
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};
int main ()
{
    cout<<"hello World dporgram work!";
List ll;
ll.push_back(1);
ll.push_back(2);
ll.push_back(3);
ll.push_back(4);
// ll.push_back(5);

ll.print();
ll.findmiddle();
return 0;

}