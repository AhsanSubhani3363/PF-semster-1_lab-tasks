#include<iostream>
using namespace std;
int main()
{
 int w,l,d,p;
cout<<"enter number of wins  ";
cin>>w;
cout<<"enter number of losses  ";
cin>>l;
cout<<"enter number of draws  ";
cin>>d;

p=(3*w)+(1*d)+(0*l);
cout<<"pakistan has got "<<p<<" points in tournament";
}