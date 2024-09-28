#include<iostream>
using namespace std;
void calculatepayableamount(string day,float amount )
{
	if(day=="sunday")
	{
		float discount,pay_amount;
		discount=amount*0.1;//10%=10/100=1/10=0.1
		pay_amount=amount-discount;
		cout<<"payable amount "<<pay_amount<<endl;
	}
	else
	{
		float discount,pay_amount;
		discount=amount*0.05;//5%=5/100=0.05
		pay_amount=amount-discount;
		cout<<"payable amount "<<pay_amount<<endl;
	}
}
int main()
{
	while(true){
	
	string day;
	float amount;
	cout<<"enter the day of purchase ";//<<endl;
	cin>>day;
	cout<<"enter  purchase amount "<<endl;
	cin>>amount;
	calculatepayableamount(day,amount);
}
	
	
}
