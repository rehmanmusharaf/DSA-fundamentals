// Maximum product of a triplet (subsequence of size 3) in array
// Last Updated : 12 Feb, 2025
// Given an integer array, find a maximum product of a triplet in the array.

// Examples: 

// Input:  arr[ ] = [10, 3, 5, 6, 20]
// Output: 1200
// Explanation: Multiplication of 10, 6 and 20


// Input:  arr[ ] =  [-10, -3, -5, -6, -20]
// Output: -90


// Input: arr[ ] =  [1, -4, 3, -6, 7, 0]
// Output: 168


#include<iostream>
#include<vector>
using namespace std;
class threeGreatCandidates
{
private:
    /* data */
public:
int getthreeGreatCandidates(vector<int> arr)
{
if(arr.size()<=3)
return -1;
int ans=1;
for (int i = 0; i < 3; i++)
{
int maxNum=arr[0];
int index=0;
for (int j = 0; j < arr.size(); j++)
{
if(arr[j]>maxNum)
{
maxNum=arr[j];
index=j;
}
}
ans*=arr[index];
arr[index]=0;
}
return ans;
}
};
int main ()
{
    threeGreatCandidates inst;
    vector<int> arr = {10, 3, 5, 6, 20};
    cout <<"max product is: "<< inst.getthreeGreatCandidates(arr) << endl;
    return 0;
}
