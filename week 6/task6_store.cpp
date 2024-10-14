#include<iostream>
using namespace std;
float payamount(string day,string month,float amount)
{
    float payamount,discount;
    if((day=="sunday") || (month=="october") )
    {
      discount=amount *0.10;
      payamount=amount-discount;
      return payamount;
    }
   else
    {
        return amount;
    }
}
int main()
{
  string day,month;
  float amount,pay;
  cout<<"enter purchase day ";
  cin>>day;
  cout<<"enter purchase month";
  cin>>month;
  cout<<"enter purchase amount ";
  cin>>amount;
  pay=payamount( day, month, amount);
  cout<<"payable amount after discount is "<< pay;
}
