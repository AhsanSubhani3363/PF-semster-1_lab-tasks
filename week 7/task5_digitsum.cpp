#include<iostream>
using namespace std;
int digitsum(int number)
{ 
    int digit,sum=0;
   while (number>0)
   {
    digit=number%10;
	sum=sum+digit;
	number=number/10;
}
   return sum;
}

int main()
{
    int number;
    cout<<"enter a number ";
    cin>>number;
    cout<<digitsum( number);
 }