#include<iostream>
using namespace std;
int odd(int num)
{
	int digit,sum=0;
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	digit=num%10;
	sum=sum+digit;
	num=num/10;
	digit=num%10;
	sum=sum+digit;
	if(sum%2==0)
	cout<<"evenish";
	else
	cout<<"oddish";
	
}
int main()
{
	int  n1,s;
	cout<<"enter 5 digit  number ";
	cin>>n1;
	odd(n1);
}
