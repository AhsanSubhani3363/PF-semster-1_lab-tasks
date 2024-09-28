#include<iostream>
using namespace std;
void calculatepayableamount(string day,float amount )
{
	if(day=="sunday")
	{
		float discount,pay_amount;
		discount=amount*0.1;//10%=10/100=1/10=0.1
		pay_amount=amount-discount;
		cout<<"payable amount "<<pay_amount;
	}
}
int main()
{
	string day;
	float amount;
	cout<<"enter the day of purchase ";
	cin>>day;
	cout<<"enter  purchase amount ";
	cin>>amount;
	calculatepayableamount(day,amount);
	
	
}
