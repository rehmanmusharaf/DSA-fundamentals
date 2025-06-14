#include<iostream>
#include<vector>
using namespace std;
class KadanesAlgorithm
{
private:
    /* data */
public:
int maxSubArray(vector<int> arr)
{
int currSum=0,maxSum=INT_MIN;
for(int val:arr)
{
currSum+=val;
maxSum=max(maxSum,currSum);
if(currSum<0)
{
    currSum=0;
}
}
return maxSum;
}
};

int main ()
{
KadanesAlgorithm inst;
vector<int> arr={1,2,3,4,5,6,-10};
cout<<"max sub Array Sum is: "<<inst.maxSubArray(arr)<<endl;
return 0;
}