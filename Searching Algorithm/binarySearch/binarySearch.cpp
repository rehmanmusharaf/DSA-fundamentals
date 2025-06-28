#include<iostream>
#include<vector>
using namespace std;
class BinarySearch
{
public:
int binarySearch(vector<int> arr,int target)
{
int low=0,heigh=size(arr)-1;
while(low<=heigh)
{
int mid=low+(heigh-low)/2;
if(arr[mid]==target)
{
return mid;
}
else if(arr[mid]<target)
{
    low=mid+1;
}
else
{
heigh=mid-1;
}
}
    return -1;
}
};
int main()
{
BinarySearch inst;
vector<int> arr={1,2,3,4,56,66,6};
int target=66;
cout<<"Number :"<<target<<" found in index "<<inst.binarySearch(arr,target)<<endl;
return 0;
}