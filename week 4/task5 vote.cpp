#include<iostream>
using namespace std;
void vote(int age)
{

if(age>=18)
cout<<"you are eligilble to vote ";
cout<<"you are not eligilble to vote";
}
int main()
{
int a;
cout<<"enter your age ";
cin>>a;
vote(a);
}