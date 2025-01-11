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
        next=NULL;;
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
    bool detectcycle()
    {
    node* slow=head;
    node* fast=head;

    while (fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cout<<"Cycle Detected!"<<endl;
            return true;
        }
    }
    cout<<"cycle NOt Detected!"<<endl;
    return false;    
    }
    
    node* startingPointCfCycle()
    {
    node* slow=head;
    node* fast=head;
    bool isCycle=false;
    while (fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cout<<"Cycle Detected!"<<endl;
            isCycle=true;
            break;
        }
    }
    if(!isCycle)
    {
    return NULL;
    }
    slow=head;
    while (slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    }
    node* removeCycle()
    {
    node* slow=head;
    node* fast=head;
    bool isCycle=false;
    while (fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            cout<<"Cycle Detected During Removing!"<<endl;
            isCycle=true;
            break;
        }
    }
    if(!isCycle)
    {
    return NULL;
    }
    slow=head;
    node* prev=NULL;
    while (slow!=fast)
    {
        slow=slow->next;
        prev=fast;
        fast=fast->next;
    }
    prev->next=NULL;
    return slow;
    }

    void addcycle()
    {
        cout<<"cycle added"<<endl;
        tail->next=head;
       return;
    }
    void print()
    {
        if(head==NULL)
        {
            cout<<"LinkedList is Empty!"<<endl;

        }
        else
        {
            node* temp=head;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL";
        }
    }
};
int main ()
{
List ll;
ll.push_back(1);
ll.push_back(2);
ll.push_back(3);
ll.push_back(4);
ll.push_back(5);

ll.addcycle();

ll.detectcycle();
node* cycleStartNode=ll.startingPointCfCycle();
if(cycleStartNode!=NULL)
{
cout<<"starting Point of Cycle: "<<cycleStartNode->data<<endl;
ll.removeCycle();
cout<<"Cycle Remove!"<<endl;
cout<<"Check Cycle After Removing it!"<<endl;
ll.detectcycle();

}
// ll.print();
return 0;
}