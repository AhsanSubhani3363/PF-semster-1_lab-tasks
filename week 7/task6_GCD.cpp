#include<iostream>
using namespace std;
int GCD(int number1,int number2)
{ 
    int remainder;
    while (number2>0)
    {
        remainder=number1%number2;
        number1=number2;
        number2=remainder;
     }
     return number1;
}
int LCM(int number1,int number2)
{
    int LCM=(number1*number2)/GCD(number1,number2);
   return LCM;
}
int main()
{
    int number1,number2;
    cout<<"enter number 1 ";
    cin>>number1;
    cout<<"enter number 2 ";
    cin>>number2;
    cout<<"GCD= "<<GCD( number1, number2)<<endl;
    cout<<"LCM= "<<LCM( number1,number2);
}