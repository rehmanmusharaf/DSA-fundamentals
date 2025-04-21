// Non-Repeating Element
// Difficulty: EasyAccuracy: 39.31%Submissions: 125K+Points: 2Average Time: 20m
// Find the first non-repeating element in a given array arr of integers and if there is not present any non-repeating element then return 0

// Note: The array consists of only positive and negative integers and not zero.

// Examples:

// Input: arr[] = [-1, 2, -1, 3, 2]
// Output: 3
// Explanation: -1 and 2 are repeating whereas 3 is the only number occuring once. Hence, the output is 3. 
// Input: arr[] = [1, 1, 1]
// Output: 0
// Explanation: There is not present any non-repeating element so answer should be 0.
// Expected Time Complexity: O(n).
// Expected Auxiliary Space: O(n).

// Constraints:
// 1 <= arr.size <= 106
// -109 <= arr[i] <= 109
// arr[i] != 0 


#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class NonRepeating
{
private:
    /* data */
public:
int findNonRepeating(vector<int> arr)
{
if(arr.size()<1)
return 0;
if(arr.size()==1)
return arr[0];
unordered_map<int,int> um; 
for(int i=0;i<arr.size();i++)
{
um[arr[i]]++;
}
auto it=um.begin();
int minNum=0;
for(int i=0;i<arr.size();i++)
{
auto it=um.find(arr[i]);
if(it->second==1)
{
    minNum=it->first;
    break;
}
}
return minNum;
}

};

int main ()
{
NonRepeating inst;
vector<int> arr={1,2,3,3,4,5,1,5,6,6,7,8,8,9,2,9,0,7,4};
unordered_map<int,int> um;
um.insert({{1,2},{2,4}});
cout<<"First Non repeating Element: "<<inst.findNonRepeating(arr)<<endl;
return 0;
}