// Given an array of positive integers arr[] of size n, the task is to find second largest distinct element in the array.
// Note: If the second largest element does not exist, return -1.


#include<iostream>
#include<vector>
#include <algorithm>    // std::sort

using namespace std;
class SecondLargestElement{
public:
int getSecondLargestElement(vector<int>& arr)
{
    int size=arr.size();
    if(size<1||size==1)
    return -1;
    if(size==2)
    return arr[0]>arr[1]?arr[1]:arr[0];
    sort(arr.begin(),arr.end());
    cout<<endl;
    return arr[size-2];
}

};
int main()
{
    SecondLargestElement  inst;
    vector<int> arr={1,2,34,5,67};
    cout<<"Second Largest Element: "<<inst.getSecondLargestElement(arr)<<endl;
    arr={0,1};
    cout<<"Second Largest Element: "<<inst.getSecondLargestElement(arr)<<endl;
    arr={0};
    cout<<"Second Largest Element: "<<inst.getSecondLargestElement(arr)<<endl;
    return 0;
}