// Union and Intersection of two Linked Lists
// Last Updated : 10 Sep, 2024
// Given two singly Linked Lists, create union and intersection lists that contain the union and intersection of the elements present in the given lists. Each of the two linked lists contains distinct node values.
// Note: The order of elements in output lists doesn’t matter. 

#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

class node
{
public:
int val;
node *next;
node(int val)
{
next=nullptr;
this->val=val;
}
void insert(int val, node* head)
{
while (head->next!=nullptr)
{
head=head->next;
}
head->next=new node(val);
return;
}
void display(node *head)
{
while(head!=nullptr)
{
cout<<head->val <<"-> ";
head=head->next;
}
cout<<endl;
return;
}

void Union(node *head1, node* head2)
{
unordered_set<int> set;
if (head1==nullptr&&head2==nullptr)
{
    cout<<"[]"<<endl;
return;
}

while(head1!=nullptr)
{
    set.insert(head1->val);
    head1=head1->next;
}

while (head2!=nullptr)
{
    set.insert(head2->val);
    head2=head2->next;
}
cout<<"Union Set: {";
for(auto it:set)
{
    cout<<it<<",";
}
cout<<"}"<<endl;
return;
}
int size(node *head)
{
    int size=0;
while (head!=nullptr)
{
    head=head->next;
    size++;
}
return size;
}
void Intersection(node *head1,node* head2)
{
    if(head1==nullptr||head2==nullptr)
    {
        cout<<"[]"<<endl;
        return;
    }
vector<int> ans;
unordered_set<int> set;
if (this->size(head1)>this->size(head2))
{
    while (head1!=nullptr)
    {
        set.insert(head1->val);
        head1=head1->next;
    }
    while (head2!=nullptr)
    {
        if(set.find(head2->val)!=set.end())
        {
            ans.push_back(head2->val);
        }
        head2=head2->next;
    }
}
else
{
    while (head2!=nullptr)
    {
        set.insert(head2->val);
        head2=head2->next;
    }
    while (head1!=nullptr)
    {
        if(set.find(head1->val)!=set.end())
        {
            ans.push_back(head1->val);
        }
        head1=head1->next;
    }
    
}
cout<<"intersection set: [";
for (int i = 0; i < ans.size(); i++)
{
cout<<ans[i]<<",";
}
cout<<"];";
return;
}
};

int main()
{
node *head=new node(1);
node *head2=new node(1);
head->insert(2, head);
head->insert(3, head);
head->insert(4, head);
head->insert(5, head);
head->insert(6, head);
head2->insert(8, head2);
head2->insert(6, head2);
head->display(head);
head2->display(head2);
head->Union(head,head2);
head->Intersection(head,head2);
return 0;
}

