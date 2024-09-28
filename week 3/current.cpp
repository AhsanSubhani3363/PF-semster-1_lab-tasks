#include<iostream>
using namespace std;
int main()
{
	float q,t,i;
	cout<<"enter charge in coulombs ";
	cin>>q;
	cout<<"enter time in seconds ";
	cin>>t;
	i=q/t;
	cout<<"current is "<<i<<"amperes";
}