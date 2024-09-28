#include<iostream>
using namespace std;
void add(int n1,int n2)
{
float sum;
sum=n1+n2;
cout<<"sum is "<<sum;

}
void sub(int n3,int n4)
{
float s;
s=n3-n4;
cout<<n3<<"-"<<n4<<"="<<s;

}
void product(int n5,int n6)
{
float p;
p=n5*n6;
cout<<"product is "<<p;

}
void division(int n7,int n8)
{
float d;
d=n7/n8;
cout<<n7<<"/"<<n8<<"=" <<d;
}
int main()
{
 int num1,num2;
char op;
cout<<"enter 2 numbers ";
cin>>num1>>num2;
cout<<"enter operator ";
cin>>op;
if(op=='+')
{
add(num1,num2);

}
if(op=='-')
{
sub(num1,num2);
}
if(op=='*')
{
product(num1,num2);
}
if(op=='/')
{
division(num1,num2);

}

}

