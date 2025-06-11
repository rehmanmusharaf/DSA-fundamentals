// This program converts a given decimal number to its binary equivalent using a custom C++ class `DecimalToBinary`. The `decimalToBinary` method manually performs the conversion by repeated division and accumulates the binary result in integer form.

#include<iostream>
using namespace std;
class DecimalToBinary
{
private:
    /* data */
public:
int decimalToBinary(int num)
{
int pow=1;
int ans=0;
while (num>0)
{
    int remainder=num%2;
    num=num/2;
    ans+=remainder*pow;
    pow=pow*10;
}

return ans;
}
};


int main()
{
DecimalToBinary inst;
int Number=100;
cout<<"Binary of Number "<<Number<<" is: "<<inst.decimalToBinary(Number)<<" "<<endl;
return 0;
}