#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;
node(int val)
{
data=val;
next=NULL;
}
};

class List
{
public:
node* head;
node* tail;

List()
{
    head=NULL;
    tail=NULL;
}
void push_front(int val)
{
node* newNode=new node(val);
if(head==NULL)
{
    head=newNode;
    tail=newNode;
}
else
{
newNode->next=head;
head=newNode;
}
}
void push_back(int val)
{
    node* newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}
void pop_front()
{
if(head==NULL)
{
    cout<<"Linked list Already Empty!"<<endl;
    return;
}
else
{
node* temp=head;
head=head->next;
temp->next=NULL;
delete temp;
}
}
void pop_back()
{
if(tail==NULL)
{
    cout<<"Linked list Already Empty!"<<endl;
    return;
}
else
{
node* temp=head;
while(temp->next!=tail)
{
temp=temp->next;
}
temp->next=NULL;
node* temptail=tail;
delete temptail;
tail=temp;
}
}

void print()
{
    node* start=head;
    while(start!=NULL)
    {
        cout<<start->data<<" -> ";
        start=start->next;
    }
    cout<<"NULL";
}

};

int main ()
{
List ll;
ll.push_front(3);
ll.push_front(2);
ll.push_front(1);
ll.push_back(4);
ll.push_back(5);
ll.push_back(6);
cout<<"print 1st "<<endl;
ll.print();
ll.pop_front();
cout<<endl;
cout<<"print Again"<<endl;
ll.print();
ll.pop_back();
cout<<endl;
cout<<"print Again"<<endl;
ll.print();
return 0;
}