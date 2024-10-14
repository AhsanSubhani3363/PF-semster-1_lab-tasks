#include<iostream>
using namespace std;
bool areSameNumber(int num1, int num2, int num3)
{
    if(num1==num2 && num2==num3 && num1==num3)
    {
        return true;
    }
    else
       return false; 
} 
int main()
{
    float num1,num2,num3;
    cout<<"enter first number ";
    cin>>num1;
     cout<<"enter second number ";
    cin>>num2;
     cout<<"enter third number ";
    cin>>num3;
    cout<<areSameNumber( num1,  num2,  num3);
}

