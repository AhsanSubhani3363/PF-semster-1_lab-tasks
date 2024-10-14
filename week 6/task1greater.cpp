#include<iostream>
using namespace std;
int greaternumber(int number1,int number2)
{
    if(number1>number2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num1,num2;
    cout<<"enter first number";
    cin>>num1;
    cout<<"enter second number ";
    cin>>num2;
    cout<<greaternumber(num1,num2);


    
}