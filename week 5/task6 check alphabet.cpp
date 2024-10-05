#include<iostream>
using namespace std;
void checkalphabetcase(char ch)
{
	if(ch=='a')
	{
		cout<<"you enter a ";
	}
	else if(ch=='A')
	{
		cout<<"you enter capital A ";
	}
}
int main()
{
	char ch;
	cout<<"enter a character ";
	cin>>ch;
	checkalphabetcase( ch);
}
