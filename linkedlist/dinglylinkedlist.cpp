#include<iostream>
using namespace std;
class Node
{
    int data;
    Node *next;
    public:
    void push(Node** head,int data)
    {

    Node *newNode=new Node;
    newNode->data=4;
    newNode->next=(*head);
    // cout<<newNode->data<<" - "<<newNode->next<<endl;
    (*head)=newNode;
    }
    void append(Node** head,int data)
    {
            cout<<"head is: "<<head<<endl;
    Node* newnode=new Node();
    newnode->next=nullptr;
    newnode->data=data;
    if(*head==nullptr)
    {
    cout<<"if condition run!"<<head<<endl;    
    *head=newnode;
    return;
    }
    Node *last=*head;
    while(last->next!=nullptr)
    {
        last=last->next;
    }
    last->next=newnode;
    }
    void insertafter(Node* prevnode,int data)
    {
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=prevnode->next;
    prevnode->next=newnode;
    return;
    }
    void display(Node *head)
    {
        Node* newnode=head;
        while (newnode!=nullptr)
        {
            cout<<newnode->data<<"->";
            newnode=newnode->next;
        }
        cout<<"NULL"<<endl;
        // cout<<"Hello World!"<<endl;
    }
    Node* deletenode(Node* head)
    {
    if(head==nullptr)
    return nullptr;
    Node* tempnode=head;
    head=head->next;
    delete tempnode;
    return head;
    }
};
int main ()
{
    Node *head=nullptr;
    cout<<"head: "<<head<<endl;
    cout<<"head address: "<<&head<<endl;
    head->append(&head,1);
    head->append(&head,2);
    head->append(&head,3);
    head->push(&head,4);
    head->display(head);
    head->insertafter(head,5);   
    head=head->deletenode(head);
    head->display(head);
    return 0;
}