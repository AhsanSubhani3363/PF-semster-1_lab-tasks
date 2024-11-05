#include<iostream>
using namespace std;
void table(int num)
{
    for(int i=1;i<=10;i++)
    cout<<num<<"*"<<i<<"="<<num *i;
}

int main()
{
    int num;
    cout<<"enter a number ";
    cin>>num;
    table(num);
} 
