#include<iostream>
using namespace std;
int main ()
{
int x=1;
int* ptr=&x;
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
// it logs the value of the address that stores inside the ptr
cout<<"**ptr1: "<<**ptr1<<endl;
return 0;
}