#include<iostream>
using namespace std;
bool symetrical(int n1)
{
	int first,last;
	first=n1/100;
	last=n1%10;
	if(first==last)
	{
		return true;
	}
	else 
	return false;
}
int main()
{
	int n1;
	cout<<"enter a three number ";
	cin>>n1;
	cout << symetrical(n1);
}
