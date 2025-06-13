#include<iostream>
using namespace std;
class BinaryToDecimal
{
private:
    /* data */
public:
int binnaryTodecimal(int binaryNum)
{
    int ans=0;
    int pow=1;
    while(binaryNum>0)
    {
    int rem=binaryNum%10;
    ans+=rem*pow;
    binaryNum/=10;
    pow*=2;
    }
    return ans;
}
};

int main()
{
BinaryToDecimal inst;
int binaryNum=101;

cout<<"Decimal of Binary Number: "<<binaryNum<<" is: "<<inst.binnaryTodecimal(binaryNum)<<endl;
return 0;
}