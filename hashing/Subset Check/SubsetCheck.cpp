// Check if an array is subset of another array
// Last Updated : 31 Dec, 2024
// Given two arrays a[] and b[] of size m and n respectively, the task is to determine whether b[] is a subset of a[]. Both arrays are not sorted, and elements are distinct.

// Examples: 


#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;

class SubsetCheck
{
private:
    /* data */
public:
bool CheckSubSet(vector<int> a,vector<int> b)
{
if(a.size()==0||b.size()==0)    
{
return false;
}
unordered_set<int> us(a.begin(),a.end());
for (int i=0;i<b.size();i++)
{
if(us.find(b[i])!=us.end())
{
    cout<<b[i]<<" found in array 1!"<<endl;
continue;
}
else
{
    return false;
}
}
return true;
}

};
int main ()
{
SubsetCheck inst;
vector<int> a={1, 2, 3, 4, 5, 6}, b= {1, 2, 4,9}; 
bool output=inst.CheckSubSet(a,b);
if(output)
cout<<" b is subset"<<endl;
else
cout<<" b is not Subset!"<<endl;
return 0;
}