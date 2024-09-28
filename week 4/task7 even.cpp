#include<iostream>
using namespace std;
void even(int n1)
{
if(n1%2==0)
cout<<"even number ";
if(n1%2!=0)
cout<<"number is odd ";

}
int main()
{
int number;
cout<<"enter any number";
cin>>number;
even(number);

}