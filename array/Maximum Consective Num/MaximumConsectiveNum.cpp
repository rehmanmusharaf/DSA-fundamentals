// Given an array arr[] consisting of only 0’s and 1’s, the task is to find the count of a maximum number of consecutive 1’s or 0’s present in the array.


#include<iostream>
#include<vector>
using namespace std;
class MaximumConsectiveNum
{
private:
    /* data */
public:
int getMaxCount(vector<int> arr)
{
if(arr.size()==1)
return 1;
int num=arr[0];
int count=1;
int maxCount=1;
for(int i=1;i<arr.size();i++)
{
if(num==arr[i])
{
    count++;
}
else if(num!=arr[i])
{
    if(maxCount<count)
    {
        maxCount=count;
    }
    num=arr[i];
    count=1;
}
}
return count>maxCount?count: maxCount;
}

};

int main ()
{
MaximumConsectiveNum inst;
vector<int> arr={1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0};
cout<<"max count: of consective number is: "<<inst.getMaxCount(arr)<<endl;
}