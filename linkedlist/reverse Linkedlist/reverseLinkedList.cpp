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
private:
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
int count()
{
    int count=0;
    if(head==NULL)
    return 0;
    node* temp=head;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void insertmiddle(int pos,int val)
{
    if(pos>(count()))
    {
        cout<<"Inavlid Position"<<endl;
        return;
    }
    if(pos<0)
    {
        cout<<"invalid POsition!"<<endl;
        return;
    }
    if(pos==0)
    {
        push_front(val);
        return;
    }
    node* temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    node *newnode=new node(val);
    newnode->next=temp->next;
    temp->next=newnode;
    return;
}
int search(int val)
{
    node *temp=head;
    int index=0;
    while (temp!=NULL)
    {
        if(val==temp->data)
        {
            return index; 
        }
        index++;
        temp=temp->next;
    }
    return -1;    
}
void reverselist()
{
    if(head==NULL)
    {
    cout<<"Linked List IS EMpty!"<<endl;
    return;
    }
    node* temp=head;
    node* next=head->next;
    tail=head;
    tail->next=NULL;
    while(next!=NULL)    
    {
        head=next;
        next=head->next;
        head->next=temp;
        temp=head;
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
    cout<<"NULL"<<endl;
}

};

int main ()
{
List ll;
ll.push_back(1);
ll.push_back(2);
ll.push_back(3);

cout<<"Before Reverse: ";
ll.print();
ll.reverselist();
cout<<"After Reverese: ";
ll.print();
}