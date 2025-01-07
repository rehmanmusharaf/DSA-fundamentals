#include<iostream>
using namespace std;
void passedbyrefernce(int *x)
{
*x=2;
return;
}
int main ()
{
// array pointer
int arr[]={1,2,3,4,5,6};
cout<<"Arr: "<<arr<<endl;
int* test=arr;
for (int i = 0; i < 5; i++)
{
    /* code */
cout<<"*Arr: "<<*test<<endl;
test++;
}

int x=1;
// pass by refernce
passedbyrefernce(&x);
cout<<"x  is: "<<x<<endl;
// pointers
int* ptr=&x;
int** nullptrr=NULL;
cout<<"it logs random address: "<<nullptrr<<endl;
// it logs the address off x 
cout<<"ptr: "<<ptr<<endl;
// it logs the value inside that adddress
cout<<"*ptr: "<<*ptr<<endl;
// it log the address of pointer
cout<<"&ptr : "<<&ptr<<endl;
// it stores the address of pointer type varaible
int **ptr1=&ptr;
// it logs the address of ptr whihc is stores in ptr1 ptr1 store the address of pointer type varaible
cout<<"ptr1: "<<ptr1<<endl;
// it logs the value stores inside the ptr
cout<<"*ptr1: "<<*ptr1<<endl;
cout<<"&x: "<<&x<<endl;
// it logs the value of the address that stores inside the ptr
cout<<"**ptr1: "<<**ptr1<<endl;
return 0;
}